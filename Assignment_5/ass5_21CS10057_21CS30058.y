/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 4: Parser for tinyC
File: yacc file
*/

%{
#include <stdio.h>
extern int yylineno;
void yyerror(const char*);
void printinfo(char*);
extern "C" int yylex();
%}

%union {

  int instr;
  sym* symp;
  int intval;
  char* charval;
  symtype* symtp;
  expr* E;
  statement* Stmt;
  array1* Arr;
  char unaryOperator;
}

%token RIGHT_ARROW
%token INCREMENT
%token DECREMENT
%token LSHIFT
%token RSHIFT
%token LESS_THAN_EQUAL_TO
%token GREATER_THAN_EQUAL_TO
%token DOUBLE_EQUAL
%token NOT_EQUAL
%token BINARY_AND
%token BINARY_OR
%token ELLIPSIS
%token MUL_ASSIGN
%token DIV_ASSIGN
%token MOD_ASSIGN
%token ADD_ASSIGN
%token SUB_ASSIGN
%token LSHIFT_ASSIGN
%token RSHIFT_ASSIGN
%token AND_ASSIGN
%token XOR_ASSIGN
%token OR_ASSIGN
%token AUTO
%token BREAK 
%token CASE 
%token CHAR
%token CONST 
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INLINE
%token INT
%token LONG
%token REGISTER
%token RESTRICT
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token TYPEDEF
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE
%token WHILE
%token BOOL
%token COMPLEX
%token IMAGINARY
%token COMMENT_MULTI
%token COMMENT_SINGLE
%token <symp> IDENTIFIER
%token <intval> INTEGER_NO
%token <charval> FLOAT_NO STRING CHARACTER ENUMERATION_CONSTANT 
%token PUNCTUATOR
%token WS

%start translation_unit

%right THEN ELSE



%type <intval> argumentExpressionList

%type <unaryOperator> unary_operator
%type <symp> constant initializer
%type <symp> direct_declarator init_declarator declarator
%type <symtp> pointer

//Auxillary non terminals M and N
%type <instr> M
%type <Stmt> N

//Array to be used later
%type <Arr> postfix_expression
        unary_expression
        cast_expression


//Statements
%type <Stmt>  statement
        labeled_statement 
        compound_statement
        selection_statement
        iteration_statement
        jump_statement
        block_item
        block_item_list

%type <E>
        expression
        primary_expression 
        multiplicative_expression
        additive_expression
        shift_expression
        relational_expression
        equality_expression
        AND_expression
        exclusive_OR_expression
        inclusive_OR_expression
        logical_AND_expression
        logical_OR_expression
        conditional_expression
        assignment_expression
        expression_statement





















%%

primary_expression:
          IDENTIFIER
          { printinfo("primary_expression -> identifier\n"); }
          |INTEGER_NO
           { printinfo("primary_expression -> constant\n"); }
          |FLOAT_NO
           { printinfo("primary_expression -> constant\n"); }
          |CHARACTER
           { printinfo("primary_expression -> constant\n"); }
          |STRING
          { printinfo("primary_expression -> string-literal\n"); }
          |'(' expression ')'
          { printinfo("primary_expression -> string-literal\n"); }
          ;

