%{

#include <iostream>
#include "symbols.hpp"
#include "lex.yy.cpp"
#include "codeGen.hpp"

#define Trace(t) if (P) if (P) cout << t << endl;

string filename;
ofstream out;

int P = 0;
int method_num = 0;
int main_num = 0;
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
  	idInfo *info;
}
/* tokens */
%token LE GE NEQ ASSIGNMENT AND OR NOT

/* keyworkd */
%token BEG BREAK CHARACTER CASE CONTINUE CONSTANT DECLARE DO ELSE END EXIT FLOAT FOR IF IN INTEGER LOOP PRINT PRINTLN PROCEDURE PROGRAM RETURN STRING WHILE THEN BOOLEAN READ

/* Value */
%token <sval> ID;
%token <bval> BOOLEAN_C;
%token <ival> INTEGER_C;
%token <dval> REAL_C;	/* float */
%token <sval> STRING_C;

/* return type for non-terminal */
%type <info> constant_value expression procedure_invocation
%type <type> variable_type opt_return_type

/* operators with the precedence */
%left OR
%left AND
%left NOT
%left '<' LE '=' GE '>' NEQ
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%start program

%%

program			:PROGRAM ID
			{
				ProgramStart();
				Trace("program(program)");
			}
			DECLARE opt_variables_dec opt_procedures_dec
			{
				Trace("program(declare)");
				MainStart();
			}
			main_block END ID
			{
                         	if(main_num == 0){
					yyerror("no main");
				}
                                symbols.pop();
				ProgramEnd();
                        }
			|PROGRAM ID
                        {
                                ProgramStart();
                                Trace("program(program)");
                        }
			opt_procedures_dec
                        {
                                Trace("program(declare)");
                                MainStart();
                        }
                        main_block END ID
                        {
                                if(main_num == 0){
                                        yyerror("no main");
                                }
                                symbols.pop();
                                ProgramEnd();
                        }
			;

main_block		:BEG opt_statements
                        {
                                main_num++;
                        } 
                        END ';'
			{
				Return();
				MainEnd();
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
			| ID ':' CONSTANT ASSIGNMENT expression ';'
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
                          	//if (!isConst(*$5)) yyerror("expression is not constant value");
				/* check type */
                          	if ($3 != $5->type) yyerror("type is not match");
	                        $5->flag = variableFlag;
        	                $5->init = true;
				/* symbol check */
				if (symbols.insert(*$1, *$5) == -1) yyerror("variable redefinition");
				if ($3 == intType || $3 == boolType) {
					int idx = symbols.getIndex(*$1);
					int val = getValue(*$5);
					if (idx == -1) {
						GlobalVarWithVal(*$1, val);
					}
					else if (idx >= 0) {
						LocalVarWithVal(idx, val);
					}
				}
			}
			| ID ':' variable_type ';'
			{
				Trace("variable declaration (ID ':' variable_type expression ';')");
				idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = $3;
                          	info->init = false;
                          	if (symbols.insert(*$1, *info) == -1) yyerror("variable redefinition");
				if ($3 == intType || $3 == boolType) {
					int idx = symbols.getIndex(*$1);
					if (idx == -1) {
                                                GlobalVar(*$1);
                                        }
				}
			}
			| ID ASSIGNMENT expression ';' 
			{
                        	Trace("variable declaration (ID ASSIGNMENT expression ';')");
                          	//if (!isConst(*$3)) yyerror("expression not constant value");
	                        $3->flag = variableFlag;
        	                $3->init = true;
                	        if (symbols.insert(*$1, *$3) == -1) yyerror("variable redefinition"); /* symbol check */
				int idx = symbols.getIndex(*$1);
				int val = getValue(*$3);
				if (idx == -1) {
					GlobalVarWithVal(*$1, val);
				}
				else if (idx >= 0){
					LocalVarWithVal(idx, val);
				}
                        }
			| ID ';'
			{
                        	Trace("variable declaration(ID ';')");

                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = intType;
                          	info->init = false;
                          	if (symbols.insert(*$1, *info) == -1) yyerror("variable redefinition"); /* symbol check */
				int idx = symbols.getIndex(*$1);
				if (idx == -1) {
					GlobalVar(*$1);
				}
                        }
			| ID ':' variable_type '[' expression ']' ';'
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
			|
			;

