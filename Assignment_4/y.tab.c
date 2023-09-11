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
  YYSYMBOL_declaration_list = 167,         /* declaration_list  */
  YYSYMBOL_declaration_list_optional = 168, /* declaration_list_optional  */
  YYSYMBOL_identifier_optional = 169       /* identifier_optional  */
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
#define YYLAST   921

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

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
       0,    89,    89,    90,    91,    92,    93,    94,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   110,   111,   115,
     116,   120,   121,   122,   123,   124,   125,   129,   130,   131,
     132,   133,   134,   138,   139,   143,   144,   145,   146,   150,
     151,   152,   156,   157,   158,   162,   163,   164,   165,   166,
     170,   171,   172,   176,   177,   181,   182,   186,   187,   191,
     192,   196,   197,   201,   202,   206,   207,   211,   212,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     230,   231,   235,   239,   240,   244,   248,   249,   250,   251,
     255,   256,   260,   261,   265,   266,   270,   271,   275,   276,
     277,   278,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   298,   299,   303,   304,   308,
     309,   310,   314,   315,   319,   320,   324,   325,   326,   330,
     334,   338,   339,   340,   341,   342,   343,   344,   348,   349,
     353,   354,   358,   359,   363,   364,   368,   369,   373,   374,
     378,   379,   383,   384,   388,   389,   393,   397,   398,   399,
     403,   404,   408,   412,   413,   417,   418,   422,   423,   427,
     428,   429,   430,   431,   432,   436,   437,   438,   442,   446,
     447,   451,   452,   456,   457,   461,   465,   466,   467,   471,
     472,   473,   474,   478,   479,   480,   481,   485,   486,   490,
     491,   495,   499,   500,   504,   505,   509,   510
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
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "declaration_list_optional", "identifier_optional", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-209)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-207)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     860,  -209,  -209,  -209,  -209,   -51,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,   -69,   860,   860,  -209,   860,   860,   749,
    -209,  -209,     5,   101,    15,   -59,   -26,  -209,   695,  -209,
     -24,  -209,  -209,  -209,  -209,  -209,  -209,  -209,    42,  -209,
      15,    58,  -209,    58,   507,  -209,   -69,   860,   103,  -209,
      58,    93,  -209,    30,  -209,  -209,  -209,    48,   553,   553,
     577,  -209,  -209,  -209,  -209,  -209,   418,    13,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,    71,   694,   599,  -209,    -1,
      90,   170,     8,   144,   105,    80,    97,   184,     7,  -209,
    -209,  -209,  -209,   230,  -209,   125,   823,   -11,  -209,   -41,
     418,  -209,  -209,   418,  -209,  -209,    21,   164,  -209,   164,
     127,   599,   140,   116,  -209,   507,   -31,  -209,   152,  -209,
    -209,   599,   599,   154,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,   599,  -209,  -209,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   131,   599,   133,
     129,   483,   165,   172,   166,   599,   167,   168,   148,   163,
     149,  -209,  -209,  -209,  -209,   295,   169,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,   -14,   173,   171,  -209,   174,   175,
      15,   623,   155,  -209,  -209,   178,   179,  -209,   599,  -209,
    -209,  -209,   529,  -209,   206,  -209,  -209,   -12,  -209,  -209,
    -209,  -209,   181,   204,  -209,    26,  -209,  -209,  -209,  -209,
    -209,    -1,    -1,    90,    90,   170,   170,    43,   170,   170,
      43,   144,   105,    80,    97,   184,   -37,  -209,   150,  -209,
     483,   226,   360,   197,   599,   198,   599,   599,   483,  -209,
    -209,  -209,  -209,  -209,   786,   237,  -209,   599,   228,  -209,
     229,   599,   232,   232,  -209,    13,  -209,  -209,  -209,   507,
    -209,   599,  -209,   599,   483,  -209,   233,   211,   599,  -209,
      61,  -209,    62,    65,  -209,  -209,  -209,  -209,   241,  -209,
    -209,  -209,   124,  -209,  -209,  -209,  -209,   599,   599,   222,
     483,   483,   483,  -209,  -209,    77,    73,   223,   599,   285,
    -209,  -209,  -209,   234,   599,   273,   483,  -209,   275,   483,
    -209,   483,  -209,  -209
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,   103,   126,   108,   207,    98,   107,   129,   105,
     106,   101,   127,   104,   109,    99,   110,   102,   128,   111,
     112,   113,   200,   141,    91,    91,   114,    91,    91,     0,
     197,   199,   121,     0,   145,     0,    92,    94,    96,   140,
       0,    90,    86,    87,    88,    89,     1,   198,     0,   142,
     144,   138,    85,   141,     0,   202,   141,   204,     0,   131,
     141,   130,   122,     0,   143,   139,    95,    96,     0,     0,
       0,     2,     3,     4,     5,     6,     0,   164,    27,    28,
      29,    30,    31,    32,     8,    21,    33,     0,    35,    39,
      42,    45,    50,    53,    55,    57,    59,    61,    63,    65,
     157,    97,   203,    84,   201,     0,   155,   145,   119,     0,
       0,    22,    23,     0,    25,    80,     0,   118,   156,   118,
       0,     0,     0,     0,   163,     0,     0,   165,     0,    13,
      14,    18,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    69,     0,    33,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,    84,     0,     0,     2,    83,
       0,   183,   184,   169,   170,    84,     0,   179,   171,   172,
     173,   174,   132,   152,   141,     0,   146,   148,   154,     0,
     145,    68,   124,   120,   123,     0,     0,     7,     0,   117,
     115,   116,     0,    82,     0,   168,   158,   164,   160,   162,
     166,    12,     0,    17,    19,     0,    11,    66,    36,    37,
      38,    40,    41,    43,    44,    48,    49,    52,    46,    47,
      51,    54,    56,    58,    60,    62,     0,   195,     0,   194,
      84,     0,    84,     0,     0,     0,     0,     0,    84,   185,
     180,   178,   150,   136,     0,     0,   137,     0,    28,    67,
       0,     0,     0,    26,    81,   164,    34,   167,   159,     0,
      10,     0,     9,     0,    84,   177,     0,     0,    84,   193,
       0,   196,     0,     0,   175,   147,   149,   153,     0,   135,
     133,   125,     0,   161,    20,    64,   176,     0,    84,     0,
      84,    84,    84,   134,    15,   164,     0,     0,    84,   186,
     188,   189,    16,     0,    84,     0,    84,   190,     0,    84,
     187,    84,   192,   191
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,  -209,  -209,   -38,  -209,   -79,    79,    60,
      28,  -146,   188,   195,   203,   194,   205,  -209,  -114,   -52,
    -209,  -209,   -75,  -135,  -160,   -35,     0,   134,  -209,  -209,
     315,  -209,   -15,    49,   250,  -209,  -209,  -209,   -29,  -209,
     -19,  -209,   320,  -209,  -209,   -97,  -209,  -209,   110,  -209,
    -209,   -55,  -119,   106,  -209,  -208,  -209,   256,  -121,  -209,
     325,  -209,  -209,   199,  -209,  -209,  -209,  -209,  -209,   357,
    -209,  -209,  -209,  -209
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    84,    85,   222,   223,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   115,
     270,   145,   179,   214,   180,    22,    56,    42,    35,    36,
      37,    24,    25,   118,   210,    26,    63,   204,    27,    28,
      67,    61,    39,    40,    50,    51,   195,   196,   197,   198,
     199,   120,   101,   123,   124,   125,   126,   127,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    29,    30,
      31,    57,    58,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   116,   100,    55,    38,    49,   218,   213,   147,   279,
     201,   237,    34,    32,   240,   255,   155,   156,     3,   157,
     165,    64,   102,   202,    41,    41,   -93,    41,    41,    23,
     111,   112,   114,   248,    12,   116,    52,   203,   116,   200,
      59,   105,   208,   121,     3,   122,    18,   119,    60,   146,
     251,   155,   156,    53,   213,   205,   283,   225,   206,  -151,
      12,   117,   121,   219,   122,  -151,   278,    34,   181,   228,
     229,   230,    18,   100,   128,   129,   130,    62,    49,   224,
     148,   119,  -206,   146,   119,   149,   150,   121,   119,   122,
     119,   246,   287,   227,   207,   117,   158,   159,   117,   166,
     208,   282,   117,   267,   117,   208,   194,   279,   108,   109,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   309,   285,
     146,   158,   159,   276,   310,   311,   301,   294,   312,    34,
     208,   208,    54,   131,   208,   132,   323,   133,   317,   269,
     181,   121,   208,   122,   160,   322,   274,   213,   325,    43,
     303,    44,    45,   306,   328,   106,   209,   107,   209,   305,
     162,    49,   151,   152,   146,   262,   153,   154,    48,   290,
     103,   292,   293,   235,   236,   161,   238,   239,   163,   319,
     320,   321,     2,     3,   216,   217,   164,     4,   192,     5,
     212,     7,   314,   315,   215,   330,     9,    10,   332,    12,
     333,    13,    14,   233,   234,   298,   221,   288,   226,    16,
      17,    18,   250,    19,    20,    21,   247,   100,   249,   304,
     231,   232,   316,   146,    68,    69,   253,   252,   254,   256,
     257,   258,   208,   284,   259,   146,   263,   261,   266,   271,
     264,   272,   273,   265,   280,     1,   167,   168,     2,     3,
     169,   170,   171,     4,   194,     5,     6,     7,   172,   173,
     174,     8,     9,    10,    11,    12,   175,    13,    14,    70,
      15,   277,   176,   281,   286,    16,    17,    18,   177,    19,
      20,    21,   289,   291,   178,    72,    73,    74,    75,    68,
      69,   297,    76,   299,   300,   307,   308,   103,  -182,   275,
      78,    79,    80,    81,    82,    83,   313,   318,   324,   326,
       1,   167,   168,     2,     3,   169,   170,   171,     4,   327,
       5,     6,     7,   172,   173,   174,     8,     9,    10,    11,
      12,   175,    13,    14,    70,    15,   329,   176,   331,   241,
      16,    17,    18,   177,    19,    20,    21,   242,   244,   178,
      72,    73,    74,    75,    68,    69,   243,    76,    66,   211,
     245,    65,   103,  -181,   296,    78,    79,    80,    81,    82,
      83,   302,   220,   104,   260,     1,    47,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,    70,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,    68,    69,    71,    72,    73,    74,    75,     0,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,     2,     3,     0,     0,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     0,
       9,    10,     0,    12,     0,    13,    14,    70,     0,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,    71,    72,    73,    74,    75,    68,    69,     0,
      76,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,     0,   167,
     168,    68,    69,   169,   170,   171,     0,     0,     0,     0,
       0,   172,   173,   174,     0,     0,     0,     0,     0,   175,
       0,     0,    70,    68,    69,   176,     0,     0,     0,     0,
       0,   177,     0,     0,     0,     0,     0,   178,    72,    73,
      74,    75,     0,     0,     0,    76,    70,    68,    69,     0,
     103,     0,     0,    78,    79,    80,    81,    82,    83,     0,
       0,    71,    72,    73,    74,    75,     0,     0,    70,    76,
       0,    68,    69,     0,    77,     0,     0,    78,    79,    80,
      81,    82,    83,    71,    72,    73,    74,    75,     0,     0,
       0,    76,    70,    68,    69,     0,   275,     0,     0,    78,
      79,    80,    81,    82,    83,     0,     0,    71,    72,    73,
      74,    75,     0,     0,     0,   110,    70,    68,    69,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,     0,
       0,    71,    72,    73,    74,    75,     0,     0,    70,   113,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    71,    72,    73,    74,    75,     0,     0,
       0,    76,    70,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,     0,     0,    71,    72,    73,
      74,    75,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,    78,   268,    80,    81,    82,    83,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,    46,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -205,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,   144,    54,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
     295,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     1,     0,   193,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    76,    54,    38,    23,    34,   125,   121,    87,   217,
     107,   157,    81,    64,   160,   175,     8,     9,    29,    11,
      13,    50,    57,    64,    24,    25,    95,    27,    28,    29,
      68,    69,    70,   168,    45,   110,    95,    78,   113,    50,
      64,    60,    79,    74,    29,    76,    57,    76,    72,    87,
     171,     8,     9,    79,   168,   110,    93,   132,   113,    73,
      45,    76,    74,    94,    76,    79,    78,    81,   103,   148,
     149,   150,    57,   125,     3,     4,     5,    35,   107,   131,
      81,   110,    77,   121,   113,    86,    87,    74,   117,    76,
     119,   166,   252,   145,    73,   110,    88,    89,   113,    92,
      79,    75,   117,   200,   119,    79,   106,   315,    78,    79,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   288,   250,
     168,    88,    89,   212,    73,    73,   271,   258,    73,    81,
      79,    79,    94,    72,    79,    74,    73,    76,   308,   201,
     185,    74,    79,    76,    10,    78,   208,   271,   318,    25,
     279,    27,    28,   284,   324,    72,   117,    74,   119,   283,
      90,   200,    82,    83,   212,   194,     6,     7,    77,   254,
      77,   256,   257,   155,   156,    80,   158,   159,    91,   310,
     311,   312,    28,    29,    78,    79,    12,    33,    73,    35,
      73,    37,    78,    79,    64,   326,    42,    43,   329,    45,
     331,    47,    48,   153,   154,   267,    64,   252,    64,    55,
      56,    57,    93,    59,    60,    61,    95,   279,    95,   281,
     151,   152,   307,   271,     4,     5,    64,    72,    72,    72,
      72,    93,    79,    93,    95,   283,    73,    78,    73,    94,
      79,    73,    73,    79,    73,    25,    26,    27,    28,    29,
      30,    31,    32,    33,   264,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    75,    52,    79,    58,    55,    56,    57,    58,    59,
      60,    61,    95,    95,    64,    65,    66,    67,    68,     4,
       5,    64,    72,    75,    75,    72,    95,    77,    78,    77,
      80,    81,    82,    83,    84,    85,    75,    95,    95,    34,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    95,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    73,    52,    73,   161,
      55,    56,    57,    58,    59,    60,    61,   162,   164,    64,
      65,    66,    67,    68,     4,     5,   163,    72,    53,   119,
     165,    51,    77,    78,   264,    80,    81,    82,    83,    84,
      85,   275,   126,    58,   185,    25,    29,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    -1,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      60,    61,     4,     5,    64,    65,    66,    67,    68,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    45,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    59,    60,    61,
      -1,    -1,    64,    65,    66,    67,    68,     4,     5,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    26,
      27,     4,     5,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,     4,     5,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    72,    49,     4,     5,    -1,
      77,    -1,    -1,    80,    81,    82,    83,    84,    85,    -1,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    49,    72,
      -1,     4,     5,    -1,    77,    -1,    -1,    80,    81,    82,
      83,    84,    85,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    49,     4,     5,    -1,    77,    -1,    -1,    80,
      81,    82,    83,    84,    85,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    72,    49,     4,     5,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    -1,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    49,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    49,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      25,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    -1,    47,    48,    -1,    50,    -1,    -1,    -1,     0,
      55,    56,    57,    -1,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    -1,    94,    94,
      41,    42,    43,    44,    45,    -1,    47,    48,    -1,    50,
      14,    -1,    -1,    -1,    55,    56,    57,    -1,    59,    60,
      61,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    47,    48,    -1,    50,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    25,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    -1,    -1,    -1,    41,    42,    43,    44,    45,    -1,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    59,    60,    61,    25,    -1,    64,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    -1,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      60,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    28,    29,    33,    35,    36,    37,    41,    42,
      43,    44,    45,    47,    48,    50,    55,    56,    57,    59,
      60,    61,   121,   122,   127,   128,   131,   134,   135,   164,
     165,   166,    64,   169,    81,   124,   125,   126,   136,   138,
     139,   122,   123,   123,   123,   123,     0,   165,    77,   134,
     140,   141,    95,    79,    94,   121,   122,   167,   168,    64,
      72,   137,    35,   132,   134,   138,   126,   136,     4,     5,
      49,    64,    65,    66,    67,    68,    72,    77,    80,    81,
      82,    83,    84,    85,    97,    98,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   148,   121,    77,   156,   136,    72,    74,    78,    79,
      72,   101,   101,    72,   101,   115,   118,   128,   129,   134,
     147,    74,    76,   149,   150,   151,   152,   153,     3,     4,
       5,    72,    74,    76,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    94,   117,   101,   103,    81,    86,
      87,    82,    83,     6,     7,     8,     9,    11,    88,    89,
      10,    80,    90,    91,    12,    13,    92,    26,    27,    30,
      31,    32,    38,    39,    40,    46,    52,    58,    64,   118,
     120,   121,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    73,    64,   122,   142,   143,   144,   145,   146,
      50,   141,    64,    78,   133,   147,   147,    73,    79,   129,
     130,   130,    73,   114,   119,    64,    78,    79,   148,    94,
     153,    64,    99,   100,   115,   118,    64,   115,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   106,   106,
     107,   108,   109,   110,   111,   112,   118,    95,   119,    95,
      93,   154,    72,    64,    72,   120,    72,    72,    93,    95,
     159,    78,   136,    73,    79,    79,    73,   141,    81,   115,
     116,    94,    73,    73,   115,    77,   103,    75,    78,   151,
      73,    79,    75,    93,    93,   154,    58,   120,   121,    95,
     118,    95,   118,   118,   154,    14,   144,    64,   115,    75,
      75,   119,   149,   148,   115,   114,   154,    72,    95,   120,
      73,    73,    73,    75,    78,    79,   118,   120,    95,   154,
     154,   154,    78,    73,    95,   120,    34,    95,   120,    73,
     154,    73,   154,   154
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
     165,   166,   167,   167,   168,   168,   169,   169
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
       1,     4,     1,     2,     1,     0,     1,     0
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

#line 1813 "y.tab.c"

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

#line 514 "ass4_21CS10057_21CS30058.y"


void yyerror(const char *s) {
    printf("Error occured : %s\n",s);
}
