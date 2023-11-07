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
#line 10 "ass6_21CS10057_21CS30058.y"

    #include <iostream>
    #include <string.h>
    #include <string>
    #include <stdio.h>
    #include <sstream>
    #include <cstdlib>
    #include "ass6_21CS10057_21CS30058_translator.h"
    using namespace std;

    extern int yylex();                     
    extern char* yytext;                    
    extern int yylineno;                    
    void yyerror(string s);                 

    //to keep track of global data structures shared across all files
    extern int next_instruction;                   
    extern quad_TAC_arr TAC_list;              
    extern symbol_table ST_global;            
    extern symbol_table* ST;                 
    extern vector<string> f_strings;     

    int num_strings = 0;                       

#line 96 "ass6_21CS10057_21CS30058.tab.c"

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

#include "ass6_21CS10057_21CS30058.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_CASE = 5,                       /* CASE  */
  YYSYMBOL_CHAR_ = 6,                      /* CHAR_  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ENUM = 13,                      /* ENUM  */
  YYSYMBOL_EXTERN = 14,                    /* EXTERN  */
  YYSYMBOL_FLOAT_ = 15,                    /* FLOAT_  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_GOTO_ = 17,                     /* GOTO_  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_INLINE = 19,                    /* INLINE  */
  YYSYMBOL_INT_ = 20,                      /* INT_  */
  YYSYMBOL_LONG = 21,                      /* LONG  */
  YYSYMBOL_REGISTER = 22,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 23,                  /* RESTRICT  */
  YYSYMBOL_RETURN_ = 24,                   /* RETURN_  */
  YYSYMBOL_SHORT = 25,                     /* SHORT  */
  YYSYMBOL_SIGNED = 26,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 27,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 28,                    /* STATIC  */
  YYSYMBOL_STRUCT = 29,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 30,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 31,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 32,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 33,                  /* UNSIGNED  */
  YYSYMBOL_VOID_ = 34,                     /* VOID_  */
  YYSYMBOL_VOLATILE = 35,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_BOOL_ = 37,                     /* BOOL_  */
  YYSYMBOL_COMPLEX = 38,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 39,                 /* IMAGINARY  */
  YYSYMBOL_LEFT_SQUARE = 40,               /* LEFT_SQUARE  */
  YYSYMBOL_RIGHT_SQUARE = 41,              /* RIGHT_SQUARE  */
  YYSYMBOL_LEFT_PARENTHESIS = 42,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 43,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_LEFT_CURLY = 44,                /* LEFT_CURLY  */
  YYSYMBOL_RIGHT_CURLY = 45,               /* RIGHT_CURLY  */
  YYSYMBOL_DOT = 46,                       /* DOT  */
  YYSYMBOL_ARROW = 47,                     /* ARROW  */
  YYSYMBOL_SELF_INCREASE = 48,             /* SELF_INCREASE  */
  YYSYMBOL_SELF_DECREASE = 49,             /* SELF_DECREASE  */
  YYSYMBOL_BITWISE_AND = 50,               /* BITWISE_AND  */
  YYSYMBOL_MUL = 51,                       /* MUL  */
  YYSYMBOL_PLUS = 52,                      /* PLUS  */
  YYSYMBOL_SUBTRACT = 53,                  /* SUBTRACT  */
  YYSYMBOL_BITWISE_NOR = 54,               /* BITWISE_NOR  */
  YYSYMBOL_EXCLAMATION = 55,               /* EXCLAMATION  */
  YYSYMBOL_F_SLASH = 56,                   /* F_SLASH  */
  YYSYMBOL_MODULO = 57,                    /* MODULO  */
  YYSYMBOL_LEFT_SHIFT = 58,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 59,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 60,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 61,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 62,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 63,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 64,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 65,                 /* NOT_EQUAL  */
  YYSYMBOL_BITWISE_XOR = 66,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 67,                /* BITWISE_OR  */
  YYSYMBOL_LOGICAL_AND = 68,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 69,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 70,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 71,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 72,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 73,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGN_ = 74,                   /* ASSIGN_  */
  YYSYMBOL_MUL_ASSIGN = 75,                /* MUL_ASSIGN  */
  YYSYMBOL_F_SLASH_ASSIGN = 76,            /* F_SLASH_ASSIGN  */
  YYSYMBOL_MODULO_ASSIGN = 77,             /* MODULO_ASSIGN  */
  YYSYMBOL_PLUSASSIGN = 78,                /* PLUSASSIGN  */
  YYSYMBOL_SUBTRACT_ASSIGN = 79,           /* SUBTRACT_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 80,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 81,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_BITWISE_AND_ASSIGN = 82,        /* BITWISE_AND_ASSIGN  */
  YYSYMBOL_BITWISE_XOR_ASSIGN = 83,        /* BITWISE_XOR_ASSIGN  */
  YYSYMBOL_BITWISE_OR_ASSIGN = 84,         /* BITWISE_OR_ASSIGN  */
  YYSYMBOL_COMMA = 85,                     /* COMMA  */
  YYSYMBOL_HASH = 86,                      /* HASH  */
  YYSYMBOL_IDENTIFIER = 87,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 88,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 89,         /* FLOATING_CONSTANT  */
  YYSYMBOL_CHAR_CONSTANT = 90,             /* CHAR_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 91,            /* STRING_LITERAL  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_primary_expression = 93,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 94,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 95,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 96,          /* unary_expression  */
  YYSYMBOL_unary_operator = 97,            /* unary_operator  */
  YYSYMBOL_cast_expression = 98,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 99, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 100,      /* additive_expression  */
  YYSYMBOL_shift_expression = 101,         /* shift_expression  */
  YYSYMBOL_relational_expression = 102,    /* relational_expression  */
  YYSYMBOL_equality_expression = 103,      /* equality_expression  */
  YYSYMBOL_and_expression = 104,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 105,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 106,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 107,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 108,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 109,   /* conditional_expression  */
  YYSYMBOL_M = 110,                        /* M  */
  YYSYMBOL_N = 111,                        /* N  */
  YYSYMBOL_assignment_expression = 112,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 113,      /* assignment_operator  */
  YYSYMBOL_expression = 114,               /* expression  */
  YYSYMBOL_constant_expression = 115,      /* constant_expression  */
  YYSYMBOL_declaration = 116,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 117,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 118,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 119,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 120,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 121,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 122, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 123, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 124,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 125,          /* enumerator_list  */
  YYSYMBOL_enumerator = 126,               /* enumerator  */
  YYSYMBOL_type_qualifier = 127,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 128,       /* function_specifier  */
  YYSYMBOL_declarator = 129,               /* declarator  */
  YYSYMBOL_direct_declarator = 130,        /* direct_declarator  */
  YYSYMBOL_parameter_type_list_opt = 131,  /* parameter_type_list_opt  */
  YYSYMBOL_type_qualifier_list_opt = 132,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 133,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 134,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 135,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 136,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 137,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 138,          /* identifier_list  */
  YYSYMBOL_type_name = 139,                /* type_name  */
  YYSYMBOL_initializer = 140,              /* initializer  */
  YYSYMBOL_initializer_list = 141,         /* initializer_list  */
  YYSYMBOL_designation_opt = 142,          /* designation_opt  */
  YYSYMBOL_designation = 143,              /* designation  */
  YYSYMBOL_designator_list = 144,          /* designator_list  */
  YYSYMBOL_designator = 145,               /* designator  */
  YYSYMBOL_statement = 146,                /* statement  */
  YYSYMBOL_labeled_statement = 147,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 148,       /* compound_statement  */
  YYSYMBOL_block_item_list = 149,          /* block_item_list  */
  YYSYMBOL_block_item = 150,               /* block_item  */
  YYSYMBOL_expression_statement = 151,     /* expression_statement  */
  YYSYMBOL_selection_statement = 152,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 153,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 154,           /* jump_statement  */
  YYSYMBOL_translation_unit = 155,         /* translation_unit  */
  YYSYMBOL_external_declaration = 156,     /* external_declaration  */
  YYSYMBOL_function_definition = 157,      /* function_definition  */
  YYSYMBOL_function_prototype = 158,       /* function_prototype  */
  YYSYMBOL_declaration_list = 159          /* declaration_list  */
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   220,   220,   226,   234,   242,   250,   256,   262,   265,
     282,   289,   311,   314,   317,   342,   361,   364,   370,   377,
     388,   391,   408,   424,   468,   471,   477,   480,   483,   486,
     489,   492,   498,   501,   515,   534,   564,   592,   625,   628,
     657,   688,   691,   716,   750,   753,   794,   831,   869,   909,
     913,   950,   995,   998,  1026,  1029,  1057,  1061,  1089,  1092,
    1110,  1113,  1127,  1130,  1174,  1183,  1194,  1197,  1213,  1216,
    1219,  1222,  1225,  1228,  1231,  1234,  1237,  1240,  1243,  1249,
    1252,  1258,  1267,  1344,  1350,  1353,  1356,  1359,  1362,  1365,
    1368,  1371,  1377,  1381,  1388,  1392,  1399,  1402,  1405,  1408,
    1414,  1417,  1420,  1423,  1426,  1429,  1432,  1435,  1438,  1441,
    1444,  1447,  1450,  1456,  1459,  1465,  1468,  1474,  1477,  1480,
    1483,  1489,  1492,  1498,  1501,  1507,  1510,  1513,  1519,  1525,
    1529,  1536,  1540,  1543,  1549,  1556,  1559,  1562,  1567,  1592,
    1598,  1601,  1607,  1610,  1616,  1619,  1622,  1625,  1631,  1634,
    1640,  1641,  1645,  1649,  1656,  1670,  1676,  1679,  1685,  1691,
    1694,  1697,  1703,  1706,  1712,  1715,  1721,  1727,  1730,  1736,
    1739,  1745,  1748,  1749,  1750,  1751,  1752,  1756,  1759,  1762,
    1768,  1771,  1777,  1781,  1793,  1796,  1800,  1803,  1830,  1843,
    1858,  1866,  1878,  1887,  1902,  1905,  1908,  1911,  1917,  1926,
    1929,  1935,  1938,  1944,  1947,  1955,  1978,  1981
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
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "BREAK",
  "CASE", "CHAR_", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "ENUM", "EXTERN", "FLOAT_", "FOR", "GOTO_", "IF", "INLINE", "INT_",
  "LONG", "REGISTER", "RESTRICT", "RETURN_", "SHORT", "SIGNED", "SIZEOF",
  "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID_",
  "VOLATILE", "WHILE", "BOOL_", "COMPLEX", "IMAGINARY", "LEFT_SQUARE",
  "RIGHT_SQUARE", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "LEFT_CURLY",
  "RIGHT_CURLY", "DOT", "ARROW", "SELF_INCREASE", "SELF_DECREASE",
  "BITWISE_AND", "MUL", "PLUS", "SUBTRACT", "BITWISE_NOR", "EXCLAMATION",
  "F_SLASH", "MODULO", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL",
  "NOT_EQUAL", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR",
  "QUESTION_MARK", "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGN_",
  "MUL_ASSIGN", "F_SLASH_ASSIGN", "MODULO_ASSIGN", "PLUSASSIGN",
  "SUBTRACT_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN",
  "BITWISE_AND_ASSIGN", "BITWISE_XOR_ASSIGN", "BITWISE_OR_ASSIGN", "COMMA",
  "HASH", "IDENTIFIER", "INTEGER_CONSTANT", "FLOATING_CONSTANT",
  "CHAR_CONSTANT", "STRING_LITERAL", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression", "M", "N",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "enumerator_list",
  "enumerator", "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "parameter_type_list_opt",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "function_prototype", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-270)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-206)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1096,  -270,  -270,  -270,  -270,   -16,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,   -18,  1096,  1096,  -270,  1096,  1096,  1059,
    -270,  -270,    16,    11,    69,   -15,    35,  -270,  -270,   -24,
    -270,   660,    78,   -20,  -270,  -270,  -270,  -270,  -270,  -270,
     283,  -270,    47,    -1,  -270,    11,   105,  -270,  -270,    35,
    -270,   -15,   704,  -270,   -18,  1019,   182,   623,    78,    92,
     872,    94,   113,  -270,   146,   103,   150,   718,   916,   152,
    -270,   534,  -270,   930,   930,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   133,  -270,  -270,  -270,  -270,  -270,   200,   265,
     872,  -270,    66,    27,    97,   176,    95,   157,   154,   155,
     158,    98,  -270,  -270,    21,  -270,  -270,  -270,  -270,   198,
    -270,  -270,  -270,  -270,  -270,   872,  -270,    11,    20,  -270,
    -270,  -270,  -270,   170,    36,  -270,  -270,  -270,  -270,  -270,
      39,   762,   188,  -270,   -15,   207,  -270,   166,  -270,    -2,
    -270,  -270,  -270,   181,  -270,   448,   448,   791,   183,   872,
    -270,    68,   534,  -270,   872,   212,     4,  1130,  -270,  1130,
     219,   534,  -270,  -270,   448,   872,   841,   178,   184,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   872,  -270,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
    -270,  -270,   203,  -270,   872,  -270,   372,  -270,  -270,  -270,
       8,   872,   187,    23,   704,  -270,   -17,  -270,   179,  -270,
     236,   237,   872,  -270,  -270,   702,  -270,   194,   448,  -270,
    -270,  -270,  -270,   197,  -270,   241,     6,   872,  -270,  -270,
    -270,  -270,   858,   252,  -270,   -22,  -270,     9,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,    66,    66,    27,    27,    97,
      97,    97,    97,   176,   176,    95,   157,   154,   872,   872,
    -270,  -270,  -270,  -270,   271,  -270,  -270,   117,  -270,  -270,
    -270,   273,  -270,  -270,   274,  -270,  -270,  -270,  -270,   287,
     791,   281,   282,   448,   197,    36,  -270,   282,  -270,  -270,
     872,   155,   158,   872,  -270,  -270,   704,  -270,  -270,   288,
    -270,  -270,  -270,   286,    30,  -270,   197,  -270,   872,  -270,
     448,  -270,  -270,   173,   279,   197,   872,  -270,   448,  -270,
    -270,   308,   197,   340,  -270,   872,   284,   310,  -270,  -270,
    -270,  -270,   448,   448,  -270,  -270,  -270
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   101,   125,   106,     0,    96,   105,   128,   103,
     104,    99,   126,   102,   107,    97,   108,   100,   127,   109,
     110,   111,   202,     0,    85,    87,   112,    89,    91,     0,
     199,   201,     0,     0,   120,     0,   145,    83,   131,     0,
      92,    94,   130,     0,    84,    86,    88,    90,     1,   200,
       0,   204,   123,     0,   121,     0,     0,   148,   147,   144,
      82,     0,     0,   206,     0,     0,   143,   141,   129,     0,
       0,     0,     0,    64,     0,     0,     0,     0,     0,     0,
      64,     0,   180,     0,     0,    26,    27,    28,    29,    30,
      31,   187,     2,     3,     4,     5,     6,     8,    20,    32,
       0,    34,    38,    41,    44,    49,    52,    54,    56,    58,
      60,    62,    66,    79,     0,   184,   185,   171,   172,    64,
     182,   173,   174,   175,   176,     0,   117,     0,     0,   132,
     149,   146,    93,    94,   165,     2,   159,    95,   207,   203,
       0,     0,   142,   156,   155,     0,   140,   150,   152,     0,
     196,    32,    81,     0,   195,     0,     0,     0,     0,     0,
     197,     0,     0,    24,     0,     0,     0,   116,   158,   116,
       0,     0,    21,    22,     0,     0,     0,     0,     0,    14,
      15,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    64,     0,   186,     0,   181,     0,   124,   122,   118,
       0,     0,     0,     0,     0,   164,     0,   167,     0,   133,
      27,     0,     0,   154,   138,     0,   139,     0,     0,   179,
      64,    64,   194,    65,   198,     0,     0,     0,     7,   115,
     113,   114,     0,     0,   177,     0,    10,     0,    18,    12,
      13,    67,    35,    36,    37,    39,    40,    42,    43,    45,
      46,    47,    48,    50,    51,    53,    55,    57,     0,     0,
      64,    80,   183,   119,     0,   170,   160,   165,   162,   166,
     168,     0,   137,   134,     0,   151,   153,   157,   178,     0,
       0,     0,    25,     0,    65,   165,    33,     0,     9,    11,
       0,    59,    61,     0,   169,   161,     0,   135,   136,     0,
      65,    64,   190,     0,     0,    19,    65,   163,     0,    64,
       0,    64,    16,   165,     0,    65,     0,    65,     0,    17,
      64,     0,    65,   188,   191,     0,     0,     0,    64,    63,
     192,    64,     0,     0,    65,   193,   189
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,  -270,  -270,   -70,  -270,   -94,   -27,    25,    56,
     -26,   147,   149,   151,    80,    82,  -270,   -69,   -68,  -139,
     -31,  -270,   -72,  -110,   -25,    10,  -270,   298,  -270,   -55,
     -23,   193,  -270,   309,  -123,     7,  -270,    -3,   320,  -270,
    -270,    60,   -59,  -270,  -270,   130,  -270,  -112,  -207,    61,
    -269,  -270,  -270,   141,  -153,  -270,    13,  -270,   153,  -146,
    -270,  -270,  -270,  -270,   339,  -270,  -270,  -270
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    97,    98,   257,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   156,   212,
     113,   192,   114,   153,    22,    64,    39,    40,    24,    25,
     168,   250,    26,    53,    54,    27,    28,   133,    42,   145,
     141,    43,    59,   146,   147,   148,   149,   170,   137,   223,
     224,   225,   226,   227,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    29,    30,    31,    32,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     151,   152,   239,   240,   218,   161,   193,   142,   163,   166,
      23,   241,   165,   172,   173,   217,    63,   288,   316,   308,
      41,   254,    35,   221,    35,   115,   167,    35,    33,   222,
     151,   136,    56,    36,    44,    45,    36,    46,    47,    23,
     138,   236,     3,    57,   126,    51,     3,   248,    60,   303,
     245,   216,   309,   283,    37,   151,   152,   289,    12,   253,
      50,    61,    12,   214,   316,   219,   130,    38,   286,    38,
      18,    34,    38,    57,    18,   332,   221,   144,   139,   197,
     198,   228,   222,   237,   127,   298,    36,   243,   169,   214,
     166,   214,   246,   213,   310,    52,    58,   218,    52,   166,
     262,   263,   264,   255,   301,   220,   214,   167,   287,   327,
     231,   284,   167,    55,   167,   333,   167,   194,    66,   131,
      67,   125,   195,   196,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     244,   233,   278,   279,   249,   258,   249,    57,   129,   130,
     322,   151,   152,   214,   320,   199,   200,   221,   306,   205,
     206,   261,   315,   222,   150,   323,   154,   211,   -65,   169,
     265,   266,   299,   300,   169,   304,   169,   337,   169,   273,
     274,   329,   151,   281,   155,   344,     3,   334,   157,     3,
     158,   115,   159,   136,   164,     3,   341,   291,   343,   354,
     355,   294,    12,   347,   174,    12,    78,   207,   151,   151,
     140,    12,   313,   221,    18,   356,   232,    18,   339,   222,
     208,    81,   209,    18,   267,   268,   210,    83,    84,    85,
      86,    87,    88,    89,    90,   130,   201,   202,   203,   204,
     175,   326,   176,   215,    62,   144,   177,   178,   179,   180,
     234,   235,   238,   330,   247,   242,   335,   269,   270,   271,
     272,   336,   252,   338,   342,   259,   135,    93,    94,    95,
      96,   260,   345,   280,   285,   151,   349,   292,   293,   325,
     352,   297,   214,   353,   302,   136,     1,    69,    70,     2,
       3,    71,    72,    73,     4,   307,     5,     6,     7,    74,
      75,    76,     8,     9,    10,    11,    12,    77,    13,    14,
      78,    15,   314,    79,   317,   318,    16,    17,    18,    80,
      19,    20,    21,   319,   321,    81,   305,    50,    82,   331,
     328,    83,    84,    85,    86,    87,    88,    89,    90,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     340,   346,   348,   351,   275,    91,   350,   276,   311,   132,
     277,   312,   251,    68,   128,   296,   324,   290,    49,   282,
      92,    93,    94,    95,    96,     1,    69,    70,     2,     3,
      71,    72,    73,     4,     0,     5,     6,     7,    74,    75,
      76,     8,     9,    10,    11,    12,    77,    13,    14,    78,
      15,     0,    79,     0,     0,    16,    17,    18,    80,    19,
      20,    21,     0,     0,    81,     0,    50,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,    69,    70,     0,     0,    71,    72,    73,    92,
      93,    94,    95,    96,    74,    75,    76,     0,     0,     0,
       0,     0,    77,     0,     0,    78,     0,     0,    79,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
      81,     0,    50,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       2,     3,     0,     0,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     0,     9,    10,     0,    12,     0,    13,
      14,    78,     0,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     0,     0,    81,     0,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,    93,    94,    95,    96,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,     0,  -205,     1,     0,     0,     2,     3,
     143,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,    78,     0,     0,    62,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,    78,    81,     0,   134,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      81,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
     160,   135,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,   229,    81,   135,    93,    94,    95,    96,
      83,    84,    85,   230,    87,    88,    89,    90,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,   135,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,    93,
      94,    95,    96,    81,   256,    78,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,    78,
      81,     0,   305,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    81,     0,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,   135,    93,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,   135,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,    78,   162,   135,
      93,    94,    95,    96,    83,    84,    85,    86,    87,    88,
      89,    90,   171,     0,     0,     0,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,    93,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,    93,    94,
      95,    96,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,    48,
       0,     0,     1,    50,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     2,     3,     0,     0,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     0,
       9,    10,     0,    12,     0,    13,    14,     0,     0,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      70,    70,   155,   156,   127,    77,   100,    66,    78,    81,
       0,   157,    80,    83,    84,   125,    41,   224,   287,    41,
      23,   174,    42,    40,    42,    50,    81,    42,    44,    46,
     100,    62,    35,    51,    24,    25,    51,    27,    28,    29,
      65,    43,     7,    36,    45,    32,     7,    43,    72,    43,
     162,   119,    43,    45,    72,   125,   125,    74,    23,   171,
      44,    85,    23,    85,   333,    45,    59,    87,    45,    87,
      35,    87,    87,    66,    35,    45,    40,    67,    65,    52,
      53,   140,    46,    85,    85,   238,    51,   159,    81,    85,
     162,    85,   164,    72,    85,    87,    36,   220,    87,   171,
     194,   195,   196,   175,   243,    85,    85,   162,    85,   316,
     141,   221,   167,    44,   169,    85,   171,    51,    40,    59,
      42,    74,    56,    57,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
      72,   144,   210,   211,   167,   176,   169,   140,    43,   142,
     303,   221,   221,    85,   300,    58,    59,    40,   252,    64,
      65,   192,    45,    46,    72,   304,    72,    69,    70,   162,
     197,   198,   240,   241,   167,   247,   169,   330,   171,   205,
     206,   320,   252,   214,    71,   338,     7,   326,    42,     7,
      87,   216,    42,   224,    42,     7,   335,   228,   337,   352,
     353,   232,    23,   342,    71,    23,    27,    50,   278,   279,
      28,    23,   280,    40,    35,   354,    28,    35,    45,    46,
      66,    42,    67,    35,   199,   200,    68,    48,    49,    50,
      51,    52,    53,    54,    55,   228,    60,    61,    62,    63,
      40,   313,    42,    45,    74,   235,    46,    47,    48,    49,
      43,    85,    71,   321,    42,    72,   328,   201,   202,   203,
     204,   329,    43,   331,   336,    87,    87,    88,    89,    90,
      91,    87,   340,    70,    87,   345,   345,    41,    41,   310,
     348,    87,    85,   351,    43,   316,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    43,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    41,    30,    41,    41,    33,    34,    35,    36,
      37,    38,    39,    36,    43,    42,    44,    44,    45,    43,
      42,    48,    49,    50,    51,    52,    53,    54,    55,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      71,    43,    12,    43,   207,    72,    72,   208,   278,    61,
     209,   279,   169,    43,    55,   235,   305,   226,    29,   216,
      87,    88,    89,    90,    91,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,    -1,     8,     9,    10,    87,
      88,    89,    90,    91,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    44,     3,    -1,    -1,     6,     7,
      87,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    27,    -1,    -1,    74,    33,    34,    35,    -1,    37,
      38,    39,    -1,    -1,    -1,    27,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      72,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    87,    88,    89,    90,    91,
      48,    49,    50,    51,    52,    53,    54,    55,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    42,    43,    27,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    27,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    42,    87,
      88,    89,    90,    91,    48,    49,    50,    51,    52,    53,
      54,    55,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     0,
      -1,    -1,     3,    44,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   116,   117,   120,   121,   124,   127,   128,   155,
     156,   157,   158,    44,    87,    42,    51,    72,    87,   118,
     119,   129,   130,   133,   117,   117,   117,   117,     0,   156,
      44,   148,    87,   125,   126,    44,   129,   127,   133,   134,
      72,    85,    74,   116,   117,   159,    40,    42,   130,     4,
       5,     8,     9,    10,    16,    17,    18,    24,    27,    30,
      36,    42,    45,    48,    49,    50,    51,    52,    53,    54,
      55,    72,    87,    88,    89,    90,    91,    93,    94,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   112,   114,   116,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    74,    45,    85,   125,    43,
     127,   133,   119,   129,    44,    87,   112,   140,   116,   148,
      28,   132,   134,    87,   117,   131,   135,   136,   137,   138,
      72,    96,   109,   115,    72,    71,   110,    42,    87,    42,
      72,   114,    42,    96,    42,   110,   114,   121,   122,   127,
     139,    42,    96,    96,    71,    40,    42,    46,    47,    48,
      49,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   113,    98,    51,    56,    57,    52,    53,    58,
      59,    60,    61,    62,    63,    64,    65,    50,    66,    67,
      68,    69,   111,    72,    85,    45,   110,   115,   126,    45,
      85,    40,    46,   141,   142,   143,   144,   145,   134,    41,
      51,   112,    28,   129,    43,    85,    43,    85,    71,   146,
     146,   151,    72,   114,    72,   139,   114,    42,    43,   122,
     123,   123,    43,   139,   146,   114,    43,    95,   112,    87,
      87,   112,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   101,   102,   102,   103,   104,   105,   110,   110,
      70,   112,   150,    45,   115,    87,    45,    85,   140,    74,
     145,   112,    41,    41,   112,    73,   137,    87,   146,   110,
     110,   111,    43,    43,   114,    44,    98,    43,    41,    43,
      85,   106,   107,   110,    41,    45,   142,    41,    41,    36,
     151,    43,   146,   111,   141,   112,   114,   140,    42,   111,
     110,    43,    45,    85,   111,   114,   110,   146,   110,    45,
      71,   111,   114,   111,   146,   110,    43,   111,    12,   109,
      72,    43,   110,   110,   146,   146,   111
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    98,    98,    99,    99,    99,    99,   100,   100,
     100,   101,   101,   101,   102,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     131,   131,   132,   132,   133,   133,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   137,   138,   138,   139,   140,
     140,   140,   141,   141,   142,   142,   143,   144,   144,   145,
     145,   146,   146,   146,   146,   146,   146,   147,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   154,   154,   154,   154,   154,   155,
     155,   156,   156,   157,   157,   158,   159,   159
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     4,
       1,     4,     1,     9,     0,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     4,     5,     6,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     3,     4,     5,     6,     6,     5,     4,     4,
       1,     0,     1,     0,     2,     1,     3,     2,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     2,     4,     1,     0,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     3,     1,     1,     2,     1,     8,    12,
       5,     8,    10,    12,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     2,     2,     1,     2
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
#line 220 "ass6_21CS10057_21CS30058.y"
                   {
            (yyval.expr) = new expression();                      // new expression node
            string s = *((yyvsp[0].str));
            ST->search_lexeme(s);                       //store the identifier in symbol table
            (yyval.expr)->location = s;                           // s now points to the pointer to symbol table entry
        }
