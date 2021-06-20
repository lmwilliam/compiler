%{
#include "y.tab.hpp"

#define MAX_LENGTH 256
#define LIST strcat(buf, yytext)
#define token(t) { LIST; if(Token) printf("<%s>\n", #t); }
#define tokenChar(t) { LIST; if(Token) printf("<'%c'>\n", t); }
#define tokenInteger(t,i) { LIST; if(Token) printf("<%s: %d>\n", #t, i); }
#define tokenString(t,s) { LIST; if(Token) printf("<%s: %s>\n", #t, s); }

using namespace std;

int lineNum = 1;
char buf[MAX_LENGTH];
// determine whether to print token and source code
int Token = 0;
int Source = 0;
%}

delimiters              ([,:.;()[\]])
arithmetic              ([-+*/%])
identifiers             ([A-Za-z][0-9A-Za-z]*)
digit                   ([0-9]+)
integer                 ({digit})
relational              ([<>/=])
real                    ([-+]?{digit}\.{digit}?([eE](-+)?{digit})?)
string                  (\"(\"\"|[^"\n])*\")

%x COMMENT

%%

{delimiters} |
{arithmetic} |
{relational} {
                tokenChar(yytext[0]); return yytext[0];
             }

"<="                    { token('<='); return LE; }
">="                    { token('>='); return RE; }
"/="                    { token('/='); return NEQ; }
":="                    { token(':='); return ASSIGNMENT; }
"and"			{ token('and'); return AND; }
"or"			{ token('or'); return OR; }
"not"			{ token('not'); return NOT; }

 /* keywords */
 /* "and or not" are not in keywords */
"begin"		{ token(BEGIN); return BEG; }
"break"         { token(BREAK); return BREAK; }
"character"     { token(CHARACTER); return CHARACTER; }
"case"          { token(CASE); return CASE; }
"continue"      { token(CONTINUE); return CONTINUE; }
"constant"	{ token(CONSTANT); return CONSTANT; }
"declare"       { token(DECLARE); return DECLARE; }
"do"            { token(DO); return DO; }
"else"          { token(ELSE); return ELSE; }
"end"           { token(END); return END; }
"exit"          { token(EXIT); return EXIT; }
"float"         { token(FLOAT); return FLOAT; }
"for"           { token(FOR); return FOR; }
"if"            { token(IF); return IF; }
"in"		{ token(IN); return IN; }
"integer"       { token(INTEGER); return INTEGER; }
"loop"          { token(LOOP); return LOOP; }
"print"		{ token(PRINT); return PRINT; }
"println"       { token(PRINTLN); return PRINTLN; }
"procedure"     { token(PROCEDURE); return PROCEDURE; }
"program"	{ token(PROGRAM); return PROGRAM; }
"return"        { token(RETURN); return RETURN; }
"string"        { token(STRING); return STRING; }
"while"         { token(WHILE); return WHILE; }
"then"		{ token(THEN); return THEN; }
"boolean"	{ token(BOOLEAN); return BOOLEAN; }
"true"		{ token(TRUE); yylval.bval = true; return BOOLEAN_C; }
"false"		{ token(FALSE); yylval.bval = false; return BOOLEAN_C; }
"read"		{ token(READ); return READ; }

{integer}	{
			tokenInteger(Integer, atoi(yytext))
			yylval.ival = atoi(yytext);
			return INTEGER_C;
		}

{identifiers}	{
			tokenString(id, yytext);
			yylval.sval = new string(yytext);
			return ID;
		}

{real}		{
			tokenString(Real, yytext);
			yylval.dval = atof(yytext);
			return REAL_C;
			
		}

{string}	{
			char s[MAX_LENGTH] = {0};
			int idx = 0;
			for (int i = 1; i < yyleng - 1; ++i)
			{
				if (yytext[i] == '"')
					++i;
				s[idx++] = yytext[i];
			}
			tokenString(String, s);
			yylval.sval = new string(s);
			return STRING_C;
		}

[-][-]([a-zA-Z \t])*	{
				LIST;
			}

"{*"		{
			LIST;
			BEGIN COMMENT;
		}

"{ "            {
                        LIST;
                        BEGIN COMMENT;
                }

<COMMENT>\n	{	
			LIST;
			if(Source) printf("%d: %s", lineNum, buf);
			lineNum++;
			buf[0] = '\0';
		}

<COMMENT>.	{
			LIST;
		}

<COMMENT>"*}"	{
			LIST;
			BEGIN INITIAL;
		}

<COMMENT>" }"   {
                        LIST;
                        BEGIN INITIAL;
                }


\n		{
			LIST;
			if(Source) printf("%d: %s", lineNum, buf);
			lineNum++;
			buf[0] = '\0';
		}

[ \t]*		{
			LIST;
		}

.		{
			LIST;
			if(Source) printf("%d: %s\n", lineNum, buf);
			printf("Unknown character: '%s'\n", yytext);
			exit(-1);
		}

