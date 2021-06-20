all: lex_scanner

lex_scanner: lex.yy.cc
	g++ lex.yy.cc -o lex_scanner -ll

lex.yy.cc: lex_scanner.l
	lex lex_scanner.l
	mv lex.yy.c lex.yy.cc

clean:
	rm lex_scanner lex.yy.cc