#line 1689 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_CONSTANT  */
#line 226 "ass6_21CS10057_21CS30058.y"
                           {
            (yyval.expr) = new expression();                  // new expression node
            (yyval.expr)->location = ST->generate_tem_var(INT);             // create a temporary variable to store the value
            add_TAC((yyval.expr)->location, (yyvsp[0].intval), ASSIGN);          //create a TAC quad to assign the value of constant to temporary variable
            ST_entry_value* val = new ST_entry_value();
            val->initialize((yyvsp[0].intval));                        // intialise 
            ST->search_lexeme((yyval.expr)->location)->initial_value = val;     // update the intial value of temporary variable
        }
#line 1702 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 4: /* primary_expression: FLOATING_CONSTANT  */
#line 234 "ass6_21CS10057_21CS30058.y"
                            {
            (yyval.expr) = new expression();                  // new expression node
            (yyval.expr)->location = ST->generate_tem_var(FLOAT);           //create a temporary variable to store the value
            add_TAC((yyval.expr)->location, (yyvsp[0].floatval), ASSIGN);          //create a TAC quad to assign the value of constant to temporary variable
            ST_entry_value* val = new ST_entry_value();
            val->initialize((yyvsp[0].floatval));                    // // intialise 
            ST->search_lexeme((yyval.expr)->location)->initial_value = val;      // update the intial value of temporary variable
        }
