%{

#include <iostream>
#include "symbols.hpp"
#include "lex.yy.cpp"

#define Trace(t) if (P) if (P) cout << t << endl;

int P = 1;
void yyerror(string s);

SymbolTableList symbols;
vector<vector<idInfo>> functions;

%}

/* yylval */
%union {
	int ival;
	bool bval;
  	double dval;
  	string *sval;
  	int type;
  	idInfo* info;
}
/* tokens */
%token LE RE NEQ ASSIGNMENT AND OR NOT

/* keyworkd */
%token BEG BREAK CHARACTER CASE CONTINUE CONSTANT DECLARE DO ELSE END EXIT FLOAT FOR IF IN INTEGER LOOP PRINT PRINTLN PROCEDURE PROGRAM RETURN STRING WHILE THEN BOOLEAN READ

/* Value */
%token <ival> INTEGER_C;
%token <sval> ID;	
%token <dval> REAL_C;	/* float */
%token <sval> STRING_C;
%token <bval> BOOLEAN_C;

/* return type for non-terminal */
%type <info> constant_value expression procedure_invocation
%type <type> variable_type opt_return_type

/* operators with the precedence */
%left OR
%left AND
%left NOT
%left '<' LE '=' RE '>' NEQ
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%start program

%%

program			:PROGRAM ID
			{
				Trace("program(program)");
			}
			DECLARE 
			{
				Trace("program(declare)");
			}
			opt_variables_dec opt_procedures_dec BEG opt_statements END END ID
			{
                                symbols.dump();
                                symbols.pop();
                        }
			|PROGRAM ID
			{
                                Trace("program(program)");
                        }
			BEG opt_statements END END ID
			{
                                symbols.dump();
                                symbols.pop();
                        }
			;

opt_variables_dec	: variable_dec opt_variables_dec
			| constant_dec opt_variables_dec
			|
			;

constant_dec		: ID ':' CONSTANT ':' variable_type ASSIGNMENT expression ';'
			{
                        	Trace("constant declaration(type)");
				/* check constant */
                       		if (!isConst(*$7)) yyerror("expression is not a constant value");
				/* check type parameter */
                          	if ($5 != $7->type) yyerror("type not match");
                          	$7->flag = constVariableFlag;
                          	$7->init = true;
				/* symbol check*/
				if (symbols.insert(*$1, *$7) == -1) yyerror("constant redefinition");
                        }
			| ID ':' CONSTANT ASSIGNMENT  expression ';'
			{
                          	Trace("constant declaration");
				/* check constant */
                          	if (!isConst(*$5)) yyerror("expression not constant value");
	                        $5->flag = constVariableFlag;
                          	$5->init = true;
				/* symbol check */
				if (symbols.insert(*$1, *$5) == -1) yyerror("constant redefinition");
                        }
			;

variable_dec		: ID ':' variable_type ASSIGNMENT expression ';'
			{
                          	Trace("variable declaration(ID ':' variable_type ':=' expression ';' )");
				/* check constant*/
                          	if (!isConst(*$5)) yyerror("expression is not constant value");
				/* check type */
                          	if ($3 != $5->type) yyerror("type is not match");
	                        $5->flag = variableFlag;
        	                $5->init = true;
				/* symbol check */
				if (symbols.insert(*$1, *$5) == -1) yyerror("variable redefinition");
			}
			| ID ':' variable_type ';'
			{
				Trace("variable declaration (ID ':' variable_type expression ';')");
				idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = $3;
                          	info->init = false;
                          	if (symbols.insert(*$1, *info) == -1) yyerror("variable redefinition");
			}
			| ID ASSIGNMENT expression ';' 
			{
                        	Trace("variable declaration (ID ASSIGNMENT expression ';')");
                          	if (!isConst(*$3)) yyerror("expression not constant value");
	                        $3->flag = variableFlag;
        	                $3->init = true;
                	        if (symbols.insert(*$1, *$3) == -1) yyerror("variable redefinition"); /* symbol check */
                        }
			| ID ';'
			{
                        	Trace("variable declaration(ID ';')");

                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = intType;
                          	info->init = false;
                          	if (symbols.insert(*$1, *info) == -1) yyerror("variable redefinition"); /* symbol check */
                        }
			| ID ';' variable_type '[' expression ']' ';'
			{
			  	Trace("array declaration");
                          	if (!isConst(*$5)) yyerror("array size not constant");
                          	if ($5->type != intType) yyerror("array size not integer");
                          	if ($5->value.ival < 1) yyerror("array size < 1");
                          	if (symbols.insert(*$1, $3, $5->value.ival) == -1) yyerror("variable redefinition");
			}
			;

variable_type		: INTEGER
			{
				$$ = intType;
			}
			| STRING
			{
				$$ = strType;
			}
			| BOOLEAN
			{	
				$$ = boolType;
			}
			| FLOAT
			{
				$$ = realType;
			}
			;

constant_value		: INTEGER_C
			{
				$$ = intConst($1);
			}
			| REAL_C
			{
				$$ = realConst($1);
			}
			| BOOLEAN_C
			{
				$$ = boolConst($1);
			}
			| STRING_C
			{
				$$ = strConst($1);
			}
			;

/* procedure declarations */
opt_procedures_dec	: procedure_dec opt_procedures_dec
			| procedure_dec
			;

procedure_dec		: PROCEDURE ID
			{
				Trace("procedure declaration");
                                cout << *$2 <<endl;
                                idInfo *info = new idInfo();
                                info->flag = functionFlag;
                                info->init = false;
                                if (symbols.insert(*$2, *info) == -1) yyerror("function redefinition"); /* symbol check */
                                symbols.push();

			}
			'(' opt_arguments ')' RETURN opt_return_type block END ID ';'
			{
				symbols.dump();
                          	symbols.pop();
			}
			;

opt_arguments		: arguments
			|
			;

arguments		: argument ';' arguments
			| argument
			;

argument		: ID ':' variable_type
			{
				idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = $3;
                          	info->init = false;
                          	if (symbols.insert(*$1, *info) == -1) yyerror("variable redefinition");
                          	symbols.addFuncArg(*$1, *info);
			}
			;

opt_return_type		: variable_type
			{
				symbols.setFuncType($1);
			}
			|
			{
				symbols.setFuncType(voidType);
			}
			;

opt_statements          : statement opt_statements
                        | statement 
                        ;

statement		: simple
			| block
			| conditional
			| loop
			| procedure_invocation
			{
                            if($1 != NULL) yyerror("procedure invocation should not have return value");
                        }
                        ;

simple			: ID ASSIGNMENT expression ';'
			{
				Trace(" variable assignment");
	                        idInfo *info = symbols.lookup(*$1);
                          	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	if (info->flag == constVariableFlag) yyerror("can't assign to constant"); /* constant check */
                          	if (info->flag == functionFlag) yyerror("can't assign to function"); /* function check */
                          	if (info->type != $3->type) yyerror("type not match"); /* type check */

			}
			| ID '[' expression ']' ASSIGNMENT expression ';'
			{
				Trace("Array assignment");

                          	idInfo *info = symbols.lookup(*$1);
                         	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	if (info->flag != variableFlag) yyerror("not a variable"); /* variable check */
                          	if (info->type != arrayType) yyerror("not a array"); /* type check */
                          	if ($3->type != intType) yyerror("index not integer"); /* index type check */
                          	if ($3->value.ival >= info->value.aval.size() || $3->value.ival < 0) yyerror("index out of range"); /* index range check */
                          	if (info->value.aval[0].type != $6->type) yyerror("type not match"); /* type check */
			}
			| PRINT '(' expression ')' ';'
			{
				Trace("print(expression)");
			}
			| PRINT expression ';'
			{
				Trace("print expression");
			}
			| PRINTLN '(' expression ')' ';'
			{
				Trace("println(expression)");
			}
			| PRINTLN expression ';'
			{
				Trace("expression");
			}
			| READ ID ';'
			{
				idInfo *info = symbols.lookup(*$2);
	                        if (info == NULL) yyerror("symbol not found(read)"); /* declaration check */
        	                Trace("READ ID");

			}
			| RETURN expression ';'
			{
				Trace("return expression");
			}
			| RETURN ';'
			{
				Trace("return");
			}
			;