postfix_expression:
          primary_expression
          { printinfo("postfix_expression -> primary_expression\n"); }
          |postfix_expression '[' expression ']'
          { printinfo("postfix_expression -> postfix_expression [ expression ]\n"); }
          |postfix_expression '(' argument_expression_list_optional ')'
          { printinfo("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
            |postfix_expression '.' IDENTIFIER
            { printinfo("postfix_expression -> postfix_expression . identifier\n"); }
            |postfix_expression RIGHT_ARROW IDENTIFIER
            { printinfo("postfix_expression -> postfix_expression -> identifier\n"); }
            |postfix_expression INCREMENT
             { printinfo("postfix_expression -> postfix_expression ++\n"); }
            |postfix_expression DECREMENT
            { printinfo("postfix_expression -> postfix_expression --\n"); }
            |'(' type_name ')' '{' initializer_list '}'
            { printinfo("postfix_expression -> ( type_name ) { initializer_list }\n"); }
            |'(' type_name ')' '{' initializer_list ',' '}'
             { printinfo("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
          ;

argument_expression_list_optional:
              argument_expression_list
              |
              ;

argument_expression_list:
            assignment_expression
            { printinfo("argument_expression_list -> assignment_expression\n"); }
            |argument_expression_list ',' assignment_expression
            { printinfo("argument_expression_list -> argument_expression_list , assignment_expression\n"); } 
            ;

unary_expression:
        postfix_expression
        { printinfo("unary_expression -> postfix_expression\n"); }
        |INCREMENT unary_expression
        { printinfo("unary_expression -> ++ unary_expression\n"); }
        |DECREMENT unary_expression
        { printinfo("unary_expression -> −− unary_expression\n"); }
        |unary_operator cast_expression
        { printinfo("unary_expression -> unary_operator cast_expression\n"); }
        |SIZEOF unary_expression
        { printinfo("unary_expression -> sizeof unary_expression\n"); }
        |SIZEOF '(' type_name ')' 
        { printinfo("unary_expression -> sizeof ( type_name ) \n"); }
        ;          

unary_operator:
        '&'
        { printinfo("unary_operator -> &\n"); }
        |'*'
        { printinfo("unary_operator -> *\n"); }
        |'+'
        { printinfo("unary_operator -> +\n"); }
        |'-'
        { printinfo("unary_operator -> -\n"); }
        |'~'
        { printinfo("unary_operator -> ~\n"); }
        |'!'
        { printinfo("unary_operator -> !\n"); }
        ;

cast_expression:
         unary_expression
         { printinfo("cast_expression -> unary_expression\n"); }
         |'(' type_name ')' cast_expression
         { printinfo("cast_expression -> ( type_name ) cast_expression\n"); }
         ;

multplicative_expression:
            cast_expression
            { printinfo("multiplicative_expression -> cast_expression\n"); }
            |multplicative_expression '*' cast_expression
            { printinfo("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
            |multplicative_expression '/' cast_expression
            { printinfo("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
            |multplicative_expression '%' cast_expression
            { printinfo("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); }
            ;

additive_expression:
           multplicative_expression
           { printinfo("additive_expression -> multiplicative_expression\n"); }
           |additive_expression '+' multplicative_expression
            { printinfo("additive_expression -> additive_expression + multiplicative_expression\n"); }
           |additive_expression '-' multplicative_expression
           { printinfo("additive_expression -> additive_expression − multiplicative_expression\n"); }
           ;

shift_expression:
        additive_expression
        { printinfo("shift_expression -> additive_expression\n"); }
        |shift_expression LSHIFT additive_expression
        { printinfo("shift_expression -> shift_expression << additive_expression\n"); }
        |shift_expression RSHIFT additive_expression
        { printinfo("shift_expression -> shift_expression >> additive_expression\n"); }
        ;

relational_expression:
           shift_expression
           { printinfo("relational_expression -> shift_expression\n"); }
           |relational_expression '<' shift_expression
           { printinfo("relational_expression -> relational_expression < shift_expression\n"); }
           |relational_expression '>' shift_expression
            { printinfo("relational_expression -> relational_expression > shift_expression\n"); }
           |relational_expression LESS_THAN_EQUAL_TO shift_expression
            { printinfo("relational_expression -> relational_expression <= shift_expression\n"); }
           |relational_expression GREATER_THAN_EQUAL_TO shift_expression
           { printinfo("relational_expression -> relational_expression >= shift_expression\n"); }
           ;

equality_expression:
           relational_expression
           { printinfo("equality_expression -> relational_expression\n"); }
           |equality_expression DOUBLE_EQUAL relational_expression
           { printinfo("equality_expression -> equality_expression == relational_expression\n"); }
           |relational_expression NOT_EQUAL relational_expression
           { printinfo("equality_expression -> equality_expression ! = relational_expression\n"); }
           ;

AND_expression:
        equality_expression
        { printinfo("AND_expression -> equality_expression\n"); }
        |AND_expression '&' equality_expression
        { printinfo("AND_expression -> AND_expression & equality_expression\n");}
        ;

exclusive_OR_expression:
             AND_expression
             { printinfo("exclusive_OR_expression -> AND_expression\n"); }
             |exclusive_OR_expression '^' AND_expression
             { printinfo("exclusive_OR_expression -> exclusive_OR_expression ˆ AND_expression\n"); }
             ;

inclusive_OR_expression:
             exclusive_OR_expression
             { printinfo("inclusive_OR_expression -> exclusive_OR_expression\n"); }
             |inclusive_OR_expression '|' exclusive_OR_expression
             { printinfo("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
             ;

logical_AND_expression:
            inclusive_OR_expression
            { printinfo("logical_AND_expression -> inclusive_OR_expression\n"); }
            |logical_AND_expression BINARY_AND inclusive_OR_expression
             { printinfo("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
            ;

logical_OR_expression:
           logical_AND_expression
           { printinfo("logical_OR_expression -> logical_AND_expression\n"); }
           |logical_OR_expression BINARY_OR logical_AND_expression
            { printinfo("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
           ;

conditional_expression:
            logical_OR_expression
            { printinfo("conditional_expression -> logical_OR_expression\n"); }
            |logical_OR_expression '?' expression ':' conditional_expression
            { printinfo("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
            ;

assignment_expression:
           conditional_expression
           { printinfo("assignment_expression -> conditional_expression\n"); }
           |unary_expression assignment_operator assignment_expression
            { printinfo("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
           ;

assignment_expression_optional:
             assignment_expression
             |
             ;

assignment_operator:
           '='
           { printinfo("assignment_operator -> =\n"); }
           |MUL_ASSIGN
           { printinfo("assignment_operator -> *=\n"); }
           |DIV_ASSIGN
           { printinfo("assignment_operator -> /=\n"); }
           |MOD_ASSIGN
           { printinfo("assignment_operator -> %%=\n"); }
           |ADD_ASSIGN
           { printinfo("assignment_operator -> +=\n"); }
           |SUB_ASSIGN
           { printinfo("assignment_operator -> -=\n"); }
           |LSHIFT_ASSIGN
           { printinfo("assignment_operator -> <<=\n"); }
           |RSHIFT_ASSIGN
           { printinfo("assignment_operator -> >>=\n"); }
           |AND_ASSIGN
           { printinfo("assignment_operator -> &=\n"); }
           |XOR_ASSIGN
            { printinfo("assignment_operator -> ^=\n"); }
           |OR_ASSIGN
           { printinfo("assignment_operator -> |=\n"); }
           ;             

expression:
      assignment_expression
      { printinfo("expression -> assignment_expression\n"); }
      |expression ',' assignment_expression
      { printinfo("expression -> expression , assignment_expression\n"); }
      ;
       
constant_expression:
           conditional_expression
           { printinfo("constant_expression -> conditional_expression\n"); }
           ;

expression_optional:
        expression
        |
        ;

declaration:
       declaration_specifiers init_declarator_list_optional ';'
       { printinfo("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
       ;

declaration_specifiers:
            storage_class_specifier declaration_specifiers_optional
            { printinfo("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
            |type_specifier declaration_specifiers_optional
            { printinfo("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
            |type_qualifier declaration_specifiers_optional
            { printinfo("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
            |function_specifier declaration_specifiers_optional
            { printinfo("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
            ;

declaration_specifiers_optional:
              declaration_specifiers
              |
              ;

init_declarator_list_optional:
            init_declarator_list
            |
            ;

init_declarator_list:
        init_declarator 
        { printinfo("init_declarator_list -> init_declarator\n"); }
        |init_declarator_list ',' init_declarator
        { printinfo("init_declarator_list -> init_declarator_list , init_declarator\n"); }
        ;

init_declarator:
         declarator
         { printinfo("init_declarator -> declarator\n"); }
         |declarator '=' initializer
         { printinfo("init_declarator -> declarator = initializer\n"); }
         ;

storage_class_specifier:
             EXTERN
             { printinfo("storage_class_specifier -> extern\n"); }
             |STATIC
             { printinfo("storage_class_specifier -> static\n"); }
             |AUTO
             { printinfo("storage_class_specifier -> auto\n"); }
             |REGISTER
             { printinfo("storage_class_specifier -> register\n"); }
             ;

type_specifier:
        VOID
        { printinfo("type_specifier -> void\n"); }
        |CHAR
        { printinfo("type_specifier -> char\n"); }
        |SHORT
        { printinfo("type_specifier -> short\n"); }
        |INT
        { printinfo("type_specifier -> int\n"); }
        |LONG
        { printinfo("type_specifier -> long\n"); }
        |FLOAT
        { printinfo("type_specifier -> float\n"); }
        |DOUBLE
        { printinfo("type_specifier -> float\n"); }
        |SIGNED
        { printinfo("type_specifier -> signed\n"); }
        |UNSIGNED
        { printinfo("type_specifier -> unsigned\n"); }
        |BOOL
        { printinfo("type_specifier -> bool\n"); }
        |COMPLEX
        { printinfo("type_specifier -> complex\n"); }
        |IMAGINARY
        { printinfo("type_specifier -> imaginary\n"); }
        |enum_specifier
        { printinfo("type_specifier -> enum_specifier\n"); }
        ;

specifier_qualifier_list:
            type_specifier specifier_qualifier_list_optional
            { printinfo("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
            |type_qualifier specifier_qualifier_list_optional
            { printinfo("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
            ;

specifier_qualifier_list_optional:
              specifier_qualifier_list
              |
              ;

enum_specifier:
        ENUM identifier_optional '{' enumerator_list '}'
        |ENUM identifier_optional '{' enumerator_list ',' '}'
        |ENUM IDENTIFIER
        ;

enumerator_list:
         ENUM
         |enumerator_list ',' enumerator
         ;

enumerator:
      IDENTIFIER
      |IDENTIFIER '=' constant_expression
      ;

type_qualifier:
        CONST
        { printinfo("type_qualifier -> const\n"); }
        |RESTRICT
        { printinfo("type_qualifier -> restrict\n"); }
        |VOLATILE
        { printinfo("type_qualifier -> volatile\n"); }
        ;

function_specifier:
          INLINE
          { printinfo("function_specifier -> inline\n"); }
          ;

declarator:
      pointer_optional direct_declarator
      { printinfo("declarator -> pointer_opt direct_declarator\n"); }
      ;

direct_declarator:
           IDENTIFIER
           { printinfo("direct_declarator -> identifier\n"); }
           |'(' declarator ')'
           { printinfo("direct_declarator -> ( declarator )\n"); }
           |direct_declarator '[' type_qualifier_list_optional 
           assignment_expression_optional ']'
           { printinfo("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
           |direct_declarator '[' STATIC type_qualifier_list_optional assignment_expression ']'
           { printinfo("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }
           |direct_declarator '[' type_qualifier_list_optional '*' ']'
           { printinfo("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
           |direct_declarator '(' parameter_type_list ')'
           { printinfo("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
           |direct_declarator '(' identifier_list_optional ')'
           { printinfo("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
           ;

pointer:
     '*' type_qualifier_list_optional
     { printinfo("pointer -> * type_qualifier_list_opt\n"); }
     |'*' type_qualifier_list_optional pointer
     { printinfo("pointer -> * type_qualifier_list_opt pointer\n"); }
     ;

pointer_optional:
       pointer
       |
       ;

type_qualifier_list:
           type_qualifier
           { printinfo("type_qualifier_list -> type_qualifier\n"); }
           |type_qualifier_list type_qualifier
           { printinfo("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
           ;

type_qualifier_list_optional:
             type_qualifier_list
             |
             ;

parameter_type_list:
           parameter_list
           { printinfo("parameter_type_list -> parameter_list\n"); }
           |parameter_list ',' ELLIPSIS
           { printinfo("parameter_type_list -> parameter_list , ...\n"); }
           ;

parameter_list:
        parameter_declaration
        { printinfo("parameter_list -> parameter_declaration\n"); }
        |parameter_list ',' parameter_declaration
        { printinfo("parameter_list -> parameter_list , parameter_declaration\n"); }
        ;

parameter_declaration:
           declaration_specifiers declarator
           { printinfo("parameter_declaration -> declaration_specifiers declarator\n"); }
           |declaration_specifiers
           { printinfo("parameter_declaration -> declaration_specifiers\n"); }
           ;

identifier_list:
         IDENTIFIER
         { printinfo("type_name -> specifier_qualifier_list\n"); }

         |identifier_list ',' IDENTIFIER
         { printinfo("identifier_list -> identifier_list , identifier\n"); }
         ;

identifier_list_optional:
           identifier_list
           |
           ;

type_name:
     specifier_qualifier_list
     { printinfo("type_name -> specifier_qualifier_list\n"); }
     ;

initializer:
       assignment_expression
       { printinfo("initializer -> assignment_expression\n"); }
       |'{' initializer_list '}'
       { printinfo("initializer -> { initializer_list }\n"); }
       |'{' initializer_list ',' '}'
       { printinfo("initializer -> { initializer_list , }\n"); }
       ;

initializer_list:
        designation_optional initializer
        { printinfo("initializer_list -> designation_opt initializer\n"); }
        |initializer_list ',' designation_optional initializer
        { printinfo("initializer_list -> initializer_list , designation_opt initializer\n"); }
        ;

designation:
       designator_list '='
       { printinfo("designation -> designator_list =\n"); }
       ;

designation_optional:
       designation
       |
       ;

designator_list:
         designator 
         { printinfo("designator_list -> designator\n"); }
         |designator_list designator
         { printinfo("designator_list -> designator_list designator\n"); }
         ;

designator:
      '[' constant_expression ']'
      { printinfo("designator -> [ constant_expression ]\n"); }
      |'.' IDENTIFIER
      { printinfo("designator -> . identifier\n"); }
      ;

statement:
     labeled_statement
     { printinfo("statement -> labeled_statement\n"); }
     |compound_statement
     { printinfo("statement -> compound_statement\n"); }
     |expression_statement
     { printinfo("statement -> expression_statement\n"); }
     |selection_statement
     { printinfo("statement -> selection_statement\n"); }
     |iteration_statement
     { printinfo("statement -> iteration_statement\n"); }
     |jump_statement
     { printinfo("statement -> jump_statement\n"); }
     ;

labeled_statement:
         IDENTIFIER ':' statement
         { printinfo("labeled_statement -> identifier : statement\n"); }
         |CASE constant_expression ':' statement
         { printinfo("labeled_statement -> case constant_expression : statement\n"); }
         |DEFAULT ':' statement
         { printinfo("labeled_statement -> default : statement\n"); }
         ;

compound_statement:
          '{' block_item_list_optional '}'
          { printinfo("compound_statement -> { block_item_list_opt }\n"); }
          ;

block_item_list:
         block_item 
         { printinfo("block_item_list -> block_item\n"); }
         |block_item_list block_item
         { printinfo("block_item_list -> block_item_list block_item\n"); }
         ;

block_item_list_optional:
           block_item_list
           |
           ;

block_item:
      declaration
      { printinfo("block_item -> declaration\n"); }
      |statement
      { printinfo("block_item -> statement\n"); }
      ;

expression_statement:
          expression_optional ';'
          { printinfo("expression_statement-> expression_opt ;\n"); }
          ;

selection_statement:
           IF '(' expression ')' statement
           { printinfo("selection_statement -> if ( expression ) statement\n"); }
           |IF '(' expression ')' statement ELSE statement
           { printinfo("selection_statement -> if ( expression ) statement else statement\n"); }
           |SWITCH '(' expression ')' statement
           { printinfo("selection_statement -> switch ( expression ) statement\n"); }
           ;

iteration_statement:
           WHILE '(' expression ')' statement
           { printinfo("iteration_statement -> while ( expression ) statement\n"); }
           |DO statement WHILE '(' expression ')' ';'
           { printinfo("iteration_statement -> do statement while ( expression ) ;\n"); }
           |FOR '(' expression_optional ';' expression_optional ';' expression_optional ')' statement 
           { printinfo("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
           |FOR '(' declaration expression_optional ';' expression_optional ')' statement
           { printinfo("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
           ;

jump_statement:
        GOTO IDENTIFIER ';'
        { printinfo("jump_statement -> goto identifier ;\n"); }
        |CONTINUE ';'
        { printinfo("jump_statement -> continue ;\n"); }
        |BREAK ';'
        { printinfo("jump_statement -> break ;\n"); }
        |RETURN expression_optional ';'
        { printinfo("jump_statement -> return expression_opt ;\n"); }
        ;

translation_unit:
        external_declaration
        { printinfo("translation_unit -> external_declaration\n"); }
        |translation_unit external_declaration
        { printinfo("translation_unit -> external_declaration\n"); }
        ;

external_declaration:
        function_definition
        { printinfo("external_declaration -> function_definition\n"); }
        |declaration
        { printinfo("external_declaration -> declaration\n"); }
        ;

function_definition:
        declaration_specifiers declarator declaration_list_optional compound_statement
        { printinfo("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
        ;

declaration_list:
        declaration
        { printinfo("declaration_list -> declaration\n"); }
        |declaration_list declaration
        { printinfo("declaration_list -> declaration_list declaration\n"); }
        ;

declaration_list_optional:
        declaration_list
        |
        ;

identifier_optional:
        IDENTIFIER
        |
        ;
%%

void yyerror(const char *s) {
        printf("Error occured : %s\n",s);
}

void printinfo(char* s) {
        printf("Line %d: %s",yylineno,s);
}