#line 1715 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 5: /* primary_expression: CHAR_CONSTANT  */
#line 242 "ass6_21CS10057_21CS30058.y"
                        {
            (yyval.expr) = new expression();                  // new expression node
            (yyval.expr)->location = ST->generate_tem_var(CHAR);            //create a temporary variable to store the value
            add_TAC((yyval.expr)->location, (yyvsp[0].charval), ASSIGN);  //create a TAC quad to assign the value of constant to temporary variable
            ST_entry_value* val = new ST_entry_value();
            val->initialize((yyvsp[0].charval));                    // intialise 
            ST->search_lexeme((yyval.expr)->location)->initial_value = val;      // update the intial value of temporary variable
        }
#line 1728 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 6: /* primary_expression: STRING_LITERAL  */
#line 250 "ass6_21CS10057_21CS30058.y"
                         {
            (yyval.expr) = new expression();                          // new expression node
            (yyval.expr)->location = ".LC" + to_string(num_strings++);//create a new string label with prefix LC that indicates string parameters in .s files
            f_strings.push_back(*((yyvsp[0].str)));          // update the number of strings, that will be used in naming label 
                                                        //add the string to set of string constants
        }
#line 1739 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 7: /* primary_expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 256 "ass6_21CS10057_21CS30058.y"
                                                        {
            (yyval.expr) = (yyvsp[-1].expr);                                // copy content from right to left
        }
#line 1747 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 262 "ass6_21CS10057_21CS30058.y"
                           {

        }
#line 1755 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_SQUARE expression RIGHT_SQUARE  */
#line 265 "ass6_21CS10057_21CS30058.y"
                                                                 {
            //to compute address of array
            ST_entry_type to = ST->search_lexeme((yyvsp[-3].expr)->location)->type;      // extract the type of variable
            string f = "";
            if(!((yyvsp[-3].expr)->order_dim)) {
                f = ST->generate_tem_var(INT);                       // Generate a new temporary variable
                add_TAC(f, 0, ASSIGN);
                (yyvsp[-3].expr)->store_addr = new string(f);
            }
            string temp = ST->generate_tem_var(INT);

            
            add_TAC(temp, (yyvsp[-1].expr)->location, "", ASSIGN);                //t = E.addr
            add_TAC(temp, temp, "4", MULT);                         //t = t * 4
            add_TAC(f, temp, "", ASSIGN);                           //f = t
            (yyval.expr) = (yyvsp[-3].expr);
        }
#line 1777 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS  */
#line 282 "ass6_21CS10057_21CS30058.y"
                                                                {  
             
            //function call with the function name no parameter
            symbol_table* function_ST = ST_global.search_lexeme((yyvsp[-2].expr)->location)->nested_symbol_table;
            add_TAC((yyvsp[-2].expr)->location, "0", "", CALL);   //call func_name, 0
        
        }
#line 1789 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS  */
#line 289 "ass6_21CS10057_21CS30058.y"
                                                                                         {   

            //function call with the function name and parameter list
            symbol_table* function_ST = ST_global.search_lexeme((yyvsp[-3].expr)->location)->nested_symbol_table;
            vector<param*> params = *((yyvsp[-1].parameterList));                                      // Get the list of parameters
            vector<ST_entry*> paramsList = function_ST->list_ST_entry;

            for(int i = 0; i < (int)params.size(); i++) {
                add_TAC(params[i]->name, "", "", PARAM);                        //create a tac for each of the parameter
            }

            data_dtype return_type = function_ST->search_lexeme("RETVAL")->type.type;  // extract the return type of the function
            if(return_type == VOID)                                                     // If the function returns void
                add_TAC((yyvsp[-3].expr)->location, (int)params.size(), CALL);                //tac would be like call func_name, param_num

            else {                                                                  // If the function returns a value
                string return_value = ST->generate_tem_var(return_type);                      //generate a temporary variable to store return value
                add_TAC((yyvsp[-3].expr)->location, to_string(params.size()), return_value, CALL);  //t = call func_name, paaram_num
                (yyval.expr) = new expression();
                (yyval.expr)->location = return_value;                                              
            }
        }
#line 1816 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 311 "ass6_21CS10057_21CS30058.y"
                                            {

        }
#line 1824 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 314 "ass6_21CS10057_21CS30058.y"
                                              {
            
        }
#line 1832 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression SELF_INCREASE  */
#line 317 "ass6_21CS10057_21CS30058.y"
                                           {   
            //for a++: t = a, a = t + 1
            (yyval.expr) = new expression();                                                          // new expression node
            ST_entry_type t = ST->search_lexeme((yyvsp[-1].expr)->location)->type;                       // generate a temporary vraiable of the same type as of the varible
            
            if(t.type == ARRAY) 
            {   //if the type of variable is array
                //ARR_R is like a = b[i]
                //ARR_L is like a[i] = b            

                (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[-1].expr)->location)->type.next_elem_type);
                add_TAC((yyval.expr)->location, (yyvsp[-1].expr)->location, *((yyvsp[-1].expr)->store_addr), ARR_R); //assign the old value of $$
                string temp = ST->generate_tem_var(t.next_elem_type);
                add_TAC(temp, (yyvsp[-1].expr)->location, *((yyvsp[-1].expr)->store_addr), ARR_R);  //t = a[i]
                add_TAC(temp, temp, "1", ADD);                      //t = t+1;
                add_TAC((yyvsp[-1].expr)->location, temp, *((yyvsp[-1].expr)->store_addr), ARR_L);  //a[i] = t
            }
            else {
                (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[-1].expr)->location)->type.type);
                
                //t = a++ i.e. t=a and a=a+1
                add_TAC((yyval.expr)->location, (yyvsp[-1].expr)->location, "", ASSIGN);                         // return the old value 
                add_TAC((yyvsp[-1].expr)->location, (yyvsp[-1].expr)->location, "1", ADD);                           // then update the value by 1
            }
        }
