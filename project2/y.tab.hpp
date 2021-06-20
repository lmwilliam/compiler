/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LE = 258,
    RE = 259,
    NEQ = 260,
    ASSIGNMENT = 261,
    AND = 262,
    OR = 263,
    NOT = 264,
    BEG = 265,
    BREAK = 266,
    CHARACTER = 267,
    CASE = 268,
    CONTINUE = 269,
    CONSTANT = 270,
    DECLARE = 271,
    DO = 272,
    ELSE = 273,
    END = 274,
    EXIT = 275,
    FLOAT = 276,
    FOR = 277,
    IF = 278,
    IN = 279,
    INTEGER = 280,
    LOOP = 281,
    PRINT = 282,
    PRINTLN = 283,
    PROCEDURE = 284,
    PROGRAM = 285,
    RETURN = 286,
    STRING = 287,
    WHILE = 288,
    THEN = 289,
    BOOLEAN = 290,
    READ = 291,
    INTEGER_C = 292,
    ID = 293,
    REAL_C = 294,
    STRING_C = 295,
    BOOLEAN_C = 296,
    UMINUS = 297
  };
#endif
/* Tokens.  */
#define LE 258
#define RE 259
#define NEQ 260
#define ASSIGNMENT 261
#define AND 262
#define OR 263
#define NOT 264
#define BEG 265
#define BREAK 266
#define CHARACTER 267
#define CASE 268
#define CONTINUE 269
#define CONSTANT 270
#define DECLARE 271
#define DO 272
#define ELSE 273
#define END 274
#define EXIT 275
#define FLOAT 276
#define FOR 277
#define IF 278
#define IN 279
#define INTEGER 280
#define LOOP 281
#define PRINT 282
#define PRINTLN 283
#define PROCEDURE 284
#define PROGRAM 285
#define RETURN 286
#define STRING 287
#define WHILE 288
#define THEN 289
#define BOOLEAN 290
#define READ 291
#define INTEGER_C 292
#define ID 293
#define REAL_C 294
#define STRING_C 295
#define BOOLEAN_C 296
#define UMINUS 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 18 "parser.y" /* yacc.c:1909  */

	int ival;
	bool bval;
  	double dval;
  	string *sval;
  	int type;
  	idInfo* info;

#line 147 "y.tab.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */
