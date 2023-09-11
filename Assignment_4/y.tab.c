/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ass4_21CS10057_21CS30058.y"

#include <stdio.h>
extern int yylex();
void yyerror(const char*);

#line 77 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    CHARACTER = 322,               /* CHARACTER  */
    STRING = 323,                  /* STRING  */
    ENUMERATION_CONSTANT = 324,    /* ENUMERATION_CONSTANT  */
    PUNCTUATOR = 325,              /* PUNCTUATOR  */
    WS = 326                       /* WS  */
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
#define CHARACTER 322
#define STRING 323
#define ENUMERATION_CONSTANT 324
#define PUNCTUATOR 325
#define WS 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "ass4_21CS10057_21CS30058.y"

  int intval;
  float floatval;
  char *charval;

#line 278 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_RIGHT_ARROW = 3,                /* RIGHT_ARROW  */
  YYSYMBOL_INCREMENT = 4,                  /* INCREMENT  */
  YYSYMBOL_DECREMENT = 5,                  /* DECREMENT  */
  YYSYMBOL_LSHIFT = 6,                     /* LSHIFT  */
  YYSYMBOL_RSHIFT = 7,                     /* RSHIFT  */
  YYSYMBOL_LESS_THAN_EQUAL_TO = 8,         /* LESS_THAN_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN_EQUAL_TO = 9,      /* GREATER_THAN_EQUAL_TO  */
  YYSYMBOL_DOUBLE_EQUAL = 10,              /* DOUBLE_EQUAL  */
  YYSYMBOL_NOT_EQUAL = 11,                 /* NOT_EQUAL  */
  YYSYMBOL_BINARY_AND = 12,                /* BINARY_AND  */
  YYSYMBOL_BINARY_OR = 13,                 /* BINARY_OR  */
  YYSYMBOL_ELLIPSIS = 14,                  /* ELLIPSIS  */
  YYSYMBOL_MUL_ASSIGN = 15,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 16,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 17,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 18,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 19,                /* SUB_ASSIGN  */
  YYSYMBOL_LSHIFT_ASSIGN = 20,             /* LSHIFT_ASSIGN  */
  YYSYMBOL_RSHIFT_ASSIGN = 21,             /* RSHIFT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 22,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 23,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 24,                 /* OR_ASSIGN  */
  YYSYMBOL_AUTO = 25,                      /* AUTO  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CASE = 27,                      /* CASE  */
  YYSYMBOL_CHAR = 28,                      /* CHAR  */
  YYSYMBOL_CONST = 29,                     /* CONST  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_DO = 32,                        /* DO  */
  YYSYMBOL_DOUBLE = 33,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_ENUM = 35,                      /* ENUM  */
  YYSYMBOL_EXTERN = 36,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 37,                     /* FLOAT  */
  YYSYMBOL_FOR = 38,                       /* FOR  */
  YYSYMBOL_GOTO = 39,                      /* GOTO  */
  YYSYMBOL_IF = 40,                        /* IF  */
  YYSYMBOL_INLINE = 41,                    /* INLINE  */
  YYSYMBOL_INT = 42,                       /* INT  */
  YYSYMBOL_LONG = 43,                      /* LONG  */
  YYSYMBOL_REGISTER = 44,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 45,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 46,                    /* RETURN  */
  YYSYMBOL_SHORT = 47,                     /* SHORT  */
  YYSYMBOL_SIGNED = 48,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 49,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 50,                    /* STATIC  */
  YYSYMBOL_STRUCT = 51,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 52,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 53,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 54,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 55,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 56,                      /* VOID  */
  YYSYMBOL_VOLATILE = 57,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 58,                     /* WHILE  */
  YYSYMBOL_BOOL = 59,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 60,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 61,                 /* IMAGINARY  */
  YYSYMBOL_COMMENT_MULTI = 62,             /* COMMENT_MULTI  */
  YYSYMBOL_COMMENT_SINGLE = 63,            /* COMMENT_SINGLE  */
  YYSYMBOL_IDENTIFIER = 64,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_NO = 65,                /* INTEGER_NO  */
  YYSYMBOL_FLOAT_NO = 66,                  /* FLOAT_NO  */
  YYSYMBOL_CHARACTER = 67,                 /* CHARACTER  */
  YYSYMBOL_STRING = 68,                    /* STRING  */
  YYSYMBOL_ENUMERATION_CONSTANT = 69,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_PUNCTUATOR = 70,                /* PUNCTUATOR  */
  YYSYMBOL_WS = 71,                        /* WS  */
  YYSYMBOL_72_ = 72,                       /* '('  */
  YYSYMBOL_73_ = 73,                       /* ')'  */
  YYSYMBOL_74_ = 74,                       /* '['  */
  YYSYMBOL_75_ = 75,                       /* ']'  */
  YYSYMBOL_76_ = 76,                       /* '.'  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* ','  */
  YYSYMBOL_80_ = 80,                       /* '&'  */
  YYSYMBOL_81_ = 81,                       /* '*'  */
  YYSYMBOL_82_ = 82,                       /* '+'  */
  YYSYMBOL_83_ = 83,                       /* '-'  */
  YYSYMBOL_84_ = 84,                       /* '~'  */
  YYSYMBOL_85_ = 85,                       /* '!'  */
  YYSYMBOL_86_ = 86,                       /* '/'  */
  YYSYMBOL_87_ = 87,                       /* '%'  */
  YYSYMBOL_88_ = 88,                       /* '<'  */
  YYSYMBOL_89_ = 89,                       /* '>'  */
  YYSYMBOL_90_ = 90,                       /* '^'  */
  YYSYMBOL_91_ = 91,                       /* '|'  */
  YYSYMBOL_92_ = 92,                       /* '?'  */
  YYSYMBOL_93_ = 93,                       /* ':'  */
  YYSYMBOL_94_ = 94,                       /* '='  */
  YYSYMBOL_95_ = 95,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 96,                  /* $accept  */
  YYSYMBOL_primary_expression = 97,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 98,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_optional = 99, /* argument_expression_list_optional  */
  YYSYMBOL_argument_expression_list = 100, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 101,         /* unary_expression  */
  YYSYMBOL_unary_operator = 102,           /* unary_operator  */
  YYSYMBOL_cast_expression = 103,          /* cast_expression  */
  YYSYMBOL_multplicative_expression = 104, /* multplicative_expression  */
  YYSYMBOL_additive_expression = 105,      /* additive_expression  */
  YYSYMBOL_shift_expression = 106,         /* shift_expression  */
  YYSYMBOL_relational_expression = 107,    /* relational_expression  */
  YYSYMBOL_equality_expression = 108,      /* equality_expression  */
  YYSYMBOL_AND_expression = 109,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 110,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 111,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 112,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 113,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 114,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 115,    /* assignment_expression  */
  YYSYMBOL_assignment_expression_optional = 116, /* assignment_expression_optional  */
  YYSYMBOL_assignment_operator = 117,      /* assignment_operator  */
  YYSYMBOL_expression = 118,               /* expression  */
  YYSYMBOL_constant_expression = 119,      /* constant_expression  */
  YYSYMBOL_expression_optional = 120,      /* expression_optional  */
  YYSYMBOL_declaration = 121,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 122,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_optional = 123, /* declaration_specifiers_optional  */
  YYSYMBOL_init_declarator_list_optional = 124, /* init_declarator_list_optional  */
  YYSYMBOL_init_declarator_list = 125,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 126,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 127,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 128,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 129, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_optional = 130, /* specifier_qualifier_list_optional  */
  YYSYMBOL_enum_specifier = 131,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 132,          /* enumerator_list  */
  YYSYMBOL_enumerator = 133,               /* enumerator  */
  YYSYMBOL_type_qualifier = 134,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 135,       /* function_specifier  */
  YYSYMBOL_declarator = 136,               /* declarator  */
  YYSYMBOL_direct_declarator = 137,        /* direct_declarator  */
  YYSYMBOL_pointer = 138,                  /* pointer  */
  YYSYMBOL_pointer_optional = 139,         /* pointer_optional  */
  YYSYMBOL_type_qualifier_list = 140,      /* type_qualifier_list  */
  YYSYMBOL_type_qualifier_list_optional = 141, /* type_qualifier_list_optional  */
  YYSYMBOL_parameter_type_list = 142,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 143,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 144,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 145,          /* identifier_list  */
  YYSYMBOL_identifier_list_optional = 146, /* identifier_list_optional  */
  YYSYMBOL_type_name = 147,                /* type_name  */
  YYSYMBOL_initializer = 148,              /* initializer  */
  YYSYMBOL_initializer_list = 149,         /* initializer_list  */
  YYSYMBOL_designation = 150,              /* designation  */
  YYSYMBOL_designation_optional = 151,     /* designation_optional  */
  YYSYMBOL_designator_list = 152,          /* designator_list  */
  YYSYMBOL_designator = 153,               /* designator  */
  YYSYMBOL_statement = 154,                /* statement  */
  YYSYMBOL_labeled_statement = 155,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 156,       /* compound_statement  */
  YYSYMBOL_block_item_list = 157,          /* block_item_list  */
  YYSYMBOL_block_item_list_optional = 158, /* block_item_list_optional  */
  YYSYMBOL_block_item = 159,               /* block_item  */
  YYSYMBOL_expression_statement = 160,     /* expression_statement  */
  YYSYMBOL_selection_statement = 161,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 162,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 163,           /* jump_statement  */
  YYSYMBOL_translation_unit = 164,         /* translation_unit  */
  YYSYMBOL_external_declaration = 165,     /* external_declaration  */
  YYSYMBOL_function_definition = 166,      /* function_definition  */
  YYSYMBOL_167_1 = 167,                    /* $@1  */
  YYSYMBOL_declaration_list = 168,         /* declaration_list  */
  YYSYMBOL_declaration_list_optional = 169, /* declaration_list_optional  */
  YYSYMBOL_identifier_optional = 170       /* identifier_optional  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   916

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  335

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,     2,     2,    87,    80,     2,
      72,    73,    81,    82,    79,    83,    76,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    95,
      88,    94,    89,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    91,    78,    84,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    91,    93,    95,    97,    99,   104,   106,
     108,   110,   112,   114,   116,   119,   121,   126,   127,   131,
     133,   138,   140,   142,   144,   146,   148,   153,   155,   157,
     159,   161,   163,   168,   170,   175,   177,   179,   181,   186,
     188,   190,   195,   197,   199,   204,   206,   208,   210,   212,
     217,   219,   221,   226,   228,   233,   235,   240,   242,   247,
     249,   254,   256,   261,   263,   268,   270,   275,   276,   280,
     282,   284,   286,   288,   290,   292,   294,   296,   298,   300,
     305,   307,   312,   317,   318,   322,   327,   329,   331,   333,
     338,   339,   343,   344,   348,   350,   355,   357,   362,   364,
     366,   368,   373,   375,   377,   379,   381,   383,   385,   387,
     389,   391,   393,   395,   397,   402,   404,   409,   410,   414,
     415,   416,   420,   421,   425,   426,   430,   431,   432,   436,
     440,   444,   445,   446,   447,   448,   449,   450,   454,   455,
     459,   460,   464,   465,   469,   470,   474,   475,   479,   480,
     484,   485,   489,   490,   494,   495,   499,   503,   504,   505,
     509,   510,   514,   519,   520,   524,   526,   531,   533,   538,
     540,   542,   544,   546,   548,   553,   555,   557,   562,   567,
     569,   574,   575,   579,   581,   586,   591,   593,   595,   600,
     602,   604,   606,   611,   613,   615,   617,   622,   624,   629,
     631,   637,   636,   643,   645,   650,   651,   655,   656
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "RIGHT_ARROW",
  "INCREMENT", "DECREMENT", "LSHIFT", "RSHIFT", "LESS_THAN_EQUAL_TO",
  "GREATER_THAN_EQUAL_TO", "DOUBLE_EQUAL", "NOT_EQUAL", "BINARY_AND",
  "BINARY_OR", "ELLIPSIS", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "AUTO", "BREAK", "CASE", "CHAR",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER",
  "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT",
  "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE",
  "BOOL", "COMPLEX", "IMAGINARY", "COMMENT_MULTI", "COMMENT_SINGLE",
  "IDENTIFIER", "INTEGER_NO", "FLOAT_NO", "CHARACTER", "STRING",
  "ENUMERATION_CONSTANT", "PUNCTUATOR", "WS", "'('", "')'", "'['", "']'",
  "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list_optional", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression",
  "assignment_expression_optional", "assignment_operator", "expression",
  "constant_expression", "expression_optional", "declaration",
  "declaration_specifiers", "declaration_specifiers_optional",
  "init_declarator_list_optional", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_optional",
  "enum_specifier", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "pointer",
  "pointer_optional", "type_qualifier_list",
  "type_qualifier_list_optional", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "identifier_list_optional",
  "type_name", "initializer", "initializer_list", "designation",
  "designation_optional", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item_list_optional", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition", "$@1",
  "declaration_list", "declaration_list_optional", "identifier_optional", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-224)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     821,  -224,  -224,  -224,  -224,   -28,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,   -55,   821,   821,  -224,   821,   821,   710,
    -224,  -224,   -21,    10,   -15,   -54,     1,  -224,   656,  -224,
     -18,  -224,  -224,  -224,  -224,  -224,  -224,  -224,    29,  -224,
     -15,    17,  -224,    17,   503,  -224,   -55,   821,  -224,  -224,
      17,    87,  -224,   110,  -224,  -224,  -224,   -10,   127,   127,
     549,  -224,  -224,  -224,  -224,  -224,   414,    96,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,    18,   203,   573,  -224,   -16,
     114,   194,     7,   120,    26,    75,    44,   171,    -4,  -224,
    -224,  -224,  -224,   113,   125,   784,     5,  -224,   -25,   414,
    -224,  -224,   414,  -224,  -224,     3,   855,  -224,   855,   140,
     573,   123,   150,  -224,   503,   -43,  -224,   153,  -224,  -224,
     573,   573,   172,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,   573,  -224,  -224,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   226,  -224,  -224,  -224,
     -36,   166,   161,  -224,   164,   173,   -15,   595,   151,  -224,
    -224,   174,   176,  -224,   573,  -224,  -224,  -224,   525,  -224,
     169,  -224,  -224,    88,  -224,  -224,  -224,  -224,   204,   200,
    -224,    46,  -224,  -224,  -224,  -224,  -224,   -16,   -16,   114,
     114,   194,   194,    -3,   194,   194,    -3,   120,    26,    75,
      44,   171,   -30,   185,   573,   193,   196,   479,   227,   236,
     229,   573,   230,   233,   219,   234,   220,  -224,  -224,  -224,
    -224,   291,   247,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
     747,   250,  -224,   573,   267,  -224,   269,   573,   268,   268,
    -224,    96,  -224,  -224,  -224,   503,  -224,   573,  -224,   573,
    -224,   260,  -224,   479,   296,   356,   270,   573,   271,   573,
     573,   479,  -224,  -224,  -224,  -224,  -224,  -224,   287,  -224,
    -224,  -224,   154,  -224,  -224,  -224,   479,  -224,   292,   272,
     573,  -224,    30,  -224,    40,    45,  -224,  -224,  -224,    97,
    -224,   573,   573,   275,   479,   479,   479,  -224,    49,   282,
     573,   344,  -224,  -224,   284,   573,   307,   479,  -224,   309,
     479,  -224,   479,  -224,  -224
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,   103,   126,   108,   208,    98,   107,   129,   105,
     106,   101,   127,   104,   109,    99,   110,   102,   128,   111,
     112,   113,   200,   141,    91,    91,   114,    91,    91,     0,
     197,   199,   121,     0,   145,     0,    92,    94,    96,   140,
       0,    90,    86,    87,    88,    89,     1,   198,     0,   142,
     144,   138,    85,   141,     0,   203,   141,   205,   201,   131,
     141,   130,   122,     0,   143,   139,    95,    96,     0,     0,
       0,     2,     3,     4,     5,     6,     0,   164,    27,    28,
      29,    30,    31,    32,     8,    21,    33,     0,    35,    39,
      42,    45,    50,    53,    55,    57,    59,    61,    63,    65,
     157,    97,   204,     0,     0,   155,   145,   119,     0,     0,
      22,    23,     0,    25,    80,     0,   118,   156,   118,     0,
       0,     0,     0,   163,     0,     0,   165,     0,    13,    14,
      18,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    69,     0,    33,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,   202,   132,   152,
     141,     0,   146,   148,   154,     0,   145,    68,   124,   120,
     123,     0,     0,     7,     0,   117,   115,   116,     0,    82,
       0,   168,   158,   164,   160,   162,   166,    12,     0,    17,
      19,     0,    11,    66,    36,    37,    38,    40,    41,    43,
      44,    48,    49,    52,    46,    47,    51,    54,    56,    58,
      60,    62,     0,     0,     0,     0,     0,    84,     0,     0,
       0,    84,     0,     0,     2,    83,     0,   183,   184,   169,
     170,    84,     0,   179,   171,   172,   173,   174,   150,   136,
       0,     0,   137,     0,    28,    67,     0,     0,     0,    26,
      81,   164,    34,   167,   159,     0,    10,     0,     9,     0,
     195,     0,   194,    84,     0,    84,     0,     0,     0,     0,
       0,    84,   185,   180,   178,   147,   149,   153,     0,   135,
     133,   125,     0,   161,    20,    64,    84,   177,     0,     0,
      84,   193,     0,   196,     0,     0,   175,   134,    15,   164,
     176,     0,    84,     0,    84,    84,    84,    16,     0,     0,
      84,   186,   188,   189,     0,    84,     0,    84,   190,     0,
      84,   187,    84,   192,   191
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,  -224,  -224,  -224,  -224,    -9,  -224,   -80,    84,    89,
      23,   -84,   223,   225,   228,   224,   231,  -224,  -101,   -51,
    -224,  -224,   -74,  -213,  -223,   -37,     0,   109,  -224,  -224,
     335,  -224,    51,    68,   276,  -224,  -224,  -224,    -2,  -224,
     -13,  -224,   345,  -224,  -224,   -93,  -224,  -224,   152,  -224,
    -224,    73,  -107,   146,  -224,  -189,  -224,   283,  -215,  -224,
     306,  -224,  -224,   184,  -224,  -224,  -224,  -224,  -224,   381,
    -224,  -224,  -224,  -224,  -224
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    84,    85,   198,   199,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   114,
     256,   144,   235,   190,   236,    22,    56,    42,    35,    36,
      37,    24,    25,   117,   186,    26,    63,   180,    27,    28,
      67,    61,    39,    40,    50,    51,   171,   172,   173,   174,
     175,   119,   101,   122,   123,   124,   125,   126,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,    29,    30,
      31,   103,    57,    58,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    55,   115,   100,   265,   154,   155,   146,   278,   164,
      38,   271,   274,   177,     3,   154,   155,   194,   156,   189,
     102,   127,   128,   129,    41,    41,    34,    41,    41,    23,
      12,   120,    49,   121,     3,   115,    32,  -151,   115,   178,
     -93,    52,    18,  -151,   291,    34,    59,   104,    64,   184,
      12,   195,   299,   179,    60,   176,  -207,   201,   297,   110,
     111,   113,    18,   269,    62,   147,   306,   204,   205,   206,
     148,   149,   213,   100,   118,   216,   183,   313,   145,   200,
      53,   310,   184,   253,    54,   157,   158,    48,   165,   319,
     130,   222,   131,   203,   132,   157,   158,   326,    34,   321,
     322,   323,   329,   314,    49,   170,   160,   118,   262,   184,
     118,   145,   331,   315,   118,   333,   118,   334,   316,   184,
     265,   268,   324,   189,   184,   184,   255,   116,   184,   237,
     159,    68,    69,   260,    43,   162,    44,    45,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   189,   248,   293,   105,
     116,   106,   120,   116,   121,   161,   264,   116,   295,   116,
     120,   120,   121,   121,    49,   317,    70,   211,   212,   145,
     214,   215,   181,   163,   185,   182,   185,   191,   107,   108,
     166,    71,    72,    73,    74,    75,   150,   151,   168,   109,
     152,   153,   288,   302,   237,   304,   305,    78,    79,    80,
      81,    82,    83,   188,   100,   145,   294,   197,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   192,   193,
      68,    69,   308,   309,   207,   208,   202,   318,   300,   249,
     250,   209,   210,   251,   263,   257,   252,   258,   145,   259,
     170,     1,   223,   224,     2,     3,   225,   226,   227,     4,
     145,     5,     6,     7,   228,   229,   230,     8,     9,    10,
      11,    12,   231,    13,    14,    70,    15,   266,   232,   267,
     270,    16,    17,    18,   233,    19,    20,    21,   272,   273,
     234,    72,    73,    74,    75,    68,    69,   143,    76,   275,
     276,   277,   279,   166,  -182,   280,    78,    79,    80,    81,
      82,    83,   281,   184,   287,   282,     1,   223,   224,     2,
       3,   225,   226,   227,     4,   284,     5,     6,     7,   228,
     229,   230,     8,     9,    10,    11,    12,   231,    13,    14,
      70,    15,   289,   232,   290,   261,    16,    17,    18,   233,
      19,    20,    21,   296,   298,   234,    72,    73,    74,    75,
      68,    69,   307,    76,   311,   301,   303,   312,   166,  -181,
     320,    78,    79,    80,    81,    82,    83,   325,   327,   328,
     330,     1,   332,   217,     2,     3,   218,   220,    66,     4,
     219,     5,     6,     7,   187,   221,    65,     8,     9,    10,
      11,    12,   286,    13,    14,    70,    15,   292,   196,   167,
      47,    16,    17,    18,     0,    19,    20,    21,    68,    69,
      71,    72,    73,    74,    75,   283,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,    70,     0,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,    71,    72,
      73,    74,    75,    68,    69,     0,    76,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,   223,   224,    68,    69,   225,
     226,   227,     0,     0,     0,     0,     0,   228,   229,   230,
       0,     0,     0,     0,     0,   231,     0,     0,    70,    68,
      69,   232,     0,     0,     0,     0,     0,   233,     0,     0,
       0,     0,     0,   234,    72,    73,    74,    75,     0,     0,
       0,    76,    70,    68,    69,     0,   166,     0,     0,    78,
      79,    80,    81,    82,    83,     0,     0,    71,    72,    73,
      74,    75,     0,     0,    70,    76,     0,    68,    69,     0,
      77,     0,     0,    78,    79,    80,    81,    82,    83,    71,
      72,    73,    74,    75,     0,     0,     0,    76,    70,    68,
      69,     0,   261,     0,     0,    78,    79,    80,    81,    82,
      83,     0,     0,    71,    72,    73,    74,    75,     0,     0,
       0,   112,    70,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,     0,     0,    71,    72,    73,
      74,    75,     0,     0,    70,    76,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    71,
      72,    73,    74,    75,     0,     0,     0,    76,     0,     0,
       0,     0,     0,     0,     0,    78,   254,    80,    81,    82,
      83,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
      46,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -206,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
      54,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,   285,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     1,     0,   169,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     7,     0,     0,     0,     0,     9,    10,     0,
      12,     0,    13,    14,     0,     0,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    38,    76,    54,   193,     8,     9,    87,   231,    13,
      23,   224,   227,   106,    29,     8,     9,   124,    11,   120,
      57,     3,     4,     5,    24,    25,    81,    27,    28,    29,
      45,    74,    34,    76,    29,   109,    64,    73,   112,    64,
      95,    95,    57,    79,   257,    81,    64,    60,    50,    79,
      45,    94,   275,    78,    72,    50,    77,   131,   273,    68,
      69,    70,    57,    93,    35,    81,   281,   147,   148,   149,
      86,    87,   156,   124,    76,   159,    73,   300,    87,   130,
      79,   296,    79,   176,    94,    88,    89,    77,    92,   312,
      72,   165,    74,   144,    76,    88,    89,   320,    81,   314,
     315,   316,   325,    73,   106,   105,    80,   109,   188,    79,
     112,   120,   327,    73,   116,   330,   118,   332,    73,    79,
     309,    75,    73,   224,    79,    79,   177,    76,    79,   166,
      10,     4,     5,   184,    25,    91,    27,    28,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   257,   170,   265,    72,
     109,    74,    74,   112,    76,    90,    78,   116,   269,   118,
      74,    74,    76,    76,   176,    78,    49,   154,   155,   188,
     157,   158,   109,    12,   116,   112,   118,    64,    78,    79,
      77,    64,    65,    66,    67,    68,    82,    83,    73,    72,
       6,     7,   253,   277,   241,   279,   280,    80,    81,    82,
      83,    84,    85,    73,   265,   224,   267,    64,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    78,    79,
       4,     5,    78,    79,   150,   151,    64,   311,   275,    73,
      79,   152,   153,    79,    75,    94,    73,    73,   257,    73,
     250,    25,    26,    27,    28,    29,    30,    31,    32,    33,
     269,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    73,    52,    79,
      95,    55,    56,    57,    58,    59,    60,    61,    95,    93,
      64,    65,    66,    67,    68,     4,     5,    94,    72,    72,
      64,    72,    72,    77,    78,    72,    80,    81,    82,    83,
      84,    85,    93,    79,    64,    95,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    78,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    75,    52,    75,    77,    55,    56,    57,    58,
      59,    60,    61,    93,    58,    64,    65,    66,    67,    68,
       4,     5,    75,    72,    72,    95,    95,    95,    77,    78,
      95,    80,    81,    82,    83,    84,    85,    95,    34,    95,
      73,    25,    73,   160,    28,    29,   161,   163,    53,    33,
     162,    35,    36,    37,   118,   164,    51,    41,    42,    43,
      44,    45,   250,    47,    48,    49,    50,   261,   125,   103,
      29,    55,    56,    57,    -1,    59,    60,    61,     4,     5,
      64,    65,    66,    67,    68,   241,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    59,    60,    61,    -1,    -1,    64,    65,
      66,    67,    68,     4,     5,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    26,    27,     4,     5,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,     4,
       5,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    49,     4,     5,    -1,    77,    -1,    -1,    80,
      81,    82,    83,    84,    85,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    49,    72,    -1,     4,     5,    -1,
      77,    -1,    -1,    80,    81,    82,    83,    84,    85,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    72,    49,     4,
       5,    -1,    77,    -1,    -1,    80,    81,    82,    83,    84,
      85,    -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    49,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    49,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    47,    48,    -1,    50,    -1,    -1,    -1,
       0,    55,    56,    57,    -1,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    25,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    -1,    -1,
      94,    41,    42,    43,    44,    45,    -1,    47,    48,    -1,
      50,    14,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      60,    61,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    -1,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    59,    60,    61,    25,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      -1,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    59,    60,    61,    25,    -1,    64,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    59,    60,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    28,    29,    33,    35,    36,    37,    41,    42,
      43,    44,    45,    47,    48,    50,    55,    56,    57,    59,
      60,    61,   121,   122,   127,   128,   131,   134,   135,   164,
     165,   166,    64,   170,    81,   124,   125,   126,   136,   138,
     139,   122,   123,   123,   123,   123,     0,   165,    77,   134,
     140,   141,    95,    79,    94,   121,   122,   168,   169,    64,
      72,   137,    35,   132,   134,   138,   126,   136,     4,     5,
      49,    64,    65,    66,    67,    68,    72,    77,    80,    81,
      82,    83,    84,    85,    97,    98,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   148,   121,   167,   136,    72,    74,    78,    79,    72,
     101,   101,    72,   101,   115,   118,   128,   129,   134,   147,
      74,    76,   149,   150,   151,   152,   153,     3,     4,     5,
      72,    74,    76,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    94,   117,   101,   103,    81,    86,    87,
      82,    83,     6,     7,     8,     9,    11,    88,    89,    10,
      80,    90,    91,    12,    13,    92,    77,   156,    73,    64,
     122,   142,   143,   144,   145,   146,    50,   141,    64,    78,
     133,   147,   147,    73,    79,   129,   130,   130,    73,   114,
     119,    64,    78,    79,   148,    94,   153,    64,    99,   100,
     115,   118,    64,   115,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   106,   106,   107,   108,   109,   110,
     111,   112,   118,    26,    27,    30,    31,    32,    38,    39,
      40,    46,    52,    58,    64,   118,   120,   121,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   136,    73,
      79,    79,    73,   141,    81,   115,   116,    94,    73,    73,
     115,    77,   103,    75,    78,   151,    73,    79,    75,    93,
      95,   119,    95,    93,   154,    72,    64,    72,   120,    72,
      72,    93,    95,   159,    78,    14,   144,    64,   115,    75,
      75,   119,   149,   148,   115,   114,    93,   154,    58,   120,
     121,    95,   118,    95,   118,   118,   154,    75,    78,    79,
     154,    72,    95,   120,    73,    73,    73,    78,   118,   120,
      95,   154,   154,   154,    73,    95,   120,    34,    95,   120,
      73,   154,    73,   154,   154
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   104,   104,   105,
     105,   105,   106,   106,   106,   107,   107,   107,   107,   107,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   120,   120,   121,   122,   122,   122,   122,
     123,   123,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   135,
     136,   137,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   148,   148,   148,
     149,   149,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   154,   154,   154,   155,   155,   155,   156,   157,
     157,   158,   158,   159,   159,   160,   161,   161,   161,   162,
     162,   162,   162,   163,   163,   163,   163,   164,   164,   165,
     165,   167,   166,   168,   168,   169,   169,   170,   170
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     0,     3,     2,     2,     2,     2,
       1,     0,     1,     0,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     3,     5,     6,     5,     4,     4,     2,     3,
       1,     0,     1,     2,     1,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     0,     1,     1,     3,     4,
       2,     4,     2,     1,     0,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     3,     1,
       2,     1,     0,     1,     1,     2,     5,     7,     5,     5,
       7,     9,     8,     3,     2,     2,     3,     1,     2,     1,
       1,     0,     5,     1,     2,     1,     0,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 90 "ass4_21CS10057_21CS30058.y"
          { printf("primary_expression -> identifier\n"); }
#line 1814 "y.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_NO  */
#line 92 "ass4_21CS10057_21CS30058.y"
           { printf("primary_expression -> constant\n"); }