#line 1862 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression SELF_DECREASE  */
#line 342 "ass6_21CS10057_21CS30058.y"
                                           {
            //follow similar to self increment
            (yyval.expr) = new expression();                                          // new expression node
            (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[-1].expr)->location)->type.type);          // Generate a new temporary variable
            ST_entry_type t = ST->search_lexeme((yyvsp[-1].expr)->location)->type;
            if(t.type == ARRAY) {
                (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[-1].expr)->location)->type.next_elem_type);
                string temp = ST->generate_tem_var(t.next_elem_type);
                add_TAC(temp, (yyvsp[-1].expr)->location, *((yyvsp[-1].expr)->store_addr), ARR_R);
                add_TAC((yyval.expr)->location, temp, "", ASSIGN);
                add_TAC(temp, temp, "1", SUB);
                add_TAC((yyvsp[-1].expr)->location, temp, *((yyvsp[-1].expr)->store_addr), ARR_L);
            }
            else {
                (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[-1].expr)->location)->type.type);
                add_TAC((yyval.expr)->location, (yyvsp[-1].expr)->location, "", ASSIGN);                         // return the old value
                add_TAC((yyvsp[-1].expr)->location, (yyvsp[-1].expr)->location, "1", SUB);                           // the update the value by decreasing by 1
            }
        }
#line 1886 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 16: /* postfix_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS LEFT_CURLY initializer_list RIGHT_CURLY  */
#line 361 "ass6_21CS10057_21CS30058.y"
                                                                                               {

        }
#line 1894 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 17: /* postfix_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS LEFT_CURLY initializer_list COMMA RIGHT_CURLY  */
#line 364 "ass6_21CS10057_21CS30058.y"
                                                                                                     {

        }
#line 1902 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 18: /* argument_expression_list: assignment_expression  */
#line 370 "ass6_21CS10057_21CS30058.y"
                              {
            param* first = new param();                     // Create a new parameter
            first->name = (yyvsp[0].expr)->location;                     //param would point to the symbol tabel entry of the parameter
            first->type = ST->search_lexeme((yyvsp[0].expr)->location)->type;//set the type of parameter
            (yyval.parameterList) = new vector<param*>;
            (yyval.parameterList)->push_back(first);                       // Add the parameter to the list to keep track of all parameters
        }
#line 1914 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 19: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 377 "ass6_21CS10057_21CS30058.y"
                                                               {
            //if there are more than first_operand parameters
            param* next = new param();                  // Create a new parameter
            next->name = (yyvsp[0].expr)->location;                  //set type and name of parameter
            next->type = ST->search_lexeme(next->name)->type;
            (yyval.parameterList) = (yyvsp[-2].parameterList);
            (yyval.parameterList)->push_back(next);                        // Add the parameter to the list created in the above production. this list would contain all parameters name relevant to a function
        }
#line 1927 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 20: /* unary_expression: postfix_expression  */
#line 388 "ass6_21CS10057_21CS30058.y"
                           {

        }
#line 1935 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 21: /* unary_expression: SELF_INCREASE unary_expression  */
#line 391 "ass6_21CS10057_21CS30058.y"
                                         {
            (yyval.expr) = new expression();
            ST_entry_type type = ST->search_lexeme((yyvsp[0].expr)->location)->type;
            if(type.type == ARRAY) {
                string t = ST->generate_tem_var(type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R); //t = a[i]
                add_TAC(t, t, "1", ADD);                        //t = t+1
                add_TAC((yyvsp[0].expr)->location, t, *((yyvsp[0].expr)->store_addr), ARR_L); //a[i] = t
                (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[0].expr)->location)->type.next_elem_type);
            }
            else {
                add_TAC((yyvsp[0].expr)->location, (yyvsp[0].expr)->location, "1", ADD);                       // Increment the value
                (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[0].expr)->location)->type.type);
            }
            (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[0].expr)->location)->type.type);
            add_TAC((yyval.expr)->location, (yyvsp[0].expr)->location, "", ASSIGN);                         // Assign the updated value to $$
        }
#line 1957 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 22: /* unary_expression: SELF_DECREASE unary_expression  */
#line 408 "ass6_21CS10057_21CS30058.y"
                                         {
            (yyval.expr) = new expression();
            ST_entry_type type = ST->search_lexeme((yyvsp[0].expr)->location)->type;
            if(type.type == ARRAY) {
                string t = ST->generate_tem_var(type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                add_TAC(t, t, "1", SUB);
                add_TAC((yyvsp[0].expr)->location, t, *((yyvsp[0].expr)->store_addr), ARR_L);
                (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[0].expr)->location)->type.next_elem_type);
            }
            else {
                add_TAC((yyvsp[0].expr)->location, (yyvsp[0].expr)->location, "1", SUB);                       // Decrement the value
                (yyval.expr)->location = ST->generate_tem_var(ST->search_lexeme((yyvsp[0].expr)->location)->type.type);
            }
            add_TAC((yyval.expr)->location, (yyvsp[0].expr)->location, "", ASSIGN);                         // Assign the updated value to $$
        }
#line 1978 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 23: /* unary_expression: unary_operator cast_expression  */
#line 424 "ass6_21CS10057_21CS30058.y"
                                         {
            // handle different unary operator using switch
            
            switch((yyvsp[-1].charval)) {
                case '&':       // Address of variable i.e &n
                    (yyval.expr) = new expression();
                    (yyval.expr)->location = ST->generate_tem_var(POINTER);                 // Generate temporary of the same data type i.e. pointer
                    add_TAC((yyval.expr)->location, (yyvsp[0].expr)->location, "", REFERENCE);          // this would be a reference operator a = &n 
                    break;
                case '*':   // De-referencing
                    (yyval.expr) = new expression();
                    (yyval.expr)->location = ST->generate_tem_var(INT);                       // Generate temporary of the same data type
                    (yyval.expr)->order_dim = 1;                                                   //order_dim keeps a track of dimension
                    (yyval.expr)->store_addr = new string((yyvsp[0].expr)->location);                          //store_addr keeps a track of expression address whose address is provided
                    add_TAC((yyval.expr)->location, (yyvsp[0].expr)->location, "", DEREFERENCE);           // generate TAC quad a = *n
                    break;
                case '-':   // Unary minus
                    (yyval.expr) = new expression();
                    (yyval.expr)->location = ST->generate_tem_var();                        // Generate temporary of the same data type
                    add_TAC((yyval.expr)->location, (yyvsp[0].expr)->location, "", U_MINUS);            // generate TAC quad
                    //$$ = -$2
                    break;
                case '!':   // Logical not 
                    (yyval.expr) = new expression();
                    (yyval.expr)->location = ST->generate_tem_var(INT);                     // Generate temporary of the same data type
                    int temp = next_instruction + 2;
                    add_TAC(to_string(temp), (yyvsp[0].expr)->location, "0", GOTO_EQ);   
                    temp = next_instruction + 3;                            
                    add_TAC(to_string(temp), "", "", GOTO);                 
                    add_TAC((yyval.expr)->location, "1", "", ASSIGN);                 
                    temp = next_instruction + 2;
                    add_TAC(to_string(temp), "", "", GOTO);
                    add_TAC((yyval.expr)->location, "0", "", ASSIGN);
                    break;
            }
            /*
                in: if $2==0 goto in+2
                in+1: goto in+3
                in+2: $$ = 1
                in+3: goto in+4
                in+4: $$ = 0
            */

        }
#line 2027 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 24: /* unary_expression: SIZEOF unary_expression  */
#line 468 "ass6_21CS10057_21CS30058.y"
                                  {

        }
#line 2035 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS  */
#line 471 "ass6_21CS10057_21CS30058.y"
                                                              {

        }
#line 2043 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 26: /* unary_operator: BITWISE_AND  */
#line 477 "ass6_21CS10057_21CS30058.y"
                    {
            (yyval.charval) = '&';
        }
#line 2051 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 27: /* unary_operator: MUL  */
#line 480 "ass6_21CS10057_21CS30058.y"
              {
            (yyval.charval) = '*';
        }
#line 2059 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 28: /* unary_operator: PLUS  */
#line 483 "ass6_21CS10057_21CS30058.y"
               {
            (yyval.charval) = '+';
        }
#line 2067 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 29: /* unary_operator: SUBTRACT  */
#line 486 "ass6_21CS10057_21CS30058.y"
                   {
            (yyval.charval) = '-';
        }
#line 2075 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 30: /* unary_operator: BITWISE_NOR  */
#line 489 "ass6_21CS10057_21CS30058.y"
                      {
            (yyval.charval) = '~';
        }
#line 2083 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 31: /* unary_operator: EXCLAMATION  */
#line 492 "ass6_21CS10057_21CS30058.y"
                      {
            (yyval.charval) = '!';
        }
#line 2091 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 32: /* cast_expression: unary_expression  */
#line 498 "ass6_21CS10057_21CS30058.y"
                         {

        }
#line 2099 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 33: /* cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression  */
#line 501 "ass6_21CS10057_21CS30058.y"
                                                                       {

        }
#line 2107 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 34: /* multiplicative_expression: cast_expression  */
#line 515 "ass6_21CS10057_21CS30058.y"
                        {
            (yyval.expr) = new expression();                                  // Generate new expression
            ST_entry_type tp = ST->search_lexeme((yyvsp[0].expr)->location)->type;
            if(tp.type == ARRAY) {                                      // If the type is an array
                
                // Generate new temporary variable to store the value of array at the index
                string t = ST->generate_tem_var(tp.next_elem_type);                // Generate a temporary
                if((yyvsp[0].expr)->store_addr != NULL) {
                    add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);   
                    (yyvsp[0].expr)->location = t;                                 
                    (yyvsp[0].expr)->type = tp.next_elem_type; 
                    (yyval.expr) = (yyvsp[0].expr);
                }
                else
                    (yyval.expr) = (yyvsp[0].expr);        // copy content from right to left
            }
            else
                (yyval.expr) = (yyvsp[0].expr);            // copy content from right to left
        }
#line 2131 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression MUL cast_expression  */
#line 534 "ass6_21CS10057_21CS30058.y"
                                                        {   
            // Indicates multiplication
            // Arithmetic operation requires both the operands to be of compatible type 
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                      // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                     // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                                        // If the second operand is an array, perform necessary operations 
            
            //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations

                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;            //next_elem_type keeps the type of elements pointer by pointer or array
            }

            // data type of result of the multiplication will depend upon relative precedance of data type of both operands 
            //assign data type after appropriate typecasting
            data_dtype final = ((first_operand->type.type > second_operand->type.type) ? (first_operand->type.type) : (second_operand->type.type));
            (yyval.expr)->location = ST->generate_tem_var(final);                       // Store the final result in a temporary
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, MULT);
        }
#line 2166 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression F_SLASH cast_expression  */
#line 564 "ass6_21CS10057_21CS30058.y"
                                                            {
            // Indicates division
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations

                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }

            //assign data type after appropriate typecasting
            data_dtype final = ((first_operand->type.type > second_operand->type.type) ? (first_operand->type.type) : (second_operand->type.type));
            (yyval.expr)->location = ST->generate_tem_var(final);                       // Store the final result in a temporary
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, DIV);
        }
#line 2199 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 592 "ass6_21CS10057_21CS30058.y"
                                                           {
            // Indicates modulo
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }

            // Assign the data type after suitable typecasting
            data_dtype final = ((first_operand->type.type > second_operand->type.type) ? (first_operand->type.type) : (second_operand->type.type));
            (yyval.expr)->location = ST->generate_tem_var(final);                       // Store the final result in a temporary
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, MOD);
        }
#line 2234 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 38: /* additive_expression: multiplicative_expression  */
#line 625 "ass6_21CS10057_21CS30058.y"
                                  {

        }
#line 2242 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 39: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 628 "ass6_21CS10057_21CS30058.y"
                                                             {   
            // Indicates addition
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }

            // Assign the data type after appropriate type casting
            data_dtype final = ((first_operand->type.type > second_operand->type.type) ? (first_operand->type.type) : (second_operand->type.type));
            (yyval.expr)->location = ST->generate_tem_var(final);                       // Store the final result in a temporary
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, ADD);
        }