procedure_dec		: PROCEDURE ID
			{
				Trace("procedure declaration");
                                idInfo *info = new idInfo();
                                info->flag = functionFlag;
                                info->init = false;
                                if (symbols.insert(*$2, *info) == -1) yyerror("function redefinition"); /* symbol check */
                                symbols.push();

			}
			'(' opt_arguments ')' opt_return_type
			{
                                FuncStart(*symbols.lookup(*$2));
			} 
			block END ID ';'
			{
				if (symbols.lookup(*$2)->type == voidType) {
					VoidFuncEnd();
				}
				else {
					BlockEnd();
				}
				method_num++;
                          	symbols.pop();
			}
			| PROCEDURE ID
                        {
                                Trace("procedure declaration");
                                idInfo *info = new idInfo();
                                info->flag = functionFlag;
                                info->init = false;
                                if (symbols.insert(*$2, *info) == -1) yyerror("function redefinition"); /* symbol check */
                                symbols.push();

                        }
                        opt_return_type
                        {
                                FuncStart(*symbols.lookup(*$2));
                        } 
                        block END ID ';'
                        {
                                if (symbols.lookup(*$2)->type == voidType) {
                                        VoidFuncEnd();
                                }
                                else {
                                        BlockEnd();
                                }
                                method_num++;
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

opt_return_type		: RETURN variable_type
			{
				symbols.setFuncType($2);
			}
			|
			{
				symbols.setFuncType(voidType);
			}
			;

opt_statements          : statement opt_statements
                        | statement
			| 
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
				 if (info->type == intType || info->type == boolType) {
					int idx = symbols.getIndex(*$1);
					if (idx == -1)
						SetGlobalVar(*$1);
					else
						SetLocalVar(idx);
				}
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
			|PRINT
			{
                                PrintStart();
                        } 
			expression ';'
			{
				Trace("print(expression)");
				if ($3->type == strType){
					ConstStr($3->value.sval);
					PrintStr();
				}
				else {
					PrintInt();
				}
			}
			/*
			|
                        {
                                PrintStart();
                        }  
			PRINT expression ';'
			{
				Trace("print expression");
				if ($3->type == strType)
                                        PrintStr();
                                else
                                        PrintInt();
			}
			*/
			|PRINTLN
			{
                                PrintStart();
                        } 
			expression ';'
			{
				Trace("println(expression)");
				if ($3->type == strType) {
					ConstStr($3->value.sval);
                                        PrintlnStr();
				}
                                else {
                                        PrintlnInt();
				}
			}
			/*
			|
                        {
                                PrintStart2();
                        }  
			PRINTLN expression ';'
			{
				Trace("println expression");
				if ($3->type == strType)
                                        PrintlnStr();
                                else
                                        PrintlnInt();
			}
			*/
			| READ ID ';'
			{
				idInfo *info = symbols.lookup(*$2);
	                        if (info == NULL) yyerror("symbol not found(read)"); /* declaration check */
        	                Trace("READ ID");

			}
			| RETURN expression ';'
			{
				Trace("return expression");
				IReturn();
			}
			| RETURN ';'
			{
				Trace("return");
				Return();
			}
			;

block			:
			DECLARE opt_variables_dec BEG
			{
				Trace("----block start----");
				symbols.push();
			}
			opt_statements END ';'
			{
				Trace("----block end----");
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
                                symbols.pop();
			}
			;

conditional		: IF
			{
				IfStart();
			}
			 expression THEN
                        {
                          	if ($3->type != boolType) yyerror("condition type error (if_then_else)");
                        }
			BorS else_statement END IF ';'
			{
				Trace(" if then else");
				IfEnd();
			}
			;

else_statement		:ELSE
			{
				Else();
			} 
			BorS
			|
			;

BorS			: simple
			| block
			;

loop			: WHILE
			{
				WhileStart();
			}
			  expression
			{
				WhileCond();
			}
			  LOOP BorS END LOOP ';'
			{
				Trace("while loop");
				WhileEnd();
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
				CallFunc(*info);
                          	$$ = info;
                          	functions.pop_back();
                        }
			/*
			| ID ';'
			*/
			;

opt_comma_separated	: comma_separated
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
                          	if (info == NULL) yyerror("undeclared indentifier");
                          	$$ = info;
				if (!symbols.isGlobal() && isConst(*info)) {
					if (info->type == strType) {
						ConstStr(info->value.sval);
					}
					else if (info->type == intType || info->type == boolType) {
						ConstInt(getValue(*info));
					}
				}
				else if (info->type == intType || info->type == boolType) {
					int idx = symbols.getIndex(*$1);
					if (idx == -1) {
						GetGlobalVar(*$1);
					}
					else {
						GetLocalVar(idx);
					}
				}
                        }
			| constant_value
			{
				if (!symbols.isGlobal()){
					if ($1->type == strType)
						ConstStr($1->value.sval);
					else if ($1->type == intType || $1->type == boolType)
						ConstInt(getValue(*$1));
				}
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
				if (!symbols.isGlobal())
                          	if($2 -> type == intType)
                          	{
                            		$2 -> value.ival *= -1;
                          	}
                          	else
                         	{
                            		$2 -> value.dval *= -1;
                          	}
                          	$$ = $2;
				if ($2->type == intType)
				{
					Operator('n');
				}
                        }
			| expression '*' expression
			{
                          	Trace("expression * expression");
                          	if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          	if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */
                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = $1->type;
				$$ = info;

                          	if($1 -> type == intType)
					Operator('*');
                        }
			| expression '/' expression
			{
                          	Trace("expression / expression");
                          	if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          	if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */

                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                         	info->type = $1->type;
				$$ = info;
                          	if($1 -> type == intType){
					Operator('/');
                          	}
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
				if ($1->type == intType)
					Operator('+');
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
				if ($1->type == intType)
					Operator('-');
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
				if ($1->type == intType) 
					CondOp(IFLT);
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
				if ($1->type == intType) 
					CondOp(IFLE);
                        }
			| expression '=' expression
			{
                          	Trace("expression == expression");
                          	if ($1->type != $3->type) yyerror("type not match"); /*type check*/
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

				if ($1->type == intType || $1->type == boolType)
                            		CondOp(IFEQ);
                        }
			| expression GE expression
			{
                          	Trace("expression >= expression");
                          	if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          	if ($1->type != intType && $1->type != realType && $1->type!= boolType) yyerror("operator error"); /* operator check */

                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = boolType;
                          	if($1 -> type == intType) {
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
				if ($1->type == intType) 
					CondOp(IFGE);
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
				if ($1->type == intType) 
					CondOp(IFGT);
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
				if ($1->type == intType || $1->type == boolType) 
					CondOp(IFNE);
                        }
			| NOT expression
			{
                          	Trace("NOT expression");
                          	if ($2->type != boolType) yyerror("operator error"); /* operator check */
                          	$2 -> value.bval = !$2 -> value.bval;
                          	$$ = $2;
				if ($2->type == boolType) 
					Operator('N');
                        }
			| expression AND expression
			{
                          	Trace("expression and expression");
                          	if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          	if ($1->type != boolType) yyerror("operator error"); /* operator check */
                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = boolType;
                          	info -> value.bval = $1-> value.bval && $3 -> value.bval;
                          	$$ = info;
				if ($1->type == boolType) 
					Operator('A');
                        }
			| expression OR expression
			{
                          	Trace("expression or expression");
                          	if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          	if ($1->type != boolType) yyerror("operator error"); /* operator check */
                          	idInfo *info = new idInfo();
                         	info->flag = variableFlag;
                          	info->type = boolType;
                          	info -> value.bval = $1-> value.bval && $3 -> value.bval;
                          	$$ = info;
				if ($1->type == boolType) 
					Operator('O');
                        }
			| '(' expression ')'
                        {
                          	$$ = $2;
                        }
			;

%%

void yyerror(string s) {
	cerr << "line" << lineNum << ":" << s << endl;
	exit(1);
}	
	
int main(int argc, char **argv) {
	yyin = fopen(argv[1], "r");
  	string source = string(argv[1]);
  	int dot = source.find(".");
  	filename = source.substr(0, dot);
  	out.open(filename + ".jasm");
	yyparse();
	return 0;
}
