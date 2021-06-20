%{
#define MAX_LENGTH 256
#define LIST strcat(buf, yytext)
#define token(t) { LIST; printf("<%s>\n", #t); }
#define tokenChar(t) { LIST; printf("<'%c'>\n", t); }
#define tokenInteger(t,i) { LIST; printf("<%s: %d>\n", #t, i); }
#define tokenString(t,s) { LIST; printf("<%s: %s>\n", #t, s); }

#include <string>
#include <map>
#include <vector>

using std::string;
using std::map;
using std::vector;

int lineNum = 1;
char buf[MAX_LENGTH];

class symbolTable 
{
	public:
		symbolTable();
		int lookup(string s);
		int insert(string s);
		int dump();
        private:
                vector<string> symbols;
                map<string, int> tableMap;
                int index;

};

symbolTable *table;

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
		tokenChar(yytext[0]); 
	     }

"++"                    { token('++'); }
"--"                    { token('--'); }
"+="                    { token('+='); }
"-="                    { token('-='); }
"*="                    { token('*='); }
"<="                    { token('<='); }
">="                    { token('>='); }
"/="                    { token('/='); }
":="                    { token(':='); }
"and"			{ token('and'); }
"or"			{ token('or'); }
"not"			{ token('not'); }

 /* keywords */
 /* "and or not" are not in keywords */
"begin"		{ token(BEGIN); }
"break"         { token(BREAK); }
"character"     { token(CHARACTER); }
"case"          { token(CASE); }
"continue"      { token(CONTINUE); }
"constant"	{ token(CONSTANT); }
"declare"       { token(DECLARE); }
"do"            { token(DO); }
"else"          { token(ELSE); }
"end"           { token(END); }
"exit"          { token(EXIT); }
"float"         { token(FLOAT); }
"for"           { token(FOR); }
"if"            { token(IF); }
"in"		{ token(IN); }
"integer"       { token(INTEGER); }
"loop"          { token(LOOP); }
"print"		{ token(PRINT); }
"println"       { token(PRINTLN); }
"procedure"     { token(PROCEDURE); }
"program"	{ token(PROGRAM); }
"return"        { token(RETURN); }
"string"        { token(STRING); }
"while"         { token(WHILE); }
"then"		{ token(THEN); }
"boolean"	{ token(BOOLEAN); }
"true"		{ token(boolean:TRUE); }
"false"		{ token(boolean:FALSE); }

{integer}	{
			tokenInteger(Integer, atoi(yytext));
		}

{identifiers}	{
			tokenString(id, yytext);
			table -> insert(yytext);
		}

{real}		{
			tokenString(Real, yytext);
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
			printf("%d: %s", lineNum, buf);
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
			printf("%d: %s", lineNum, buf);
			lineNum++;
			buf[0] = '\0';
		}

[ \t]*		{
			LIST;
		}

.		{
			LIST;
			printf("%d: %s\n", lineNum, buf);
			printf("Unknown character: '%s'\n", yytext);
			exit(-1);
		}

%%

symbolTable::symbolTable()
{
	index = 0;
}

int symbolTable::lookup(string s)
{
	if (tableMap.find(s) != tableMap.end())
		return tableMap[s];
	else
		return -1;
}

int symbolTable::insert(string s)
{
	if (tableMap.find(s) != tableMap.end())
		return -1;
	else
	{
		symbols.push_back(s);
		tableMap[s] = index;
		return index++;
	}

}

void create()
{
	table = new symbolTable();
}

int symbolTable::dump()
{
	for (int i = 0; i < index; ++i)
	{
		printf("%s\n", symbols[i].c_str());
	}
	return index;
}

int main()
{
	create();
	yylex();
	printf("\n%s\n", "Symbol Table:");
	table -> dump();
}