#line 2276 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 40: /* additive_expression: additive_expression SUBTRACT multiplicative_expression  */
#line 657 "ass6_21CS10057_21CS30058.y"
                                                                 {
            // Indicates subtraction
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }

            // Assign the data type after appropriate type casting
            data_dtype final = ((first_operand->type.type > second_operand->type.type) ? (first_operand->type.type) : (second_operand->type.type));
            (yyval.expr)->location = ST->generate_tem_var(final);                       // Store the final result in a temporary
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, SUB);
        }
#line 2309 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 41: /* shift_expression: additive_expression  */
#line 688 "ass6_21CS10057_21CS30058.y"
                            {

        }
#line 2317 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 42: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 691 "ass6_21CS10057_21CS30058.y"
                                                          {
            // Indicates left shift
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                   //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations

                   //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr)->location = ST->generate_tem_var(first_operand->type.type);              // data type remains the same after shifting
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, SL);
        }
#line 2347 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 43: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 716 "ass6_21CS10057_21CS30058.y"
                                                           {
            // Indicates right shift
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                   //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                   //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr)->location = ST->generate_tem_var(first_operand->type.type);              //data type remains the same after right shift
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, SR);
        }
#line 2378 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 44: /* relational_expression: shift_expression  */
#line 750 "ass6_21CS10057_21CS30058.y"
                         {

        }
