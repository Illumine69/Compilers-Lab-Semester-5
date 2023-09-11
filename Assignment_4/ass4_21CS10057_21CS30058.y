%{
#include <stdio.h>
extern int yylex();
void yyerror(const char*);
%}


%union {
  int intval;
  float floatval;
  char *charval;
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
%token IDENTIFIER
%token <intval> INTEGER_NO
%token <intval> FLOAT_NO
%token <intval> CHARACTER
%token <intval> STRING
%token <intval> ENUMERATION_CONSTANT
%token PUNCTUATOR
%token WS

%start translation_unit

%%

primary_expression:
          IDENTIFIER
          { printf("primary_expression -> identifier\n"); }
          |INTEGER_NO
           { printf("primary_expression -> constant\n"); }
          |FLOAT_NO
           { printf("primary_expression -> constant\n"); }
          |CHARACTER
           { printf("primary_expression -> constant\n"); }
          |STRING
          { printf("primary_expression -> string-literal\n"); }
          |'(' expression ')'
          { printf("primary_expression -> string-literal\n"); }
          ;

postfix_expression:
          primary_expression
          { printf("postfix_expression -> primary_expression\n"); }
          |postfix_expression '[' expression ']'
          { printf("postfix_expression -> postfix_expression [ expression ]\n"); }
          |postfix_expression '(' argument_expression_list_optional ')'
          { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
            |postfix_expression '.' IDENTIFIER
            { printf("postfix_expression -> postfix_expression . identifier\n"); }
            |postfix_expression RIGHT_ARROW IDENTIFIER
            { printf("postfix_expression -> postfix_expression -> identifier\n"); }
            |postfix_expression INCREMENT
             { printf("postfix_expression -> postfix_expression ++\n"); }
            |postfix_expression DECREMENT
            { printf("postfix_expression -> postfix_expression --\n"); }

            |'(' type_name ')' '{' initializer_list '}'
            { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }
            |'(' type_name ')' '{' initializer_list ',' '}'
             { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
          ;

argument_expression_list_optional:
              argument_expression_list
              |
              ;

argument_expression_list:
            assignment_expression
            { printf("argument_expression_list -> assignment_expression\n"); }
            |argument_expression_list ',' assignment_expression
            { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); } 
            ;

unary_expression:
        postfix_expression
        { printf("unary_expression -> postfix_expression\n"); }
        |INCREMENT unary_expression
        { printf("unary_expression -> ++ unary_expression\n"); }
        |DECREMENT unary_expression
        { printf("unary_expression -> −− unary_expression\n"); }
        |unary_operator cast_expression
        { printf("unary_expression -> unary_operator cast_expression\n"); }
        |SIZEOF unary_expression
        { printf("unary_expression -> sizeof unary_expression\n"); }
        |SIZEOF '(' type_name ')' 
        { printf("unary_expression -> sizeof ( type_name ) \n"); }
        ;          

unary_operator:
        '&'
        { printf("unary_operator -> &\n"); }
        |'*'
        { printf("unary_operator -> *\n"); }
        |'+'
        { printf("unary_operator -> +\n"); }
        |'-'
        { printf("unary_operator -> -\n"); }
        |'~'
        { printf("unary_operator -> ~\n"); }
        |'!'
        { printf("unary_operator -> !\n"); }
        ;

cast_expression:
         unary_expression
         { printf("cast_expression -> unary_expression\n"); }
         |'(' type_name ')' cast_expression
         { printf("cast_expression -> ( type_name ) cast_expression\n"); }
         ;

multplicative_expression:
            cast_expression
            { printf("multiplicative_expression -> cast_expression\n"); }
            |multplicative_expression '*' cast_expression
            { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
            |multplicative_expression '/' cast_expression
            { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
            |multplicative_expression '%' cast_expression
            { printf("multiplicative_expression -> multiplicative_expression modulo cast_expression\n"); }
            ;

additive_expression:
           multplicative_expression
           { printf("additive_expression -> multiplicative_expression\n"); }
           |additive_expression '+' multplicative_expression
            { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
           |additive_expression '-' multplicative_expression
           { printf("additive_expression -> additive_expression − multiplicative_expression\n"); }
           ;

shift_expression:
        additive_expression
        { printf("shift_expression -> additive_expression\n"); }
        |shift_expression LSHIFT additive_expression
        { printf("shift_expression -> shift_expression << additive_expression\n"); }
        |shift_expression RSHIFT additive_expression
        { printf("shift_expression -> shift_expression >> additive_expression\n"); }
        ;

relational_expression:
           shift_expression
           { printf("relational_expression -> shift_expression\n"); }
           |relational_expression '<' shift_expression
           { printf("relational_expression -> relational_expression < shift_expression\n"); }
           |relational_expression '>' shift_expression
            { printf("relational_expression -> relational_expression > shift_expression\n"); }
           |relational_expression LESS_THAN_EQUAL_TO shift_expression
            { printf("relational_expression -> relational_expression <= shift_expression\n"); }
           |relational_expression GREATER_THAN_EQUAL_TO shift_expression
           { printf("relational_expression -> relational_expression >= shift_expression\n"); }
           ;

equality_expression:
           relational_expression
           { printf("equality_expression -> relational_expression\n"); }
           |equality_expression DOUBLE_EQUAL relational_expression
           { printf("equality_expression -> equality_expression == relational_expression\n"); }
           |relational_expression NOT_EQUAL relational_expression
           { printf("equality_expression -> equality_expression ! = relational_expression\n"); }
           ;

AND_expression:
        equality_expression
        { printf("AND_expression -> equality_expression\n"); }
        |AND_expression '&' equality_expression
        { printf("AND_expression -> AND_expression & equality_expression\n");}
        ;

exclusive_OR_expression:
             AND_expression
             { printf("exclusive_OR_expression -> AND_expression\n"); }
             |exclusive_OR_expression '^' AND_expression
             { printf("exclusive_OR_expression -> exclusive_OR_expression ˆ AND_expression\n"); }
             ;

inclusive_OR_expression:
             exclusive_OR_expression
             { printf("inclusive_OR_expression -> exclusive_OR_expression\n"); }
             |inclusive_OR_expression '|' exclusive_OR_expression
             { printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
             ;

logical_AND_expression:
            inclusive_OR_expression
            { printf("logical_AND_expression -> inclusive_OR_expression\n"); }
            |logical_AND_expression BINARY_AND inclusive_OR_expression
             { printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
            ;

logical_OR_expression:
           logical_AND_expression
           { printf("logical_OR_expression -> logical_AND_expression\n"); }
           |logical_OR_expression BINARY_OR logical_AND_expression
            { printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
           ;

conditional_expression:
            logical_OR_expression
            { printf("conditional_expression -> logical_OR_expression\n"); }
            |logical_OR_expression '?' expression ':' conditional_expression
            { printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
            ;

assignment_expression:
           conditional_expression
           { printf("assignment_expression -> conditional_expression\n"); }
           |unary_expression assignment_operator assignment_expression
            { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
           ;

assignment_expression_optional:
             assignment_expression
             |
             ;

assignment_operator:
           '='
           { printf("assignment_operator -> =\n"); }
           |MUL_ASSIGN
           { printf("assignment_operator -> *=\n"); }
           |DIV_ASSIGN
           { printf("assignment_operator -> /=\n"); }
           |MOD_ASSIGN
           { printf("assignment_operator -> modulo =\n"); }
           |ADD_ASSIGN
           { printf("assignment_operator -> +=\n"); }
           |SUB_ASSIGN
           { printf("assignment_operator -> -=\n"); }
           |LSHIFT_ASSIGN
           { printf("assignment_operator -> <<=\n"); }
           |RSHIFT_ASSIGN
           { printf("assignment_operator -> >>=\n"); }
           |AND_ASSIGN
           { printf("assignment_operator -> &=\n"); }
           |XOR_ASSIGN
            { printf("assignment_operator -> ^=\n"); }
           |OR_ASSIGN
           { printf("assignment_operator -> |=\n"); }
           ;             

expression:
      assignment_expression
      { printf("expression -> assignment_expression\n"); }
      |expression ',' assignment_expression
      { printf("expression -> expression , assignment_expression\n"); }
      ;
       
constant_expression:
           conditional_expression
           { printf("constant_expression -> conditional_expression\n"); }
           ;

expression_optional:
        expression
        |
        ;

declaration:
       declaration_specifiers init_declarator_list_optional ';'
       { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
       ;

declaration_specifiers:
            storage_class_specifier declaration_specifiers_optional
            { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
            |type_specifier declaration_specifiers_optional
            { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
            |type_qualifier declaration_specifiers_optional
            { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
            |function_specifier declaration_specifiers_optional
            { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
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
        { printf("init_declarator_list -> init_declarator\n"); }
        |init_declarator_list ',' init_declarator
        { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
        ;

init_declarator:
         declarator
         { printf("init_declarator -> declarator\n"); }
         |declarator '=' initializer
         { printf("init_declarator -> declarator = initializer\n"); }
         ;

storage_class_specifier:
             EXTERN
             { printf("storage_class_specifier -> extern\n"); }
             |STATIC
             { printf("storage_class_specifier -> static\n"); }
             |AUTO
             { printf("storage_class_specifier -> auto\n"); }
             |REGISTER
             { printf("storage_class_specifier -> register\n"); }
             ;

type_specifier:
        VOID
        { printf("type_specifier -> void\n"); }
        |CHAR
        { printf("type_specifier -> char\n"); }
        |SHORT
        { printf("type_specifier -> short\n"); }
        |INT
        { printf("type_specifier -> int\n"); }
        |LONG
        { printf("type_specifier -> long\n"); }
        |FLOAT
        { printf("type_specifier -> float\n"); }
        |DOUBLE
        { printf("type_specifier -> float\n"); }
        |SIGNED
        { printf("type_specifier -> signed\n"); }
        |UNSIGNED
        { printf("type_specifier -> unsigned\n"); }
        |BOOL
        { printf("type_specifier -> bool\n"); }
        |COMPLEX
        { printf("type_specifier -> complex\n"); }
        |IMAGINARY
        { printf("type_specifier -> imaginary\n"); }
        |enum_specifier
        { printf("type_specifier -> enum_specifier\n"); }
        ;

specifier_qualifier_list:
            type_specifier specifier_qualifier_list_optional
            { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
            |type_qualifier specifier_qualifier_list_optional
            { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
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
        |RESTRICT
        |VOLATILE
        ;

function_specifier:
          INLINE
          ;

declarator:
      pointer_optional direct_declarator
      ;

direct_declarator:
           IDENTIFIER
           |'(' declarator ')'
           |direct_declarator '[' type_qualifier_list_optional assignment_expression_optional ']'
           |direct_declarator '[' STATIC type_qualifier_list_optional assignment_expression ']'
           |direct_declarator '[' type_qualifier_list_optional '*' ']'
           |direct_declarator '(' parameter_type_list ')'
           |direct_declarator '(' identifier_list_optional ')'
           ;

pointer:
     '*' type_qualifier_list_optional
     |'*' type_qualifier_list_optional pointer
     ;

pointer_optional:
       pointer
       |
       ;

type_qualifier_list:
           type_qualifier
           |type_qualifier_list type_qualifier
           ;

type_qualifier_list_optional:
             type_qualifier_list
             |
             ;

parameter_type_list:
           parameter_list
           |parameter_list ',' ELLIPSIS
           ;

parameter_list:
        parameter_declaration
        |parameter_list ',' parameter_declaration
        ;

parameter_declaration:
           declaration_specifiers declarator
           |declaration_specifiers
           ;

identifier_list:
         IDENTIFIER
         |identifier_list ',' IDENTIFIER
         ;

identifier_list_optional:
           identifier_list
           |
           ;

type_name:
     specifier_qualifier_list
     ;

initializer:
       assignment_expression
       |'{' initializer_list '}'
       |'{' initializer_list ',' '}'
       ;

initializer_list:
        designation_optional initializer
        |initializer_list ',' designation_optional initializer
        ;

designation:
       designator_list '='
       { printf("designation -> designator_list =\n"); }
       ;

designation_optional:
       designation
       |
       ;

designator_list:
         designator 
         { printf("designator_list -> designator\n"); }
         |designator_list designator
         { printf("designator_list -> designator_list designator\n"); }
         ;

designator:
      '[' constant_expression ']'
      { printf("designator -> [ constant_expression ]\n"); }
      |'.' IDENTIFIER
      { printf("designator -> . identifier\n"); }
      ;

statement:
     labeled_statement
     { printf("statement -> labeled_statement\n"); }
     |compound_statement
     { printf("statement -> compound_statement\n"); }
     |expression_statement
     { printf("statement -> expression_statement\n"); }
     |selection_statement
     { printf("statement -> selection_statement\n"); }
     |iteration_statement
     { printf("statement -> iteration_statement\n"); }
     |jump_statement
     { printf("statement -> jump_statement\n"); }
     ;

labeled_statement:
         IDENTIFIER ':' statement
         { printf("labeled_statement -> identifier : statement\n"); }
         |CASE constant_expression ':' statement
         { printf("labeled_statement -> case constant_expression : statement\n"); }
         |DEFAULT ':' statement
         { printf("labeled_statement -> default : statement\n"); }
         ;

compound_statement:
          '{' block_item_list_optional '}'
          { printf("compound_statement -> { block_item_list_opt }\n"); }
          ;

block_item_list:
         block_item 
         { printf("block_item_list -> block_item\n"); }
         |block_item_list block_item
         { printf("block_item_list -> block_item_list block_item\n"); }
         ;

block_item_list_optional:
           block_item_list
           |
           ;

block_item:
      declaration
      { printf("block_item -> declaration\n"); }
      |statement
      { printf("block_item -> statement\n"); }
      ;

expression_statement:
          expression_optional ';'
          { printf("expression_statement-> expression_opt ;\n"); }
          ;

selection_statement:
           IF '(' expression ')' statement
           { printf("selection_statement -> if ( expression ) statement\n"); }
           |IF '(' expression ')' statement ELSE statement
           { printf("selection_statement -> if ( expression ) statement else statement\n"); }
           |SWITCH '(' expression ')' statement
           { printf("selection_statement -> switch ( expression ) statement\n"); }
           ;

iteration_statement:
           WHILE '(' expression ')' statement
           { printf("iteration_statement -> while ( expression ) statement\n"); }
           |DO statement WHILE '(' expression ')' ';'
           { printf("iteration_statement -> do statement while ( expression ) ;\n"); }
           |FOR '(' expression_optional ';' expression_optional ';' expression_optional ')' statement 
           { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
           |FOR '(' declaration expression_optional ';' expression_optional ')' statement
           { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
           ;

jump_statement:
        GOTO IDENTIFIER ';'
        { printf("jump_statement -> goto identifier ;\n"); }
        |CONTINUE ';'
        { printf("jump_statement -> continue ;\n"); }
        |BREAK ';'
        { printf("jump_statement -> break ;\n"); }
        |RETURN expression_optional ';'
        { printf("jump_statement -> return expression_opt ;\n"); }
        ;

translation_unit:
        external_declaration
        { printf("translation_unit -> external_declaration\n"); }
        |translation_unit external_declaration
        { printf("translation_unit -> external_declaration\n"); }
        ;

external_declaration:
          function_definition
          { printf("external_declaration -> function_definition\n"); }
          |declaration
          { printf("external_declaration -> declaration\n"); }
          ;

function_definition:
           declaration_specifiers declarator declaration_list_optional 
            { printf("function_definition -> declaration_specifiers declarator declaration_list_opt \n"); }
           compound_statement
            { printf("function_definition -> compound_statement\n"); }
           ;

declaration_list:
        declaration
        { printf("declaration_list -> declaration\n"); }
        |declaration_list declaration
        { printf("declaration_list -> declaration_list declaration\n"); }
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
