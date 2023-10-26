/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */
#include "ass5_21CS10057_21CS30058_translator.h"
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    RIGHT_ARROW = 258,             /* RIGHT_ARROW  */
    INCREMENT = 259,               /* INCREMENT  */
    DECREMENT = 260,               /* DECREMENT  */
    LSHIFT = 261,                  /* LSHIFT  */
    RSHIFT = 262,                  /* RSHIFT  */
    LESS_THAN_EQUAL_TO = 263,      /* LESS_THAN_EQUAL_TO  */
    GREATER_THAN_EQUAL_TO = 264,   /* GREATER_THAN_EQUAL_TO  */
    DOUBLE_EQUAL = 265,            /* DOUBLE_EQUAL  */
    NOT_EQUAL = 266,               /* NOT_EQUAL  */
    BINARY_AND = 267,              /* BINARY_AND  */
    BINARY_OR = 268,               /* BINARY_OR  */
    ELLIPSIS = 269,                /* ELLIPSIS  */
    MUL_ASSIGN = 270,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 271,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 272,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 273,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 274,              /* SUB_ASSIGN  */
    LSHIFT_ASSIGN = 275,           /* LSHIFT_ASSIGN  */
    RSHIFT_ASSIGN = 276,           /* RSHIFT_ASSIGN  */
    AND_ASSIGN = 277,              /* AND_ASSIGN  */
    XOR_ASSIGN = 278,              /* XOR_ASSIGN  */
    OR_ASSIGN = 279,               /* OR_ASSIGN  */
    AUTO = 280,                    /* AUTO  */
    BREAK = 281,                   /* BREAK  */
    CASE = 282,                    /* CASE  */
    CHAR = 283,                    /* CHAR  */
    CONST = 284,                   /* CONST  */
    CONTINUE = 285,                /* CONTINUE  */
    DEFAULT = 286,                 /* DEFAULT  */
    DO = 287,                      /* DO  */
    DOUBLE = 288,                  /* DOUBLE  */
    ELSE = 289,                    /* ELSE  */
    ENUM = 290,                    /* ENUM  */
    EXTERN = 291,                  /* EXTERN  */
    FLOAT = 292,                   /* FLOAT  */
    FOR = 293,                     /* FOR  */
    GOTO = 294,                    /* GOTO  */
    IF = 295,                      /* IF  */
    INLINE = 296,                  /* INLINE  */
    INT = 297,                     /* INT  */
    LONG = 298,                    /* LONG  */
    REGISTER = 299,                /* REGISTER  */
    RESTRICT = 300,                /* RESTRICT  */
    RETURN = 301,                  /* RETURN  */
    SHORT = 302,                   /* SHORT  */
    SIGNED = 303,                  /* SIGNED  */
    SIZEOF = 304,                  /* SIZEOF  */
    STATIC = 305,                  /* STATIC  */
    STRUCT = 306,                  /* STRUCT  */
    SWITCH = 307,                  /* SWITCH  */
    TYPEDEF = 308,                 /* TYPEDEF  */
    UNION = 309,                   /* UNION  */
    UNSIGNED = 310,                /* UNSIGNED  */
    VOID = 311,                    /* VOID  */
    VOLATILE = 312,                /* VOLATILE  */
    WHILE = 313,                   /* WHILE  */
    BOOL = 314,                    /* BOOL  */
    COMPLEX = 315,                 /* COMPLEX  */
    IMAGINARY = 316,               /* IMAGINARY  */
    COMMENT_MULTI = 317,           /* COMMENT_MULTI  */
    COMMENT_SINGLE = 318,          /* COMMENT_SINGLE  */
    IDENTIFIER = 319,              /* IDENTIFIER  */
    INTEGER_NO = 320,              /* INTEGER_NO  */
    FLOAT_NO = 321,                /* FLOAT_NO  */
    STRING = 322,                  /* STRING  */
    CHARACTER = 323,               /* CHARACTER  */
    ENUMERATION_CONSTANT = 324,    /* ENUMERATION_CONSTANT  */
    PUNCTUATOR = 325,              /* PUNCTUATOR  */
    WS = 326,                      /* WS  */
    THEN = 327                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define RIGHT_ARROW 258
#define INCREMENT 259
#define DECREMENT 260
#define LSHIFT 261
#define RSHIFT 262
#define LESS_THAN_EQUAL_TO 263
#define GREATER_THAN_EQUAL_TO 264
#define DOUBLE_EQUAL 265
#define NOT_EQUAL 266
#define BINARY_AND 267
#define BINARY_OR 268
#define ELLIPSIS 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define LSHIFT_ASSIGN 275
#define RSHIFT_ASSIGN 276
#define AND_ASSIGN 277
#define XOR_ASSIGN 278
#define OR_ASSIGN 279
#define AUTO 280
#define BREAK 281
#define CASE 282
#define CHAR 283
#define CONST 284
#define CONTINUE 285
#define DEFAULT 286
#define DO 287
#define DOUBLE 288
#define ELSE 289
#define ENUM 290
#define EXTERN 291
#define FLOAT 292
#define FOR 293
#define GOTO 294
#define IF 295
#define INLINE 296
#define INT 297
#define LONG 298
#define REGISTER 299
#define RESTRICT 300
#define RETURN 301
#define SHORT 302
#define SIGNED 303
#define SIZEOF 304
#define STATIC 305
#define STRUCT 306
#define SWITCH 307
#define TYPEDEF 308
#define UNION 309
#define UNSIGNED 310
#define VOID 311
#define VOLATILE 312
#define WHILE 313
#define BOOL 314
#define COMPLEX 315
#define IMAGINARY 316
#define COMMENT_MULTI 317
#define COMMENT_SINGLE 318
#define IDENTIFIER 319
#define INTEGER_NO 320
#define FLOAT_NO 321
#define STRING 322
#define CHARACTER 323
#define ENUMERATION_CONSTANT 324
#define PUNCTUATOR 325
#define WS 326
#define THEN 327

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "ass5_21CS10057_21CS30058.y"

//#include "ass5_21CS10057_21CS30058_translator.h"
  int instr;
  sym* symp;
  int intval;
  char* charval;
  symtype* symtp;
  expr* E;
  statement* Stmt;
  array1* Arr;
  char unaryOperator;

#line 224 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