#line 2386 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 45: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 753 "ass6_21CS10057_21CS30058.y"
                                                           {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                      // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                     // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                                        // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
           
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                   //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean type
            add_TAC((yyval.expr)->location, "1", "", ASSIGN);
            
            (yyval.expr)->truelist = makelist(next_instruction);                 //backpatching
            add_TAC("", (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, GOTO_LT);               
            add_TAC((yyval.expr)->location, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(next_instruction);                //backpatching
            add_TAC("", "", "", GOTO);                            
            /*
                in: $$ = 1
                in+1: if $1 < $3 goto (to be backpatched) i.e. $$ will stay 1 and we will jump to truelist
                in+2: $$ = 0                            else $$ set to 0 and we jump to falselist
                in+3: goto (to be backpatched)
            */
        
        
        }
#line 2432 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 46: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 794 "ass6_21CS10057_21CS30058.y"
                                                              {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                                      // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            add_TAC((yyval.expr)->location, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(next_instruction);                 // backpatching
            add_TAC("", (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, GOTO_GT);               
            add_TAC((yyval.expr)->location, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(next_instruction);                //backpatching
            add_TAC("", "", "", GOTO);                             

            /*
                in: $$ = 1
                in+1: if $1 > $3 goto (to be backpatched) i.e. $$ will stay 1 and we will jump to truelist
                in+2: $$ = 0                            else $$ set to 0 and we jump to falselist
                in+3: goto (to be backpatched)
            */
        }
#line 2474 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 831 "ass6_21CS10057_21CS30058.y"
                                                                 {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            add_TAC((yyval.expr)->location, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(next_instruction);                 // backpatching
            add_TAC("", (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, GOTO_LTE);               // Emit "if x <= y goto ..."
            add_TAC((yyval.expr)->location, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(next_instruction);                //backpatching
            add_TAC("", "", "", GOTO);                             
             /*
                in: $$ = 1
                in+1: if $1 <= $3 goto (to be backpatched) i.e. $$ will stay 1 and we will jump to truelist
                in+2: $$ = 0                            else $$ set to 0 and we jump to falselist
                in+3: goto (to be backpatched)
            */
        
        
        }
#line 2517 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 869 "ass6_21CS10057_21CS30058.y"
                                                                    {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            add_TAC((yyval.expr)->location, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(next_instruction);                 // backpatching
            add_TAC("", (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, GOTO_GTE);               // Emit "if x >= y goto ..."
            add_TAC((yyval.expr)->location, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(next_instruction);                //backpatching
            add_TAC("", "", "", GOTO);                             
             /*
                in: $$ = 1
                in+1: if $1 >= $3 goto (to be backpatched) i.e. $$ will stay 1 and we will jump to truelist
                in+2: $$ = 0                            else $$ set to 0 and we jump to falselist
                in+3: goto (to be backpatched)
            */
        
        }
#line 2559 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 49: /* equality_expression: relational_expression  */
#line 909 "ass6_21CS10057_21CS30058.y"
                              {
            (yyval.expr) = new expression();
            (yyval.expr) = (yyvsp[0].expr);                // copy content from right to left
        }
#line 2568 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 50: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 913 "ass6_21CS10057_21CS30058.y"
                                                          {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            add_TAC((yyval.expr)->location, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(next_instruction);                 // backpatching
            add_TAC("", (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, GOTO_EQ);                
            add_TAC((yyval.expr)->location, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(next_instruction);                //backpatching
            add_TAC("", "", "", GOTO);                             
            /*
                in: $$ = 1
                in+1: if $1 == $3 goto (to be backpatched) i.e. $$ will stay 1 and we will jump to truelist
                in+2: $$ = 0                            else $$ set to 0 and we jump to falselist
                in+3: goto (to be backpatched)
            */
        
        }
#line 2610 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 51: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 950 "ass6_21CS10057_21CS30058.y"
                                                              {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            add_TAC((yyval.expr)->location, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(next_instruction);                 // backpatching
            add_TAC("", (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, GOTO_NEQ);               
            add_TAC((yyval.expr)->location, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(next_instruction);                //backpatching
            add_TAC("", "", "", GOTO);                             
            /*
                in: $$ = 1
                in+1: if $1 != $3 goto (to be backpatched) i.e. $$ will stay 1 and we will jump to truelist
                in+2: $$ = 0                            else $$ set to 0 and we jump to falselist
                in+3: goto (to be backpatched)
            */
        }
#line 2651 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 52: /* and_expression: equality_expression  */
#line 995 "ass6_21CS10057_21CS30058.y"
                            {

        }
#line 2659 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 53: /* and_expression: and_expression BITWISE_AND equality_expression  */
#line 998 "ass6_21CS10057_21CS30058.y"
                                                         {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();                            // Create a temporary variable to store the result
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, BW_AND);            // generate TAC quad
            // $$  = $1 & $3
        }
#line 2689 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 54: /* exclusive_or_expression: and_expression  */
#line 1026 "ass6_21CS10057_21CS30058.y"
                       {
            (yyval.expr) = (yyvsp[0].expr);    // copy content from right to left
        }
#line 2697 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 55: /* exclusive_or_expression: exclusive_or_expression BITWISE_XOR and_expression  */
#line 1029 "ass6_21CS10057_21CS30058.y"
                                                             {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();                            // Create a temporary variable to store the result
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, BW_XOR);            // generate TAC quad
            //$$ =$1 ^ $3
        }
#line 2727 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 56: /* inclusive_or_expression: exclusive_or_expression  */
#line 1057 "ass6_21CS10057_21CS30058.y"
                                {
            (yyval.expr) = new expression();
            (yyval.expr) = (yyvsp[0].expr);                // copy content from right to left
        }
#line 2736 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 57: /* inclusive_or_expression: inclusive_or_expression BITWISE_OR exclusive_or_expression  */
#line 1061 "ass6_21CS10057_21CS30058.y"
                                                                     {
            (yyval.expr) = new expression();
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-2].expr)->location);                  // Get the first operand from the ST_entry table
            ST_entry* second_operand = ST->search_lexeme((yyvsp[0].expr)->location);                  // Get the second operand from the ST_entry table
            if(second_operand->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(second_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[0].expr)->location, *((yyvsp[0].expr)->store_addr), ARR_R);
                (yyvsp[0].expr)->location = t;
                (yyvsp[0].expr)->type = second_operand->type.next_elem_type;
            }
            if(first_operand->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                
                //extract the value stored in array and save it in a temporary variable so that arithmetic operation can be performed 
                string t = ST->generate_tem_var(first_operand->type.next_elem_type);
                add_TAC(t, (yyvsp[-2].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_R);
                (yyvsp[-2].expr)->location = t;
                (yyvsp[-2].expr)->type = first_operand->type.next_elem_type;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->location = ST->generate_tem_var();                            // Create a temporary variable to store the result
            add_TAC((yyval.expr)->location, (yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, BW_OR);             // generate TAC quad
            //$$ = $1 | $3
        }
#line 2766 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 58: /* logical_and_expression: inclusive_or_expression  */
#line 1089 "ass6_21CS10057_21CS30058.y"
                                {

        }
#line 2774 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 59: /* logical_and_expression: logical_and_expression LOGICAL_AND M inclusive_or_expression  */
#line 1092 "ass6_21CS10057_21CS30058.y"
                                                                       {
            /*
                augmented the grammar with the non-terminal M marker to have a track of next instruction to be executed during backpatching
            */
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].expr)->instr);                     // Backpatching
            (yyval.expr)->falselist = merge_list((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);    // Generate falselist by merging the falselists of $1 and $4
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                            // Generate truelist from truelist of $4
            (yyval.expr)->type = BOOL;                                        // Set the type of the expression to boolean
            // B-> B1 && MB2
            // B.truelist = B2.truelist
            // backpatch(B1.truelist, M.instr)
            //B.falselist = merge_list(B1.falselist, B2.falselist)
        
        
        }
#line 2794 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 60: /* logical_or_expression: logical_and_expression  */
#line 1110 "ass6_21CS10057_21CS30058.y"
                               {

        }
#line 2802 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 61: /* logical_or_expression: logical_or_expression LOGICAL_OR M logical_and_expression  */
#line 1113 "ass6_21CS10057_21CS30058.y"
                                                                    {
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].expr)->instr);                    // Backpatching
            (yyval.expr)->truelist = merge_list((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);       // Generate falselist by merging the falselists of $1 and $4
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;                          // Generate truelist from truelist of $4
            (yyval.expr)->type = BOOL;                                        // Set the type of the expression to boolean
            // B-> B1 || MB2
            // B.falselist = B2.falselist
            // backpatch(B1.falselist, M.instr)
            //B.truelist = merge_list(B1.truelist, B2.truelist)
        
        }
#line 2818 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 62: /* conditional_expression: logical_or_expression  */
#line 1127 "ass6_21CS10057_21CS30058.y"
                              {
            (yyval.expr) = (yyvsp[0].expr);    // copy content from right to left
        }
#line 2826 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 63: /* conditional_expression: logical_or_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 1130 "ass6_21CS10057_21CS30058.y"
                                                                                              {   
            /*
                grammar is augmented with the non-terminals M marker and N to keep track of next instruction during backpatching
            */
            ST_entry* first_operand = ST->search_lexeme((yyvsp[-4].expr)->location);
            (yyval.expr)->location = ST->generate_tem_var(first_operand->type.type);      
            (yyval.expr)->type = first_operand->type.type;
            
            add_TAC((yyval.expr)->location, (yyvsp[0].expr)->location, "", ASSIGN);         
            list<int> temp = makelist(next_instruction);
            
            add_TAC("", "", "", GOTO);                     
            backpatch((yyvsp[-3].expr)->nextlist, next_instruction);         
            
            add_TAC((yyval.expr)->location, (yyvsp[-4].expr)->location, "", ASSIGN);
            temp = merge_list(temp, makelist(next_instruction));
            
            add_TAC("", "", "", GOTO);                     
            backpatch((yyvsp[-7].expr)->nextlist, next_instruction);     
            convert_int_bool((yyvsp[-8].expr));                       
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].expr)->instr);         
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].expr)->instr);        
            backpatch((yyvsp[-7].expr)->nextlist, next_instruction);  
            
            /*
            For E -> E1 N1 ? M1 E2 N2 : M2 E3
            E.loc = gentemp();
            E.type = E2.type; // Assume E2.type = E3.type
            add_TAC(E.loc ’=’ E3 .loc); // Control gets here by fall-through
            l = makelist(nextinstr);
            add_TAC(goto .... );
            backpatch(N 2 .nextlist, nextinstr);
            add_TAC(E .loc ’=’ E 2 .loc);
            l = merge_list(l, makelist(nextinstr));
            add_TAC(goto .... );                   
            backpatch(N1 .nextlist, nextinstr);
            convInt2Bool(E1);
            backpatch(E1 .truelist, M1 .instr); //backpatching
            backpatch(E1 .falselist, M2 .instr);
            backpatch(l, nextinstr);
            */
        }
#line 2873 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 64: /* M: %empty  */
#line 1174 "ass6_21CS10057_21CS30058.y"
          {   
            
            //M - > epsilon 
            //store the count of the next instruction and will be used for backpatching in control flow statements
            (yyval.expr) = new expression();
            (yyval.expr)->instr = next_instruction;
        }
#line 2885 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 65: /* N: %empty  */
#line 1183 "ass6_21CS10057_21CS30058.y"
          {
            // N -> epsilon 
            // Helps in control flow statments
           
            (yyval.expr) = new expression();
            (yyval.expr)->nextlist = makelist(next_instruction);
            add_TAC("", "", "", GOTO);
        }
#line 2898 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 1194 "ass6_21CS10057_21CS30058.y"
                               {

        }
#line 2906 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 1197 "ass6_21CS10057_21CS30058.y"
                                                                     {
            ST_entry* sym1 = ST->search_lexeme((yyvsp[-2].expr)->location);         // Get the first operand from the ST_entry table
            ST_entry* sym2 = ST->search_lexeme((yyvsp[0].expr)->location);         // Get the second operand from the ST_entry table
            if((yyvsp[-2].expr)->order_dim == 0) {
                if(sym1->type.type != ARRAY)
                    add_TAC((yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, "", ASSIGN);
                else
                    add_TAC((yyvsp[-2].expr)->location, (yyvsp[0].expr)->location, *((yyvsp[-2].expr)->store_addr), ARR_L);
            }
            else
                add_TAC(*((yyvsp[-2].expr)->store_addr), (yyvsp[0].expr)->location, "", L_DEREF);
            (yyval.expr) = (yyvsp[-2].expr);        // Assignment 
        }
#line 2924 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 68: /* assignment_operator: ASSIGN_  */
#line 1213 "ass6_21CS10057_21CS30058.y"
                {

        }
#line 2932 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 69: /* assignment_operator: MUL_ASSIGN  */
#line 1216 "ass6_21CS10057_21CS30058.y"
                     {

        }
#line 2940 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 70: /* assignment_operator: F_SLASH_ASSIGN  */
#line 1219 "ass6_21CS10057_21CS30058.y"
                         {

        }
#line 2948 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 71: /* assignment_operator: MODULO_ASSIGN  */
#line 1222 "ass6_21CS10057_21CS30058.y"
                        {

        }
#line 2956 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 72: /* assignment_operator: PLUSASSIGN  */
#line 1225 "ass6_21CS10057_21CS30058.y"
                     {

        }
#line 2964 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 73: /* assignment_operator: SUBTRACT_ASSIGN  */
#line 1228 "ass6_21CS10057_21CS30058.y"
                          {

        }
#line 2972 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 74: /* assignment_operator: LEFT_SHIFT_ASSIGN  */
#line 1231 "ass6_21CS10057_21CS30058.y"
                            {

        }
#line 2980 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 75: /* assignment_operator: RIGHT_SHIFT_ASSIGN  */
#line 1234 "ass6_21CS10057_21CS30058.y"
                             {

        }
#line 2988 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 76: /* assignment_operator: BITWISE_AND_ASSIGN  */
#line 1237 "ass6_21CS10057_21CS30058.y"
                             {

        }
#line 2996 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 77: /* assignment_operator: BITWISE_XOR_ASSIGN  */
#line 1240 "ass6_21CS10057_21CS30058.y"
                             {

        }
#line 3004 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 78: /* assignment_operator: BITWISE_OR_ASSIGN  */
#line 1243 "ass6_21CS10057_21CS30058.y"
                            {

        }
#line 3012 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 79: /* expression: assignment_expression  */
#line 1249 "ass6_21CS10057_21CS30058.y"
                              {

        }
#line 3020 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 80: /* expression: expression COMMA assignment_expression  */
#line 1252 "ass6_21CS10057_21CS30058.y"
                                                 {

        }
#line 3028 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 81: /* constant_expression: conditional_expression  */
#line 1258 "ass6_21CS10057_21CS30058.y"
                               {

        }
#line 3036 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 82: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 1267 "ass6_21CS10057_21CS30058.y"
                                                              {
            data_dtype current_dtype = (yyvsp[-2].dtype);
            int current_dsize = -1;

            // assign size according to the datatype
            if(current_dtype == INT)
                current_dsize = 4;
            else if(current_dtype == CHAR)
                current_dsize = 1;
            else if(current_dtype == FLOAT)
                current_dsize = 8;
           
            //get the set of declarations
            vector<declaration*> decs = *((yyvsp[-1].decList));
            
            //iterate over declarations
            for(vector<declaration*>::iterator it = decs.begin(); it != decs.end(); it++) {
                declaration* currDec = *it;
                
                //if a function declaration is found
                if(currDec->type == FUNCTION) {
                    //move back to gloabl symbol table
                    ST = &ST_global;
                    //add a TAC code marking the end of function
                    add_TAC(currDec->name, "", "", FUNC_END);
                    
                    //find the func in the global symbol table
                    ST_entry* first_operand = ST->search_lexeme(currDec->name);        // Create an entry for the function

                    //find the lexeme with name return value in nested table of the entry corresponding to func name
                    //i.e. search for return lexeme in function symbol table
                    ST_entry* second_operand = first_operand->nested_symbol_table->search_lexeme("RETVAL", current_dtype, currDec->pointers);
                    
                    //update func symbol's attributes in global symbol table
                    first_operand->size = 0;
                    first_operand->initial_value = NULL;
                    continue;
                }

                //if the current declaration is not of type function
                ST_entry* three = ST->search_lexeme(currDec->name, current_dtype);        // create a new symbol
                three->nested_symbol_table = NULL;                                         //since this is not a function there won't be nested tables
                
                if(currDec->li == vector<int>() && currDec->pointers == 0) {
                    three->type.type = current_dtype;                                       //assign the data type to all variables
                    three->size = current_dsize;                                            //assign data type's size to all variables
                    
                    if(currDec->initial_value != NULL) {                                    //if it has an initial value
                        string rval = currDec->initial_value->location;
                        add_TAC(three->name, rval, "", ASSIGN);
                        three->initial_value = ST->search_lexeme(rval)->initial_value;      //assign the intial value to this variable
                    }
                    else
                        three->initial_value = NULL;                                        //else assign null as initial value     
                }       
                else if(currDec->li != vector<int>()) {                                     // Handle array data type
                    three->type.type = ARRAY;                                               //set type as arary
                    three->type.next_elem_type = current_dtype;                             //array elements would of type current data type
                    three->type.dims = currDec->li;                                         //set the dimension of array
                    vector<int> temp = three->type.dims;                                    //if the array is of type ar[3][4][5] then 3,4,5 would be stored in the vector

                    int size = current_dsize;
                    for(int i = 0; i < (int)temp.size(); i++)                                //temp holds the value of dimensions
                        size *= temp[i];
                    ST->offset += size;                                                      //multiply the dimension to find total number of bytes occupied by array
                    three->size = size;
                    ST->offset -= 4;
                }
                else if(currDec->pointers != 0) {                                           //to handle pointer data type
                    three->type.type = POINTER;                                             //set data type of the variable
                    three->type.next_elem_type = current_dtype;                             //set the data type of the element pointed by the pointer
                    three->type.pointers = currDec->pointers;                               
                    ST->offset += (8 - current_dsize);                                      //update the offset but since pointer is of size 8 add that to the offset. 
                    three->size = 8;
                }
            }
        }
#line 3118 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers SEMICOLON  */
#line 1344 "ass6_21CS10057_21CS30058.y"
                                           {

        }
#line 3126 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 84: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 1350 "ass6_21CS10057_21CS30058.y"
                                                       {

        }
#line 3134 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 85: /* declaration_specifiers: storage_class_specifier  */
#line 1353 "ass6_21CS10057_21CS30058.y"
                                 {

        }
#line 3142 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 86: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 1356 "ass6_21CS10057_21CS30058.y"
                                                {

        }
#line 3150 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier  */
#line 1359 "ass6_21CS10057_21CS30058.y"
                         {

        }
#line 3158 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 1362 "ass6_21CS10057_21CS30058.y"
                                                {

        }
#line 3166 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 89: /* declaration_specifiers: type_qualifier  */
#line 1365 "ass6_21CS10057_21CS30058.y"
                         {

        }
#line 3174 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 90: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 1368 "ass6_21CS10057_21CS30058.y"
                                                    {

        }
#line 3182 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 91: /* declaration_specifiers: function_specifier  */
#line 1371 "ass6_21CS10057_21CS30058.y"
                             {

        }
#line 3190 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 1377 "ass6_21CS10057_21CS30058.y"
                        {
            (yyval.decList) = new vector<declaration*>;      // add all declarations to the vector
            (yyval.decList)->push_back((yyvsp[0].dec));
        }
#line 3199 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 1381 "ass6_21CS10057_21CS30058.y"
                                                     {
            (yyvsp[-2].decList)->push_back((yyvsp[0].dec));                  // continue adding declaration to the vector
            (yyval.decList) = (yyvsp[-2].decList);
        }
#line 3208 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 94: /* init_declarator: declarator  */
#line 1388 "ass6_21CS10057_21CS30058.y"
                   {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->initial_value = NULL;         // Initialize the initial_value to NULL as no initiali value given
        }
#line 3217 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 95: /* init_declarator: declarator ASSIGN_ initializer  */
#line 1392 "ass6_21CS10057_21CS30058.y"
                                         {   
            (yyval.dec) = (yyvsp[-2].dec);
            (yyval.dec)->initial_value = (yyvsp[0].expr);           // Initialize the initial_value to the value provided
        }
#line 3226 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 96: /* storage_class_specifier: EXTERN  */
#line 1399 "ass6_21CS10057_21CS30058.y"
               {

        }
#line 3234 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 97: /* storage_class_specifier: STATIC  */
#line 1402 "ass6_21CS10057_21CS30058.y"
                 {

        }
#line 3242 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 98: /* storage_class_specifier: AUTO  */
#line 1405 "ass6_21CS10057_21CS30058.y"
               {

        }
#line 3250 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 99: /* storage_class_specifier: REGISTER  */
#line 1408 "ass6_21CS10057_21CS30058.y"
                   {

        }
#line 3258 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 100: /* type_specifier: VOID_  */
#line 1414 "ass6_21CS10057_21CS30058.y"
              {
            (yyval.dtype) = VOID;
        }
#line 3266 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 101: /* type_specifier: CHAR_  */
#line 1417 "ass6_21CS10057_21CS30058.y"
                {
            (yyval.dtype) = CHAR;
        }
#line 3274 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 102: /* type_specifier: SHORT  */
#line 1420 "ass6_21CS10057_21CS30058.y"
                {

        }
#line 3282 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 103: /* type_specifier: INT_  */
#line 1423 "ass6_21CS10057_21CS30058.y"
               {
            (yyval.dtype) = INT; 
        }
#line 3290 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 104: /* type_specifier: LONG  */
#line 1426 "ass6_21CS10057_21CS30058.y"
               {

        }
#line 3298 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 105: /* type_specifier: FLOAT_  */
#line 1429 "ass6_21CS10057_21CS30058.y"
                 {
            (yyval.dtype) = FLOAT;
        }
#line 3306 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 106: /* type_specifier: DOUBLE  */
#line 1432 "ass6_21CS10057_21CS30058.y"
                 {

        }
#line 3314 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 107: /* type_specifier: SIGNED  */
#line 1435 "ass6_21CS10057_21CS30058.y"
                 {

        }
#line 3322 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 108: /* type_specifier: UNSIGNED  */
#line 1438 "ass6_21CS10057_21CS30058.y"
                   {

        }
#line 3330 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 109: /* type_specifier: BOOL_  */
#line 1441 "ass6_21CS10057_21CS30058.y"
                {

        }
#line 3338 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 110: /* type_specifier: COMPLEX  */
#line 1444 "ass6_21CS10057_21CS30058.y"
                  {

        }
#line 3346 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 111: /* type_specifier: IMAGINARY  */
#line 1447 "ass6_21CS10057_21CS30058.y"
                    {

        }
#line 3354 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 112: /* type_specifier: enum_specifier  */
#line 1450 "ass6_21CS10057_21CS30058.y"
                         {

        }
#line 3362 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 1456 "ass6_21CS10057_21CS30058.y"
                                                    {

        }
#line 3370 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 1459 "ass6_21CS10057_21CS30058.y"
                                                      {

        }
#line 3378 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 115: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 1465 "ass6_21CS10057_21CS30058.y"
                                 {

        }
#line 3386 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: %empty  */
#line 1468 "ass6_21CS10057_21CS30058.y"
                 {

        }
#line 3394 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 117: /* enum_specifier: ENUM LEFT_CURLY enumerator_list RIGHT_CURLY  */
#line 1474 "ass6_21CS10057_21CS30058.y"
                                                    {

        }
#line 3402 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 118: /* enum_specifier: ENUM IDENTIFIER LEFT_CURLY enumerator_list RIGHT_CURLY  */
#line 1477 "ass6_21CS10057_21CS30058.y"
                                                                 {

        }
#line 3410 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 119: /* enum_specifier: ENUM IDENTIFIER LEFT_CURLY enumerator_list COMMA RIGHT_CURLY  */
#line 1480 "ass6_21CS10057_21CS30058.y"
                                                                       {

        }
#line 3418 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 120: /* enum_specifier: ENUM IDENTIFIER  */
#line 1483 "ass6_21CS10057_21CS30058.y"
                          {

        }
#line 3426 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 121: /* enumerator_list: enumerator  */
#line 1489 "ass6_21CS10057_21CS30058.y"
                   {

        }
#line 3434 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 122: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 1492 "ass6_21CS10057_21CS30058.y"
                                           {

        }
#line 3442 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 123: /* enumerator: IDENTIFIER  */
#line 1498 "ass6_21CS10057_21CS30058.y"
                   {

        }
#line 3450 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 124: /* enumerator: IDENTIFIER ASSIGN_ constant_expression  */
#line 1501 "ass6_21CS10057_21CS30058.y"
                                                 {

        }
#line 3458 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 125: /* type_qualifier: CONST  */
#line 1507 "ass6_21CS10057_21CS30058.y"
              {

        }
#line 3466 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 126: /* type_qualifier: RESTRICT  */
#line 1510 "ass6_21CS10057_21CS30058.y"
                   {

        }
#line 3474 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 127: /* type_qualifier: VOLATILE  */
#line 1513 "ass6_21CS10057_21CS30058.y"
                   {

        }
#line 3482 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 128: /* function_specifier: INLINE  */
#line 1519 "ass6_21CS10057_21CS30058.y"
               {

        }
#line 3490 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 129: /* declarator: pointer direct_declarator  */
#line 1525 "ass6_21CS10057_21CS30058.y"
                                  {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->pointers = (yyvsp[-1].intval);
        }
#line 3499 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 130: /* declarator: direct_declarator  */
#line 1529 "ass6_21CS10057_21CS30058.y"
                            {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->pointers = 0;
        }
#line 3508 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 131: /* direct_declarator: IDENTIFIER  */
#line 1536 "ass6_21CS10057_21CS30058.y"
                   {
            (yyval.dec) = new declaration();
            (yyval.dec)->name = *((yyvsp[0].str));
        }
#line 3517 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 132: /* direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS  */
#line 1540 "ass6_21CS10057_21CS30058.y"
                                                        {

        }
#line 3525 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator LEFT_SQUARE type_qualifier_list_opt RIGHT_SQUARE  */
#line 1543 "ass6_21CS10057_21CS30058.y"
                                                                             {
            (yyvsp[-3].dec)->type = ARRAY;       // Array type
            (yyvsp[-3].dec)->next_elem_type = INT;     // Array of ints
            (yyval.dec) = (yyvsp[-3].dec);
            (yyval.dec)->li.push_back(0);
        }
#line 3536 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator LEFT_SQUARE type_qualifier_list_opt assignment_expression RIGHT_SQUARE  */
#line 1549 "ass6_21CS10057_21CS30058.y"
                                                                                                   {
            (yyvsp[-4].dec)->type = ARRAY;       // Array type
            (yyvsp[-4].dec)->next_elem_type = INT;     // Array of ints
            (yyval.dec) = (yyvsp[-4].dec);
            int index = ST->search_lexeme((yyvsp[-1].expr)->location)->initial_value->i;
            (yyval.dec)->li.push_back(index);
        }
#line 3548 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LEFT_SQUARE STATIC type_qualifier_list assignment_expression RIGHT_SQUARE  */
#line 1556 "ass6_21CS10057_21CS30058.y"
                                                                                                      {

        }
#line 3556 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator LEFT_SQUARE type_qualifier_list STATIC assignment_expression RIGHT_SQUARE  */
#line 1559 "ass6_21CS10057_21CS30058.y"
                                                                                                      {

        }
#line 3564 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator LEFT_SQUARE type_qualifier_list_opt MUL RIGHT_SQUARE  */
#line 1562 "ass6_21CS10057_21CS30058.y"
                                                                                 {
            (yyvsp[-4].dec)->type = POINTER;     // Pointer type
            (yyvsp[-4].dec)->next_elem_type = INT;
            (yyval.dec) = (yyvsp[-4].dec);
        }
#line 3574 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list_opt RIGHT_PARENTHESIS  */
#line 1567 "ass6_21CS10057_21CS30058.y"
                                                                                       {
            (yyval.dec) = (yyvsp[-3].dec);
            (yyval.dec)->type = FUNCTION;    // Function type
            ST_entry* funcData = ST->search_lexeme((yyval.dec)->name, (yyval.dec)->type);
            symbol_table* function_ST = new symbol_table();
            funcData->nested_symbol_table = function_ST;
            vector<param*> paramList = *((yyvsp[-1].parameterList));   // Get the parameter list
            for(int i = 0; i < (int)paramList.size(); i++) {
                param* curParam = paramList[i];
                if(curParam->type.type == ARRAY) {          // If the parameter is an array
                    function_ST->search_lexeme(curParam->name, curParam->type.type);
                    function_ST->search_lexeme(curParam->name)->type.next_elem_type = INT;
                    function_ST->search_lexeme(curParam->name)->type.dims.push_back(0);
                }
                else if(curParam->type.type == POINTER) {   // If the parameter is a pointer
                    function_ST->search_lexeme(curParam->name, curParam->type.type);
                    function_ST->search_lexeme(curParam->name)->type.next_elem_type = INT;
                    function_ST->search_lexeme(curParam->name)->type.dims.push_back(0);
                }
                else                                        // If the parameter is a anything other than an array or a pointer
                    function_ST->search_lexeme(curParam->name, curParam->type.type);
            }
            ST = function_ST;         // Set the pointer to the ST_entry table to the function's ST_entry table
            add_TAC((yyval.dec)->name, "", "", FUNC_BEG);
        }
#line 3604 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS  */
#line 1592 "ass6_21CS10057_21CS30058.y"
                                                                               {

        }
#line 3612 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 140: /* parameter_type_list_opt: parameter_type_list  */
#line 1598 "ass6_21CS10057_21CS30058.y"
                            {

        }
#line 3620 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 141: /* parameter_type_list_opt: %empty  */
#line 1601 "ass6_21CS10057_21CS30058.y"
                 {
            (yyval.parameterList) = new vector<param*>;
        }
#line 3628 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 142: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1607 "ass6_21CS10057_21CS30058.y"
                            {

        }
#line 3636 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 143: /* type_qualifier_list_opt: %empty  */
#line 1610 "ass6_21CS10057_21CS30058.y"
                 {

        }
#line 3644 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 144: /* pointer: MUL type_qualifier_list  */
#line 1616 "ass6_21CS10057_21CS30058.y"
                                {

        }
#line 3652 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 145: /* pointer: MUL  */
#line 1619 "ass6_21CS10057_21CS30058.y"
              {
            (yyval.intval) = 1;
        }
#line 3660 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 146: /* pointer: MUL type_qualifier_list pointer  */
#line 1622 "ass6_21CS10057_21CS30058.y"
                                          {

        }
#line 3668 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 147: /* pointer: MUL pointer  */
#line 1625 "ass6_21CS10057_21CS30058.y"
                      {
            (yyval.intval) = 1 + (yyvsp[0].intval);
        }
#line 3676 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 148: /* type_qualifier_list: type_qualifier  */
#line 1631 "ass6_21CS10057_21CS30058.y"
                       {

        }
#line 3684 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 149: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1634 "ass6_21CS10057_21CS30058.y"
                                             {

        }
#line 3692 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 152: /* parameter_list: parameter_declaration  */
#line 1645 "ass6_21CS10057_21CS30058.y"
                              {
            (yyval.parameterList) = new vector<param*>;         // Create a new vector of parameters
            (yyval.parameterList)->push_back((yyvsp[0].parameter));              // Add the parameter to the vector
        }
#line 3701 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 153: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1649 "ass6_21CS10057_21CS30058.y"
                                                     {
            (yyvsp[-2].parameterList)->push_back((yyvsp[0].parameter));              // Add the parameter to the vector
            (yyval.parameterList) = (yyvsp[-2].parameterList);
        }
#line 3710 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 154: /* parameter_declaration: declaration_specifiers declarator  */
#line 1656 "ass6_21CS10057_21CS30058.y"
                                          {
            (yyval.parameter) = new param();
            (yyval.parameter)->name = (yyvsp[0].dec)->name;
            if((yyvsp[0].dec)->type == ARRAY) {
                (yyval.parameter)->type.type = ARRAY;
                (yyval.parameter)->type.next_elem_type = (yyvsp[-1].dtype);
            }
            else if((yyvsp[0].dec)->pc != 0) {
                (yyval.parameter)->type.type = POINTER;
                (yyval.parameter)->type.next_elem_type = (yyvsp[-1].dtype);
            }
            else
                (yyval.parameter)->type.type = (yyvsp[-1].dtype);
        }
#line 3729 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 155: /* parameter_declaration: declaration_specifiers  */
#line 1670 "ass6_21CS10057_21CS30058.y"
                                 {

        }
#line 3737 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 156: /* identifier_list: IDENTIFIER  */
#line 1676 "ass6_21CS10057_21CS30058.y"
                   {

        }
#line 3745 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 157: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1679 "ass6_21CS10057_21CS30058.y"
                                           {

        }
#line 3753 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 158: /* type_name: specifier_qualifier_list  */
#line 1685 "ass6_21CS10057_21CS30058.y"
                                 {

        }
#line 3761 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 159: /* initializer: assignment_expression  */
#line 1691 "ass6_21CS10057_21CS30058.y"
                              {
            (yyval.expr) = (yyvsp[0].expr);   // copy content from right to left
        }
#line 3769 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 160: /* initializer: LEFT_CURLY initializer_list RIGHT_CURLY  */
#line 1694 "ass6_21CS10057_21CS30058.y"
                                                  {

        }
#line 3777 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 161: /* initializer: LEFT_CURLY initializer_list COMMA RIGHT_CURLY  */
#line 1697 "ass6_21CS10057_21CS30058.y"
                                                        {

        }
#line 3785 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 162: /* initializer_list: designation_opt initializer  */
#line 1703 "ass6_21CS10057_21CS30058.y"
                                    {

        }
#line 3793 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 163: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1706 "ass6_21CS10057_21CS30058.y"
                                                             {

        }
#line 3801 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 164: /* designation_opt: designation  */
#line 1712 "ass6_21CS10057_21CS30058.y"
                    {

        }
#line 3809 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 165: /* designation_opt: %empty  */
#line 1715 "ass6_21CS10057_21CS30058.y"
                 {

        }
#line 3817 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 166: /* designation: designator_list ASSIGN_  */
#line 1721 "ass6_21CS10057_21CS30058.y"
                                {

        }
#line 3825 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 167: /* designator_list: designator  */
#line 1727 "ass6_21CS10057_21CS30058.y"
                   {

        }
#line 3833 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 168: /* designator_list: designator_list designator  */
#line 1730 "ass6_21CS10057_21CS30058.y"
                                     {

        }
#line 3841 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 169: /* designator: LEFT_SQUARE constant_expression RIGHT_SQUARE  */
#line 1736 "ass6_21CS10057_21CS30058.y"
                                                     {

        }
#line 3849 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 170: /* designator: DOT IDENTIFIER  */
#line 1739 "ass6_21CS10057_21CS30058.y"
                         {

        }
#line 3857 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 171: /* statement: labeled_statement  */
#line 1745 "ass6_21CS10057_21CS30058.y"
                          {

        }
#line 3865 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 177: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1756 "ass6_21CS10057_21CS30058.y"
                                   {

        }
#line 3873 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 178: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1759 "ass6_21CS10057_21CS30058.y"
                                                   {

        }
#line 3881 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 179: /* labeled_statement: DEFAULT COLON statement  */
#line 1762 "ass6_21CS10057_21CS30058.y"
                                  {

        }
#line 3889 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 180: /* compound_statement: LEFT_CURLY RIGHT_CURLY  */
#line 1768 "ass6_21CS10057_21CS30058.y"
                               {

        }
#line 3897 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 181: /* compound_statement: LEFT_CURLY block_item_list RIGHT_CURLY  */
#line 1771 "ass6_21CS10057_21CS30058.y"
                                                 {
            (yyval.expr) = (yyvsp[-1].expr);
        }
#line 3905 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 182: /* block_item_list: block_item  */
#line 1777 "ass6_21CS10057_21CS30058.y"
                   {
            (yyval.expr) = (yyvsp[0].expr);    // copy content from right to left
            backpatch((yyvsp[0].expr)->nextlist, next_instruction);
        }
#line 3914 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 183: /* block_item_list: block_item_list M block_item  */
#line 1781 "ass6_21CS10057_21CS30058.y"
                                       {   
            
            /*
                M marker has been added to keep track of next instruction during backpatching
            */
            (yyval.expr) = new expression();
            backpatch((yyvsp[-2].expr)->nextlist, (yyvsp[-1].expr)->instr);    // M.instr would be the next instruction after $1 so backpatch 
            (yyval.expr)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 3928 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 184: /* block_item: declaration  */
#line 1793 "ass6_21CS10057_21CS30058.y"
                    {
            (yyval.expr) = new expression();   // new expression node
        }
#line 3936 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 186: /* expression_statement: expression SEMICOLON  */
#line 1800 "ass6_21CS10057_21CS30058.y"
                             {

        }
#line 3944 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 187: /* expression_statement: SEMICOLON  */
#line 1803 "ass6_21CS10057_21CS30058.y"
                    {
            (yyval.expr) = new expression();  // new expression node
        }
#line 3952 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 188: /* selection_statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N  */
#line 1830 "ass6_21CS10057_21CS30058.y"
                                                                         {
            /*
                M and N markers help in backpatching
            */
            backpatch((yyvsp[-4].expr)->nextlist, next_instruction);         //backpatching
            convert_int_bool((yyvsp[-5].expr));                       // Convert expression to bool
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].expr)->instr);         // Backpatching 
            (yyval.expr) = new expression();                      // new expression node
            
            // Merge falselist of expression, nextlist of statement and nextlist of the last N
            (yyvsp[-1].expr)->nextlist = merge_list((yyvsp[0].expr)->nextlist, (yyvsp[-1].expr)->nextlist);
            (yyval.expr)->nextlist = merge_list((yyvsp[-5].expr)->falselist, (yyvsp[-1].expr)->nextlist);
        }
#line 3970 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 189: /* selection_statement: IF LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement N ELSE M statement N  */
#line 1843 "ass6_21CS10057_21CS30058.y"
                                                                                              {
            /*
                M and N markers help in backpatching
            */
            backpatch((yyvsp[-8].expr)->nextlist, next_instruction);         // backpatching
            convert_int_bool((yyvsp[-9].expr));                       // Convert expression to bool
            backpatch((yyvsp[-9].expr)->truelist, (yyvsp[-6].expr)->instr);         // backpatching
            backpatch((yyvsp[-9].expr)->falselist, (yyvsp[-2].expr)->instr);
            (yyval.expr) = new expression();                      // new expression node
            
            // Merge nextlist of statement, nextlist of N and nextlist of the last statement
            (yyval.expr)->nextlist = merge_list((yyvsp[-5].expr)->nextlist, (yyvsp[-4].expr)->nextlist);
            (yyval.expr)->nextlist = merge_list((yyval.expr)->nextlist, (yyvsp[-1].expr)->nextlist);
            (yyval.expr)->nextlist = merge_list((yyval.expr)->nextlist, (yyvsp[0].expr)->nextlist);
        }
#line 3990 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 190: /* selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 1858 "ass6_21CS10057_21CS30058.y"
                                                                         {

        }
#line 3998 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 191: /* iteration_statement: WHILE M LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS M statement  */
#line 1866 "ass6_21CS10057_21CS30058.y"
                                                                            {   
            
            (yyval.expr) = new expression();                      // Create a new expression
            add_TAC("", "", "", GOTO);                  // add TAC with missing label
            
            backpatch(makelist(next_instruction - 1), (yyvsp[-6].expr)->instr);
            backpatch((yyvsp[-3].expr)->nextlist, next_instruction);
            convert_int_bool((yyvsp[-4].expr));                       // Convert expression to bool
            (yyval.expr)->nextlist = (yyvsp[-4].expr)->falselist;               // Exit loop if expression is false
            backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-1].expr)->instr);         // Go to M2 and loop_statement if expression is true
            backpatch((yyvsp[0].expr)->nextlist, (yyvsp[-6].expr)->instr);         // Go back to M1 and expression after one iteration of loop_statement
        }