block			: DECLARE opt_variables_dec BEG
			{
				Trace("----block start----");
				symbols.push();
			}
			opt_statements END ';'
			{
				Trace("----block end----");
				symbols.dump();
				symbols.pop();
			}
			|BEG
			{
				Trace("----block start----");
                                symbols.push();
			}
			opt_statements END ';'
			{
				Trace("----block end----");
                                symbols.dump();
                                symbols.pop();
			}
			;

conditional		: IF expression THEN BorS ELSE BorS END IF ';'
                        {
                          	Trace(" if then else");
                          	if ($2->type != boolType) yyerror("condition type error (if_then_else)");
                        }
			| IF expression THEN BorS END IF ';'
			{
				Trace(" if then");
                          	if ($2->type != boolType) yyerror("condition type error (if then)");
			}
			;

BorS			: simple
			| block
			;

loop			: WHILE expression LOOP BorS END LOOP ';'
			{
                          	Trace("while loop");
                          	if ($2->type != boolType) yyerror("while condition type error");
                        }
			| FOR '(' ID IN INTEGER_C '.''.' INTEGER_C ')' BorS END IF ';'
			{
                          	Trace("FOR loop");
                          	idInfo *info = symbols.lookup(*$3);
                          	if (info == NULL) yyerror("undeclared indentifier(for)"); /* declaration check */
                          	if (info->flag != variableFlag) yyerror("not a variable(for)"); /* function check */
                          	if(info->type != intType) yyerror("variable should be int(for)");

                        }
			;

procedure_invocation	: ID 
			{
                          functions.push_back(vector<idInfo>());
                        }
			'(' opt_comma_separated ')' ';'
			{
                          	Trace("procedure_invocation");
                          	idInfo *info = symbols.lookup(*$1);
                          	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	if (info->flag != functionFlag) yyerror("not a function"); /* function check */
                          	vector<idInfo> para = info->value.aval;
                          	if (para.size() != functions[functions.size() - 1].size()) yyerror("parameter size not match"); /* parameter size check */
                          	for (int i = 0; i < para.size(); ++i) {
                            		if (para[i].type != functions[functions.size() - 1].at(i).type) yyerror("parameter type not match"); /* parameter type check */
                          	}
                          	$$ = info;
                          	functions.pop_back();
                        }
			| ID ';'
                        {
                          	functions.push_back(vector<idInfo>());
                        }
			;

opt_comma_separated	: comma_separated
			/* null */
			|
			;

comma_separated		: procedure_expression ',' comma_separated
			| procedure_expression
			;

procedure_expression	: expression
			{
                          	functions[functions.size() - 1].push_back(*$1);
                        }
			;

expression		: ID
			{
                          	idInfo *info = symbols.lookup(*$1);
                          	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	$$ = info;
                        }
			| constant_value
			{
                            	$$ = $1;
                        }
			| ID '[' expression ']'
			{
                          	idInfo *info = symbols.lookup(*$1);
                          	if (info == NULL) yyerror("undeclared identifier");
                          	if (info->type != arrayType) yyerror("not array type");
                          	if ($3->type != intType) yyerror("invalid index");
                          	if ($3->value.ival >= info->value.aval.size()) yyerror("index out of range");
                          	$$ = new idInfo(info->value.aval[$3->value.ival]);
                        }
			| procedure_invocation
			| '-' expression %prec UMINUS
			{
                          	Trace("-expression");

                          	if ($2->type != intType && $2->type != realType) yyerror("operator error"); /* operator check */
                          	if($2 -> type == intType)
                          	{
                            		$2 -> value.ival *= -1;
                          	}
                          	else
                         	{
                            		$2 -> value.dval *= -1;
                          	}
                          	$$ = $2;
                        }
			| expression '*' expression
			{
                          	Trace("expression * expression");
                          	if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          	if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */
                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = $1->type;

                          	if($1 -> type == intType)
                          	{
                            		info->value.ival = $1 -> value.ival * $3 -> value.ival;
                          	}
                          	else
                          	{
                             		info->value.dval = $1 -> value.dval * $3 -> value.dval;
                          	}

                          	$$ = info;
                        }
			| expression '/' expression
			{
                          Trace("expression / expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $1->type;
                          if($1 -> type == intType)
                          {
                            info->value.ival = $1 -> value.ival / $3 -> value.ival;
                          }
                          else
                          {
                             info->value.dval = $1 -> value.dval / $3 -> value.dval;
                          }
                          $$ = info;
                        }
			| expression '+' expression
			{
                          Trace("expression + expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $1->type;
                          if($1 -> type == intType)
                          {
                            info->value.ival = $1 -> value.ival + $3 -> value.ival;
                          }
                          else
                          {
                             info->value.dval = $1 -> value.dval + $3 -> value.dval;
                          }
                          $$ = info;
                        }
			| expression '-' expression
			{
                          Trace("expression - expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $1->type;
                          if($1 -> type == intType)
                          {
                            info->value.ival = $1 -> value.ival - $3 -> value.ival;
                          }
                          else
                          {
                             info->value.dval = $1 -> value.dval - $3 -> value.dval;
                          }
                          $$ = info;
                        }
			| expression '<' expression
			{
                          Trace("expression < expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType && $1 -> type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival < $3 -> value.ival;
                          }
                          else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval < $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval < $3 -> value.dval;
                          }
                          $$ = info;
                        }
			| expression LE expression
			{
                          Trace("expression <= expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType && $1->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival <= $3 -> value.ival;
                          }
                           else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval <= $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval <= $3 -> value.dval;
                          }
                          $$ = info;
                        }
			| expression '=' expression
			{

                          Trace("expression == expression");
                          if ($1->type != $3->type) yyerror("type not match"); /* type check */


                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival == $3 -> value.ival;

                          }
                          else if($1 -> type == boolType)
                          {

                            info -> value.bval = $1 -> value.bval == $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval == $3 -> value.dval;
                          }
                          $$ = info;
                        }
			| expression RE expression
			{
                          Trace("expression >= expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType && $1->type!= boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival >= $3 -> value.ival;
                          }
                           else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval >= $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval >= $3 -> value.dval;
                          }
                          $$ = info;
                        }
			| expression '>' expression
			{
                          Trace("expression > expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType && $1->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {

                            info->value.bval = $1 -> value.ival > $3 -> value.ival;

                          }
                          else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval > $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval > $3 -> value.dval;
                          }
                          $$ = info;

                        }
			| expression NEQ expression
			{
                          Trace("expression != expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival != $3 -> value.ival;
                          }
                           else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval != $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval != $3 -> value.dval;
                          }
                          $$ = info;
                        }
			| NOT expression
			{
                          Trace("NOT expression");

                          if ($2->type != boolType) yyerror("operator error"); /* operator check */

                          $2 -> value.bval = !$2 -> value.bval;

                          $$ = $2;
                        }
			| expression AND expression
			{
                          Trace("expression && expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = $1-> value.bval && $3 -> value.bval;
                          $$ = info;
                        }
			| expression OR expression
			{
                          Trace("expression || expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */

                          if ($1->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = $1-> value.bval && $3 -> value.bval;
                          $$ = info;
                        }
			;

%%
void yyerror(string s)
{
	cerr << "line" << lineNum << ":" << s << endl;
	exit(1);
}	
	
int main(void)
{
	yyparse();
	return 0;
}