#line 1820 "y.tab.c"
    break;

  case 4: /* primary_expression: FLOAT_NO  */
#line 94 "ass4_21CS10057_21CS30058.y"
           { printf("primary_expression -> constant\n"); }
#line 1826 "y.tab.c"
    break;

  case 5: /* primary_expression: CHARACTER  */
#line 96 "ass4_21CS10057_21CS30058.y"
           { printf("primary_expression -> constant\n"); }
#line 1832 "y.tab.c"
    break;

  case 6: /* primary_expression: STRING  */
#line 98 "ass4_21CS10057_21CS30058.y"
          { printf("primary_expression -> string-literal\n"); }
#line 1838 "y.tab.c"
    break;

  case 7: /* primary_expression: '(' expression ')'  */
#line 100 "ass4_21CS10057_21CS30058.y"
          { printf("primary_expression -> string-literal\n"); }
#line 1844 "y.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 105 "ass4_21CS10057_21CS30058.y"
          { printf("postfix_expression -> primary_expression\n"); }
#line 1850 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 107 "ass4_21CS10057_21CS30058.y"
          { printf("postfix_expression -> postfix_expression [ expression ]\n"); }
#line 1856 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '(' argument_expression_list_optional ')'  */
#line 109 "ass4_21CS10057_21CS30058.y"
          { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
#line 1862 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 111 "ass4_21CS10057_21CS30058.y"
            { printf("postfix_expression -> postfix_expression . identifier\n"); }
#line 1868 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression RIGHT_ARROW IDENTIFIER  */
#line 113 "ass4_21CS10057_21CS30058.y"
            { printf("postfix_expression -> postfix_expression -> identifier\n"); }
#line 1874 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression INCREMENT  */
#line 115 "ass4_21CS10057_21CS30058.y"
             { printf("postfix_expression -> postfix_expression ++\n"); }
#line 1880 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression DECREMENT  */
#line 117 "ass4_21CS10057_21CS30058.y"
            { printf("postfix_expression -> postfix_expression --\n"); }
#line 1886 "y.tab.c"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 120 "ass4_21CS10057_21CS30058.y"
            { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }
#line 1892 "y.tab.c"
    break;

  case 16: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 122 "ass4_21CS10057_21CS30058.y"
             { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
#line 1898 "y.tab.c"
    break;

  case 19: /* argument_expression_list: assignment_expression  */
#line 132 "ass4_21CS10057_21CS30058.y"
            { printf("argument_expression_list -> assignment_expression\n"); }
#line 1904 "y.tab.c"
    break;

  case 20: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 134 "ass4_21CS10057_21CS30058.y"
            { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
#line 1910 "y.tab.c"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 139 "ass4_21CS10057_21CS30058.y"
        { printf("unary_expression -> postfix_expression\n"); }
#line 1916 "y.tab.c"
    break;

  case 22: /* unary_expression: INCREMENT unary_expression  */
#line 141 "ass4_21CS10057_21CS30058.y"
        { printf("unary_expression -> ++ unary_expression\n"); }
#line 1922 "y.tab.c"
    break;

  case 23: /* unary_expression: DECREMENT unary_expression  */
#line 143 "ass4_21CS10057_21CS30058.y"
        { printf("unary_expression -> −− unary_expression\n"); }
#line 1928 "y.tab.c"
    break;

  case 24: /* unary_expression: unary_operator cast_expression  */
#line 145 "ass4_21CS10057_21CS30058.y"
        { printf("unary_expression -> unary_operator cast_expression\n"); }
#line 1934 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF unary_expression  */
#line 147 "ass4_21CS10057_21CS30058.y"
        { printf("unary_expression -> sizeof unary_expression\n"); }
#line 1940 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 149 "ass4_21CS10057_21CS30058.y"
        { printf("unary_expression -> sizeof ( type_name ) \n"); }
#line 1946 "y.tab.c"
    break;

  case 27: /* unary_operator: '&'  */
#line 154 "ass4_21CS10057_21CS30058.y"
        { printf("unary_operator -> &\n"); }
#line 1952 "y.tab.c"
    break;

  case 28: /* unary_operator: '*'  */
#line 156 "ass4_21CS10057_21CS30058.y"
        { printf("unary_operator -> *\n"); }
#line 1958 "y.tab.c"
    break;

  case 29: /* unary_operator: '+'  */
#line 158 "ass4_21CS10057_21CS30058.y"
        { printf("unary_operator -> +\n"); }
#line 1964 "y.tab.c"
    break;

  case 30: /* unary_operator: '-'  */
#line 160 "ass4_21CS10057_21CS30058.y"
        { printf("unary_operator -> -\n"); }
#line 1970 "y.tab.c"
    break;

  case 31: /* unary_operator: '~'  */
#line 162 "ass4_21CS10057_21CS30058.y"
        { printf("unary_operator -> ~\n"); }
#line 1976 "y.tab.c"
    break;

  case 32: /* unary_operator: '!'  */
#line 164 "ass4_21CS10057_21CS30058.y"
        { printf("unary_operator -> !\n"); }
#line 1982 "y.tab.c"
    break;

  case 33: /* cast_expression: unary_expression  */
#line 169 "ass4_21CS10057_21CS30058.y"
         { printf("cast_expression -> unary_expression\n"); }
#line 1988 "y.tab.c"
    break;

  case 34: /* cast_expression: '(' type_name ')' cast_expression  */
#line 171 "ass4_21CS10057_21CS30058.y"
         { printf("cast_expression -> ( type_name ) cast_expression\n"); }
#line 1994 "y.tab.c"
    break;

  case 35: /* multplicative_expression: cast_expression  */
#line 176 "ass4_21CS10057_21CS30058.y"
            { printf("multiplicative_expression -> cast_expression\n"); }
#line 2000 "y.tab.c"
    break;

  case 36: /* multplicative_expression: multplicative_expression '*' cast_expression  */
#line 178 "ass4_21CS10057_21CS30058.y"
            { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
#line 2006 "y.tab.c"
    break;

  case 37: /* multplicative_expression: multplicative_expression '/' cast_expression  */
#line 180 "ass4_21CS10057_21CS30058.y"
            { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
#line 2012 "y.tab.c"
    break;

  case 38: /* multplicative_expression: multplicative_expression '%' cast_expression  */
#line 182 "ass4_21CS10057_21CS30058.y"
            { printf("multiplicative_expression -> multiplicative_expression modulo cast_expression\n"); }
#line 2018 "y.tab.c"
    break;

  case 39: /* additive_expression: multplicative_expression  */
#line 187 "ass4_21CS10057_21CS30058.y"
           { printf("additive_expression -> multiplicative_expression\n"); }
#line 2024 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression '+' multplicative_expression  */
#line 189 "ass4_21CS10057_21CS30058.y"
            { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
#line 2030 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression '-' multplicative_expression  */
#line 191 "ass4_21CS10057_21CS30058.y"
           { printf("additive_expression -> additive_expression − multiplicative_expression\n"); }
#line 2036 "y.tab.c"
    break;

  case 42: /* shift_expression: additive_expression  */
#line 196 "ass4_21CS10057_21CS30058.y"
        { printf("shift_expression -> additive_expression\n"); }
#line 2042 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression LSHIFT additive_expression  */
#line 198 "ass4_21CS10057_21CS30058.y"
        { printf("shift_expression -> shift_expression << additive_expression\n"); }
#line 2048 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression RSHIFT additive_expression  */
#line 200 "ass4_21CS10057_21CS30058.y"
        { printf("shift_expression -> shift_expression >> additive_expression\n"); }
#line 2054 "y.tab.c"
    break;

  case 45: /* relational_expression: shift_expression  */
#line 205 "ass4_21CS10057_21CS30058.y"
           { printf("relational_expression -> shift_expression\n"); }
#line 2060 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression '<' shift_expression  */
#line 207 "ass4_21CS10057_21CS30058.y"
           { printf("relational_expression -> relational_expression < shift_expression\n"); }
#line 2066 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression '>' shift_expression  */
#line 209 "ass4_21CS10057_21CS30058.y"
            { printf("relational_expression -> relational_expression > shift_expression\n"); }
#line 2072 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression LESS_THAN_EQUAL_TO shift_expression  */
#line 211 "ass4_21CS10057_21CS30058.y"
            { printf("relational_expression -> relational_expression <= shift_expression\n"); }
#line 2078 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression GREATER_THAN_EQUAL_TO shift_expression  */
#line 213 "ass4_21CS10057_21CS30058.y"
           { printf("relational_expression -> relational_expression >= shift_expression\n"); }
#line 2084 "y.tab.c"
    break;

  case 50: /* equality_expression: relational_expression  */
#line 218 "ass4_21CS10057_21CS30058.y"
           { printf("equality_expression -> relational_expression\n"); }
#line 2090 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression DOUBLE_EQUAL relational_expression  */
#line 220 "ass4_21CS10057_21CS30058.y"
           { printf("equality_expression -> equality_expression == relational_expression\n"); }
#line 2096 "y.tab.c"
    break;

  case 52: /* equality_expression: relational_expression NOT_EQUAL relational_expression  */
#line 222 "ass4_21CS10057_21CS30058.y"
           { printf("equality_expression -> equality_expression ! = relational_expression\n"); }
#line 2102 "y.tab.c"
    break;

  case 53: /* AND_expression: equality_expression  */
#line 227 "ass4_21CS10057_21CS30058.y"
        { printf("AND_expression -> equality_expression\n"); }
#line 2108 "y.tab.c"
    break;

  case 54: /* AND_expression: AND_expression '&' equality_expression  */
#line 229 "ass4_21CS10057_21CS30058.y"
        { printf("AND_expression -> AND_expression & equality_expression\n");}
#line 2114 "y.tab.c"
    break;

  case 55: /* exclusive_OR_expression: AND_expression  */
#line 234 "ass4_21CS10057_21CS30058.y"
             { printf("exclusive_OR_expression -> AND_expression\n"); }
#line 2120 "y.tab.c"
    break;

  case 56: /* exclusive_OR_expression: exclusive_OR_expression '^' AND_expression  */
#line 236 "ass4_21CS10057_21CS30058.y"
             { printf("exclusive_OR_expression -> exclusive_OR_expression ˆ AND_expression\n"); }
#line 2126 "y.tab.c"
    break;

  case 57: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 241 "ass4_21CS10057_21CS30058.y"
             { printf("inclusive_OR_expression -> exclusive_OR_expression\n"); }
#line 2132 "y.tab.c"
    break;

  case 58: /* inclusive_OR_expression: inclusive_OR_expression '|' exclusive_OR_expression  */
#line 243 "ass4_21CS10057_21CS30058.y"
             { printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
#line 2138 "y.tab.c"
    break;

  case 59: /* logical_AND_expression: inclusive_OR_expression  */
#line 248 "ass4_21CS10057_21CS30058.y"
            { printf("logical_AND_expression -> inclusive_OR_expression\n"); }
#line 2144 "y.tab.c"
    break;

  case 60: /* logical_AND_expression: logical_AND_expression BINARY_AND inclusive_OR_expression  */
#line 250 "ass4_21CS10057_21CS30058.y"
             { printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
#line 2150 "y.tab.c"
    break;

  case 61: /* logical_OR_expression: logical_AND_expression  */
#line 255 "ass4_21CS10057_21CS30058.y"
           { printf("logical_OR_expression -> logical_AND_expression\n"); }
#line 2156 "y.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_OR_expression BINARY_OR logical_AND_expression  */
#line 257 "ass4_21CS10057_21CS30058.y"
            { printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
#line 2162 "y.tab.c"
    break;

  case 63: /* conditional_expression: logical_OR_expression  */
#line 262 "ass4_21CS10057_21CS30058.y"
            { printf("conditional_expression -> logical_OR_expression\n"); }
#line 2168 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression '?' expression ':' conditional_expression  */
#line 264 "ass4_21CS10057_21CS30058.y"
            { printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
#line 2174 "y.tab.c"
    break;

  case 65: /* assignment_expression: conditional_expression  */
#line 269 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_expression -> conditional_expression\n"); }
#line 2180 "y.tab.c"
    break;

  case 66: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 271 "ass4_21CS10057_21CS30058.y"
            { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
#line 2186 "y.tab.c"
    break;

  case 69: /* assignment_operator: '='  */
#line 281 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> =\n"); }
#line 2192 "y.tab.c"
    break;

  case 70: /* assignment_operator: MUL_ASSIGN  */
#line 283 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> *=\n"); }
#line 2198 "y.tab.c"
    break;

  case 71: /* assignment_operator: DIV_ASSIGN  */
#line 285 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> /=\n"); }
#line 2204 "y.tab.c"
    break;

  case 72: /* assignment_operator: MOD_ASSIGN  */
#line 287 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> modulo =\n"); }
#line 2210 "y.tab.c"
    break;

  case 73: /* assignment_operator: ADD_ASSIGN  */
#line 289 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> +=\n"); }
#line 2216 "y.tab.c"
    break;

  case 74: /* assignment_operator: SUB_ASSIGN  */
#line 291 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> -=\n"); }
#line 2222 "y.tab.c"
    break;

  case 75: /* assignment_operator: LSHIFT_ASSIGN  */
#line 293 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> <<=\n"); }
#line 2228 "y.tab.c"
    break;

  case 76: /* assignment_operator: RSHIFT_ASSIGN  */
#line 295 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> >>=\n"); }
#line 2234 "y.tab.c"
    break;

  case 77: /* assignment_operator: AND_ASSIGN  */
#line 297 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> &=\n"); }
#line 2240 "y.tab.c"
    break;

  case 78: /* assignment_operator: XOR_ASSIGN  */
#line 299 "ass4_21CS10057_21CS30058.y"
            { printf("assignment_operator -> ^=\n"); }
#line 2246 "y.tab.c"
    break;

  case 79: /* assignment_operator: OR_ASSIGN  */
#line 301 "ass4_21CS10057_21CS30058.y"
           { printf("assignment_operator -> |=\n"); }
#line 2252 "y.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 306 "ass4_21CS10057_21CS30058.y"
      { printf("expression -> assignment_expression\n"); }
#line 2258 "y.tab.c"
    break;

  case 81: /* expression: expression ',' assignment_expression  */
#line 308 "ass4_21CS10057_21CS30058.y"
      { printf("expression -> expression , assignment_expression\n"); }
#line 2264 "y.tab.c"
    break;

  case 82: /* constant_expression: conditional_expression  */
#line 313 "ass4_21CS10057_21CS30058.y"
           { printf("constant_expression -> conditional_expression\n"); }
#line 2270 "y.tab.c"
    break;

  case 85: /* declaration: declaration_specifiers init_declarator_list_optional ';'  */
#line 323 "ass4_21CS10057_21CS30058.y"
       { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
#line 2276 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers_optional  */
#line 328 "ass4_21CS10057_21CS30058.y"
            { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
#line 2282 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier declaration_specifiers_optional  */
#line 330 "ass4_21CS10057_21CS30058.y"
            { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
#line 2288 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers_optional  */
#line 332 "ass4_21CS10057_21CS30058.y"
            { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
#line 2294 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: function_specifier declaration_specifiers_optional  */
#line 334 "ass4_21CS10057_21CS30058.y"
            { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
#line 2300 "y.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator  */
#line 349 "ass4_21CS10057_21CS30058.y"
        { printf("init_declarator_list -> init_declarator\n"); }
#line 2306 "y.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 351 "ass4_21CS10057_21CS30058.y"
        { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
#line 2312 "y.tab.c"
    break;

  case 96: /* init_declarator: declarator  */
#line 356 "ass4_21CS10057_21CS30058.y"
         { printf("init_declarator -> declarator\n"); }
#line 2318 "y.tab.c"
    break;

  case 97: /* init_declarator: declarator '=' initializer  */
#line 358 "ass4_21CS10057_21CS30058.y"
         { printf("init_declarator -> declarator = initializer\n"); }
#line 2324 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: EXTERN  */
#line 363 "ass4_21CS10057_21CS30058.y"
             { printf("storage_class_specifier -> extern\n"); }
#line 2330 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: STATIC  */
#line 365 "ass4_21CS10057_21CS30058.y"
             { printf("storage_class_specifier -> static\n"); }
#line 2336 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: AUTO  */
#line 367 "ass4_21CS10057_21CS30058.y"
             { printf("storage_class_specifier -> auto\n"); }
#line 2342 "y.tab.c"
    break;

  case 101: /* storage_class_specifier: REGISTER  */
#line 369 "ass4_21CS10057_21CS30058.y"
             { printf("storage_class_specifier -> register\n"); }
#line 2348 "y.tab.c"
    break;

  case 102: /* type_specifier: VOID  */
#line 374 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> void\n"); }
#line 2354 "y.tab.c"
    break;

  case 103: /* type_specifier: CHAR  */
#line 376 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> char\n"); }
#line 2360 "y.tab.c"
    break;

  case 104: /* type_specifier: SHORT  */
#line 378 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> short\n"); }
#line 2366 "y.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 380 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> int\n"); }
#line 2372 "y.tab.c"
    break;

  case 106: /* type_specifier: LONG  */
#line 382 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> long\n"); }
#line 2378 "y.tab.c"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 384 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> float\n"); }
#line 2384 "y.tab.c"
    break;

  case 108: /* type_specifier: DOUBLE  */
#line 386 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> float\n"); }
#line 2390 "y.tab.c"
    break;

  case 109: /* type_specifier: SIGNED  */
#line 388 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> signed\n"); }
#line 2396 "y.tab.c"
    break;

  case 110: /* type_specifier: UNSIGNED  */
#line 390 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> unsigned\n"); }
#line 2402 "y.tab.c"
    break;

  case 111: /* type_specifier: BOOL  */
#line 392 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> bool\n"); }
#line 2408 "y.tab.c"
    break;

  case 112: /* type_specifier: COMPLEX  */
#line 394 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> complex\n"); }
#line 2414 "y.tab.c"
    break;

  case 113: /* type_specifier: IMAGINARY  */
#line 396 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> imaginary\n"); }
#line 2420 "y.tab.c"
    break;

  case 114: /* type_specifier: enum_specifier  */
#line 398 "ass4_21CS10057_21CS30058.y"
        { printf("type_specifier -> enum_specifier\n"); }
#line 2426 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_optional  */
#line 403 "ass4_21CS10057_21CS30058.y"
            { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
#line 2432 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_optional  */
#line 405 "ass4_21CS10057_21CS30058.y"
            { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
#line 2438 "y.tab.c"
    break;

  case 162: /* designation: designator_list '='  */
#line 515 "ass4_21CS10057_21CS30058.y"
       { printf("designation -> designator_list =\n"); }
#line 2444 "y.tab.c"
    break;

  case 165: /* designator_list: designator  */
#line 525 "ass4_21CS10057_21CS30058.y"
         { printf("designator_list -> designator\n"); }
#line 2450 "y.tab.c"
    break;

  case 166: /* designator_list: designator_list designator  */
#line 527 "ass4_21CS10057_21CS30058.y"
         { printf("designator_list -> designator_list designator\n"); }
#line 2456 "y.tab.c"
    break;

  case 167: /* designator: '[' constant_expression ']'  */
#line 532 "ass4_21CS10057_21CS30058.y"
      { printf("designator -> [ constant_expression ]\n"); }
#line 2462 "y.tab.c"
    break;

  case 168: /* designator: '.' IDENTIFIER  */
#line 534 "ass4_21CS10057_21CS30058.y"
      { printf("designator -> . identifier\n"); }
#line 2468 "y.tab.c"
    break;

  case 169: /* statement: labeled_statement  */
#line 539 "ass4_21CS10057_21CS30058.y"
     { printf("statement -> labeled_statement\n"); }
#line 2474 "y.tab.c"
    break;

  case 170: /* statement: compound_statement  */
#line 541 "ass4_21CS10057_21CS30058.y"
     { printf("statement -> compound_statement\n"); }
#line 2480 "y.tab.c"
    break;

  case 171: /* statement: expression_statement  */
#line 543 "ass4_21CS10057_21CS30058.y"
     { printf("statement -> expression_statement\n"); }
#line 2486 "y.tab.c"
    break;

  case 172: /* statement: selection_statement  */
#line 545 "ass4_21CS10057_21CS30058.y"
     { printf("statement -> selection_statement\n"); }
#line 2492 "y.tab.c"
    break;

  case 173: /* statement: iteration_statement  */
#line 547 "ass4_21CS10057_21CS30058.y"
     { printf("statement -> iteration_statement\n"); }
#line 2498 "y.tab.c"
    break;

  case 174: /* statement: jump_statement  */
#line 549 "ass4_21CS10057_21CS30058.y"
     { printf("statement -> jump_statement\n"); }
#line 2504 "y.tab.c"
    break;

  case 175: /* labeled_statement: IDENTIFIER ':' statement  */
#line 554 "ass4_21CS10057_21CS30058.y"
         { printf("labeled_statement -> identifier : statement\n"); }
#line 2510 "y.tab.c"
    break;

  case 176: /* labeled_statement: CASE constant_expression ':' statement  */
#line 556 "ass4_21CS10057_21CS30058.y"
         { printf("labeled_statement -> case constant_expression : statement\n"); }
#line 2516 "y.tab.c"
    break;

  case 177: /* labeled_statement: DEFAULT ':' statement  */
#line 558 "ass4_21CS10057_21CS30058.y"
         { printf("labeled_statement -> default : statement\n"); }
#line 2522 "y.tab.c"
    break;

  case 178: /* compound_statement: '{' block_item_list_optional '}'  */
#line 563 "ass4_21CS10057_21CS30058.y"
          { printf("compound_statement -> { block_item_list_opt }\n"); }
#line 2528 "y.tab.c"
    break;

  case 179: /* block_item_list: block_item  */
#line 568 "ass4_21CS10057_21CS30058.y"
         { printf("block_item_list -> block_item\n"); }
#line 2534 "y.tab.c"
    break;

  case 180: /* block_item_list: block_item_list block_item  */
#line 570 "ass4_21CS10057_21CS30058.y"
         { printf("block_item_list -> block_item_list block_item\n"); }
#line 2540 "y.tab.c"
    break;

  case 183: /* block_item: declaration  */
#line 580 "ass4_21CS10057_21CS30058.y"
      { printf("block_item -> declaration\n"); }
#line 2546 "y.tab.c"
    break;

  case 184: /* block_item: statement  */
#line 582 "ass4_21CS10057_21CS30058.y"
      { printf("block_item -> statement\n"); }
#line 2552 "y.tab.c"
    break;

  case 185: /* expression_statement: expression_optional ';'  */
#line 587 "ass4_21CS10057_21CS30058.y"
          { printf("expression_statement-> expression_opt ;\n"); }
#line 2558 "y.tab.c"
    break;

  case 186: /* selection_statement: IF '(' expression ')' statement  */
#line 592 "ass4_21CS10057_21CS30058.y"
           { printf("selection_statement -> if ( expression ) statement\n"); }
#line 2564 "y.tab.c"
    break;

  case 187: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 594 "ass4_21CS10057_21CS30058.y"
           { printf("selection_statement -> if ( expression ) statement else statement\n"); }
#line 2570 "y.tab.c"
    break;

  case 188: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 596 "ass4_21CS10057_21CS30058.y"
           { printf("selection_statement -> switch ( expression ) statement\n"); }
#line 2576 "y.tab.c"
    break;

  case 189: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 601 "ass4_21CS10057_21CS30058.y"
           { printf("iteration_statement -> while ( expression ) statement\n"); }
#line 2582 "y.tab.c"
    break;

  case 190: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 603 "ass4_21CS10057_21CS30058.y"
           { printf("iteration_statement -> do statement while ( expression ) ;\n"); }
#line 2588 "y.tab.c"
    break;

  case 191: /* iteration_statement: FOR '(' expression_optional ';' expression_optional ';' expression_optional ')' statement  */
#line 605 "ass4_21CS10057_21CS30058.y"
           { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
#line 2594 "y.tab.c"
    break;

  case 192: /* iteration_statement: FOR '(' declaration expression_optional ';' expression_optional ')' statement  */
#line 607 "ass4_21CS10057_21CS30058.y"
           { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
#line 2600 "y.tab.c"
    break;

  case 193: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 612 "ass4_21CS10057_21CS30058.y"
        { printf("jump_statement -> goto identifier ;\n"); }
#line 2606 "y.tab.c"
    break;

  case 194: /* jump_statement: CONTINUE ';'  */
#line 614 "ass4_21CS10057_21CS30058.y"
        { printf("jump_statement -> continue ;\n"); }
#line 2612 "y.tab.c"
    break;

  case 195: /* jump_statement: BREAK ';'  */
#line 616 "ass4_21CS10057_21CS30058.y"
        { printf("jump_statement -> break ;\n"); }
#line 2618 "y.tab.c"
    break;

  case 196: /* jump_statement: RETURN expression_optional ';'  */
#line 618 "ass4_21CS10057_21CS30058.y"
        { printf("jump_statement -> return expression_opt ;\n"); }
#line 2624 "y.tab.c"
    break;

  case 197: /* translation_unit: external_declaration  */
#line 623 "ass4_21CS10057_21CS30058.y"
        { printf("translation_unit -> external_declaration\n"); }
#line 2630 "y.tab.c"
    break;

  case 198: /* translation_unit: translation_unit external_declaration  */
#line 625 "ass4_21CS10057_21CS30058.y"
        { printf("translation_unit -> external_declaration\n"); }
#line 2636 "y.tab.c"
    break;

  case 199: /* external_declaration: function_definition  */
#line 630 "ass4_21CS10057_21CS30058.y"
          { printf("external_declaration -> function_definition\n"); }
#line 2642 "y.tab.c"
    break;

  case 200: /* external_declaration: declaration  */
#line 632 "ass4_21CS10057_21CS30058.y"
          { printf("external_declaration -> declaration\n"); }
#line 2648 "y.tab.c"
    break;

  case 201: /* $@1: %empty  */
#line 637 "ass4_21CS10057_21CS30058.y"
            { printf("function_definition -> declaration_specifiers declarator declaration_list_opt \n"); }
#line 2654 "y.tab.c"
    break;

  case 202: /* function_definition: declaration_specifiers declarator declaration_list_optional $@1 compound_statement  */
#line 639 "ass4_21CS10057_21CS30058.y"
            { printf("function_definition -> compound_statement\n"); }
#line 2660 "y.tab.c"
    break;

  case 203: /* declaration_list: declaration  */
#line 644 "ass4_21CS10057_21CS30058.y"
        { printf("declaration_list -> declaration\n"); }
#line 2666 "y.tab.c"
    break;

  case 204: /* declaration_list: declaration_list declaration  */
#line 646 "ass4_21CS10057_21CS30058.y"
        { printf("declaration_list -> declaration_list declaration\n"); }
#line 2672 "y.tab.c"
    break;


#line 2676 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 660 "ass4_21CS10057_21CS30058.y"


void yyerror(const char *s) {
    printf("Error occured : %s\n",s);
}