#line 4015 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 192: /* iteration_statement: DO M statement M WHILE LEFT_PARENTHESIS expression N RIGHT_PARENTHESIS SEMICOLON  */
#line 1878 "ass6_21CS10057_21CS30058.y"
                                                                                           {
            
            (yyval.expr) = new expression();                  // Create a new expression  
            backpatch((yyvsp[-2].expr)->nextlist, next_instruction);     // Backpatching 
            convert_int_bool((yyvsp[-3].expr));                   // Convert expression to bool
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-8].expr)->instr);     // Go back to M1 and loop_statement if expression is true
            backpatch((yyvsp[-7].expr)->nextlist, (yyvsp[-6].expr)->instr);     // Go to M2 to check expression after statement is complete
            (yyval.expr)->nextlist = (yyvsp[-3].expr)->falselist;           // Exit loop if expression is false
        }
#line 4029 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 193: /* iteration_statement: FOR LEFT_PARENTHESIS expression_statement M expression_statement N M expression N RIGHT_PARENTHESIS M statement  */
#line 1887 "ass6_21CS10057_21CS30058.y"
                                                                                                                          {
            
            (yyval.expr) = new expression();                   // Create a new expression
            add_TAC("", "", "", GOTO);
            (yyvsp[0].expr)->nextlist = merge_list((yyvsp[0].expr)->nextlist, makelist(next_instruction - 1));
            backpatch((yyvsp[0].expr)->nextlist, (yyvsp[-5].expr)->instr);    
            backpatch((yyvsp[-3].expr)->nextlist, (yyvsp[-8].expr)->instr);     
            backpatch((yyvsp[-6].expr)->nextlist, next_instruction);     
            convert_int_bool((yyvsp[-7].expr));                   // Convert expression to bool
            backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-1].expr)->instr);    // backpatching
            (yyval.expr)->nextlist = (yyvsp[-7].expr)->falselist;           // Exit loop if expression is false
        }
#line 4046 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 194: /* jump_statement: GOTO_ IDENTIFIER SEMICOLON  */
#line 1902 "ass6_21CS10057_21CS30058.y"
                                   {

        }
#line 4054 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 195: /* jump_statement: CONTINUE SEMICOLON  */
#line 1905 "ass6_21CS10057_21CS30058.y"
                             {

        }
#line 4062 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 196: /* jump_statement: BREAK SEMICOLON  */
#line 1908 "ass6_21CS10057_21CS30058.y"
                          {

        }
#line 4070 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 197: /* jump_statement: RETURN_ SEMICOLON  */
#line 1911 "ass6_21CS10057_21CS30058.y"
                            {
            if(ST->search_lexeme("RETVAL")->type.type == VOID) {
                add_TAC("", "", "", RETURN);           // generate TAC quad when return type is void
            }
            (yyval.expr) = new expression();
        }
#line 4081 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 198: /* jump_statement: RETURN_ expression SEMICOLON  */
#line 1917 "ass6_21CS10057_21CS30058.y"
                                       {
            if(ST->search_lexeme("RETVAL")->type.type == ST->search_lexeme((yyvsp[-1].expr)->location)->type.type) {
                add_TAC((yyvsp[-1].expr)->location, "", "", RETURN);      // generate TAC quad when return type is not void
            }
            (yyval.expr) = new expression();
        }
#line 4092 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 199: /* translation_unit: external_declaration  */
#line 1926 "ass6_21CS10057_21CS30058.y"
                             {

        }
#line 4100 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 200: /* translation_unit: translation_unit external_declaration  */
#line 1929 "ass6_21CS10057_21CS30058.y"
                                                {

        }
#line 4108 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 201: /* external_declaration: function_definition  */
#line 1935 "ass6_21CS10057_21CS30058.y"
                            {

        }
#line 4116 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 202: /* external_declaration: declaration  */
#line 1938 "ass6_21CS10057_21CS30058.y"
                      {

        }
#line 4124 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 203: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 1944 "ass6_21CS10057_21CS30058.y"
                                                                              {

        }
#line 4132 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 204: /* function_definition: function_prototype compound_statement  */
#line 1947 "ass6_21CS10057_21CS30058.y"
                                                {
            ST = &ST_global;                     // Reset the symbol table to global symbol table
            add_TAC((yyvsp[-1].dec)->name, "", "", FUNC_END);
        }
#line 4141 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 205: /* function_prototype: declaration_specifiers declarator  */
#line 1955 "ass6_21CS10057_21CS30058.y"
                                          {
            data_dtype current_dtype = (yyvsp[-1].dtype);//extract the type of return 
            int current_dsize = -1;
            if(current_dtype == CHAR)
                current_dsize = 1;
            if(current_dtype == INT)
                current_dsize = 4;
            if(current_dtype == FLOAT)
                current_dsize = 8;

            declaration* currDec = (yyvsp[0].dec);
            ST_entry* sym = ST_global.search_lexeme(currDec->name);
            
            if(currDec->type == FUNCTION) {//if the type of declarator is function
                ST_entry* retval = sym->nested_symbol_table->search_lexeme("RETVAL", current_dtype, currDec->pointers);   // Create entry for return value
                sym->size = 0;
                sym->initial_value = NULL;//intialize return value as NULL
            }
            (yyval.dec) = (yyvsp[0].dec);
        }
#line 4166 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 206: /* declaration_list: declaration  */
#line 1978 "ass6_21CS10057_21CS30058.y"
                    {

        }
#line 4174 "ass6_21CS10057_21CS30058.tab.c"
    break;

  case 207: /* declaration_list: declaration_list declaration  */
#line 1981 "ass6_21CS10057_21CS30058.y"
                                       {
            
        }
#line 4182 "ass6_21CS10057_21CS30058.tab.c"
    break;


#line 4186 "ass6_21CS10057_21CS30058.tab.c"

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

#line 1986 "ass6_21CS10057_21CS30058.y"


void yyerror(string s) {
printf("error in Line: %d ( %s )\n" , yylineno, s.c_str());
}
