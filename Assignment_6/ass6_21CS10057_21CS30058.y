/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 5: Machine Independent Code Generator for tinyC
File: yacc file
*/

%{
#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <sstream>
#include <cstdlib>
#include "ass6_21CS10057_21CS30058_translator.h"
extern int yylineno;
void yyerror(const char*);
void printinfo(char*);
extern "C" int yylex();
extern string Type;
using namespace std;


%}

%union {
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

%type <intval> argument_expression_list

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
%type <Stmt>  
        statement
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
        multplicative_expression
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



constant
        :INTEGER_NO {
        stringstream STring;
    STring << $1;
        int zero = 0;
    string TempString = STring.str();
    char* Int_STring = (char*) TempString.c_str();
        string str = string(Int_STring);
        int one = 1;
        $$ = gentemp(new symtype("INTEGER"), str);
        emit("EQUAL", $$->name, $1);
        }
        |FLOAT_NO {
        int zero = 0;
        int one = 1;
        $$ = gentemp(new symtype("DOUBLE"), string($1));
        emit("EQUAL", $$->name, string($1));
        }
        |ENUMERATION_CONSTANT  {//later
        }
        |CHARACTER {
        int zero = 0;   
        int one = 1;
        $$ = gentemp(new symtype("CHAR"),$1);
        emit("EQUAL", $$->name, string($1));
        }
        ;


primary_expression:
           IDENTIFIER {
        $$ = new expr();
        $$->loc = $1;
        int zero = 0;   
        int one = 1;
        $$->type = "NONBOOL";
        }
        | constant {
        $$ = new expr();
        int zero = 0;   
        int one = 1;
        $$->loc = $1;
        }
        | STRING {
        $$ = new expr();
        symtype* tmp = new symtype("PTR");
        int zero = 0;   
        int one = 1;
        $$->loc = gentemp(tmp, $1);
        $$->loc->type->ptr = new symtype("CHAR");
        }
        | '(' expression ')' {
        int zero = 0;   
        int one = 1;
        $$ = $2;
        }

postfix_expression:
          primary_expression
          { //printinfo("postfix_expression -> primary_expression\n");
                $$ = new array1 ();
                $$->array1 = $1->loc;
                $$->loc = $$->array1;
                $$->type = $1->loc->type;

           }
          |postfix_expression '[' expression ']'
          { //printinfo("postfix_expression -> postfix_expression [ expression ]\n"); 

                $$ = new array1 ();
                $$->array1 = $1->loc;
                int zero = 0;   
                int one = 1;
                $$->loc = $$->array1;
                $$->type = $1->loc->type;

          }

          |postfix_expression '('  ')'
          {}
          |postfix_expression '(' argument_expression_list ')'
          { //printinfo("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); 
                 $$ = new array1();
                $$->array1 = gentemp($1->type);
               
                $$ = new array1();
                $$->array1 = gentemp($1->type);
                stringstream STring;
            STring <<$3;
            string TempString = STring.str();
                int zero = 0;   
                int one = 1;
            char* Int_STring = (char*) TempString.c_str();
                string str = string(Int_STring);                
                emit("CALL", $$->array1->name, $1->array1->name, str);               
                emit("CALL", $$->array1->name, $1->array1->name, str);

          }
            |postfix_expression '.' IDENTIFIER
            { //printinfo("postfix_expression -> postfix_expression . identifier\n");
             }
            |postfix_expression RIGHT_ARROW IDENTIFIER
            { //printinfo("postfix_expression -> postfix_expression -> identifier\n"); 
            }
            |postfix_expression INCREMENT
             { //printinfo("postfix_expression -> postfix_expression ++\n"); 

                $$ = new array1();
                int zero = 0;   
                int one = 1;
                // copy $1 to $$
                $$->array1 = gentemp($1->array1->type);
                emit ("EQUAL", $$->array1->name, $1->array1->name);

                // Increment $1
                emit ("ADD", $1->array1->name, $1->array1->name, "1");

             }
            |postfix_expression DECREMENT
            { //printinfo("postfix_expression -> postfix_expression --\n");

                $$ = new array1();

                // copy $1 to $$
                $$->array1 = gentemp($1->array1->type);
                emit ("EQUAL", $$->array1->name, $1->array1->name);
                int zero = 0;   
                int one = 1;
                // Decrement $1
                emit ("SUB", $1->array1->name, $1->array1->name, "1");

             }
            |'(' type_name ')' '{' initializer_list '}'
            { //printinfo("postfix_expression -> ( type_name ) { initializer_list }\n");

                $$ = new array1();
                int zero = 0;   
                int one = 1;
                $$->array1 = gentemp(new symtype("INTEGER"));
                $$->loc = gentemp(new symtype("INTEGER"));

             }
            |'(' type_name ')' '{' initializer_list ',' '}'
             { //printinfo("postfix_expression -> ( type_name ) { initializer_list , }\n"); 

             $$ = new array1();
                int zero = 0;   
                int one = 1;
                $$->array1 = gentemp(new symtype("INTEGER"));
                $$->loc = gentemp(new symtype("INTEGER"));


             }
          ;

argument_expression_list_optional:
              argument_expression_list
              |
              ;

argument_expression_list:
            assignment_expression
            { //printinfo("argument_expression_list -> assignment_expression\n");
                emit ("PARAM", $1->loc->name);
                $$ = 1;

             }
            |argument_expression_list ',' assignment_expression
            { //printinfo("argument_expression_list -> argument_expression_list , assignment_expression\n"); 
                emit ("PARAM", $3->loc->name);
                $$ = $1+1;

            } 
            ;

unary_expression:
        postfix_expression
        { //printinfo("unary_expression -> postfix_expression\n"); 
        $$ = $1;

        }
        |INCREMENT unary_expression
        { //printinfo("unary_expression -> ++ unary_expression\n");
                // Increment $2
                emit ("ADD", $2->array1->name, $2->array1->name, "1");
                int zero = 0;   
                int one = 1;
                // Use the same value as $2
                $$ = $2;

         }
        |DECREMENT unary_expression
        { //printinfo("unary_expression -> −− unary_expression\n"); 
        // Decrement $2
                emit ("SUB", $2->array1->name, $2->array1->name, "1");
                int zero = 0;   
                int one = 1;
                // Use the same value as $2
                $$ = $2;

        }
        |unary_operator cast_expression
        { //printinfo("unary_expression -> unary_operator cast_expression\n");
        $$ = new array1();
                int zero = 0;   
                int one = 1;
                switch ($1) {
                        case '&':
                                $$->array1 = gentemp((new symtype("PTR")));
                                $$->array1->type->ptr = $2->array1->type; 
                                emit ("ADDRESS", $$->array1->name, $2->array1->name);
                                break;
                        case '*':
                                $$->cat = "PTR";
                                $$->loc = gentemp ($2->array1->type->ptr);
                                emit ("PTRR", $$->loc->name, $2->array1->name);
                                $$->array1 = $2->array1;
                                break;
                        case '+':
                                $$ = $2;
                                break;
                        case '-':
                                $$->array1 = gentemp(new symtype($2->array1->type->type));
                                emit ("UMINUS", $$->array1->name, $2->array1->name);
                                break;
                        case '~':
                                $$->array1 = gentemp(new symtype($2->array1->type->type));
                                emit ("BNOT", $$->array1->name, $2->array1->name);
                                break;
                        case '!':
                                $$->array1 = gentemp(new symtype($2->array1->type->type));
                                emit ("LNOT", $$->array1->name, $2->array1->name);
                                break;
                        default:
                                break;
                }

        }
        |SIZEOF unary_expression
        { //printinfo("unary_expression -> sizeof unary_expression\n"); 
        }
        |SIZEOF '(' type_name ')' 
        { //printinfo("unary_expression -> sizeof ( type_name ) \n"); 
        }
        ;          

unary_operator:
        '&'
        { //printinfo("unary_operator -> &\n");

           $$ = '&';

         }
        |'*'
        { //printinfo("unary_operator -> *\n"); 
        $$ = '*';

        }
        |'+'
        { //printinfo("unary_operator -> +\n"); 
        $$ = '+';

        }
        |'-'
        { //printinfo("unary_operator -> -\n");

          $$ = '-';

         }
        |'~'
        { //printinfo("unary_operator -> ~\n"); 
        $$ = '~';

        }
        |'!'
        { //printinfo("unary_operator -> !\n"); 
                $$ = '!';


        }
        ;

cast_expression:
         unary_expression
         { //printinfo("cast_expression -> unary_expression\n");

                $$=$1;

          }
         |'(' type_name ')' cast_expression
         { //printinfo("cast_expression -> ( type_name ) cast_expression\n"); 

                $$=$4;

         }
         ;

multplicative_expression:
            cast_expression
            { //printinfo("multiplicative_expression -> cast_expression\n");

                $$ = new expr();
                int zero = 0;   
                int one = 1;
                if ($1->cat=="ARR") { // Array
                        $$->loc = gentemp($1->loc->type);
                        int two = 2;    
                        int three = 3;
                        emit("ARRR", $$->loc->name, $1->array1->name, $1->loc->name);
                }
                else if ($1->cat=="PTR") { // Pointer
                        $$->loc = $1->loc;
                        int two = 2;    
                        int three = 3;
                }
                else { // otherwise
                        $$->loc = $1->array1;
                        int two = 2;    
                        int three = 3;
                }

             }
            |multplicative_expression '*' cast_expression
            { //printinfo("multiplicative_expression -> multiplicative_expression * cast_expression\n"); 
            if (typecheck ($1->loc, $3->array1) ) {
                        $$ = new expr();
                        int two = 2;    
                        int three = 3;
                        $$->loc = gentemp(new symtype($1->loc->type->type));
                        emit ("MULT", $$->loc->name, $1->loc->name, $3->array1->name);
                }
                else cout << "Type Error"<< endl;

            }
            |multplicative_expression '/' cast_expression
            { //printinfo("multiplicative_expression -> multiplicative_expression / cast_expression\n"); 

            if (typecheck ($1->loc, $3->array1) ) {
                        $$ = new expr();
                        int two = 2;    
                        int three = 3;
                        $$->loc = gentemp(new symtype($1->loc->type->type));
                        emit ("DIVIDE", $$->loc->name, $1->loc->name, $3->array1->name);
                }
                else cout << "Type Error"<< endl;

            }
            |multplicative_expression '%' cast_expression
            {// printinfo("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); 

            if (typecheck ($1->loc, $3->array1) ) {
                        $$ = new expr();
                        int two = 2;    
                        int three = 3;
                        $$->loc = gentemp(new symtype($1->loc->type->type));
                        emit ("MODOP", $$->loc->name, $1->loc->name, $3->array1->name);
                }
                else cout << "Type Error"<< endl;

            }
            ;

additive_expression:
           multplicative_expression
           { //printinfo("additive_expression -> multiplicative_expression\n"); 
           $$=$1;


           }
           |additive_expression '+' multplicative_expression
            { //printinfo("additive_expression -> additive_expression + multiplicative_expression\n"); 

            if (typecheck ($1->loc, $3->loc) ) {
                        $$ = new expr();
                        int zero = 0;   
                        int one = 1;
                        $$->loc = gentemp(new symtype($1->loc->type->type));
                        emit ("ADD", $$->loc->name, $1->loc->name, $3->loc->name);
                }
                else cout << "Type Error"<< endl;

            }
           |additive_expression '-' multplicative_expression
           { //printinfo("additive_expression -> additive_expression − multiplicative_expression\n"); 
           if (typecheck ($1->loc, $3->loc) ) {
                        $$ = new expr();
                        int zero = 0;   
                        int one = 1;
                        $$->loc = gentemp(new symtype($1->loc->type->type));
                        emit ("SUB", $$->loc->name, $1->loc->name, $3->loc->name);
                }
                else cout << "Type Error"<< endl;


           }
           ;

shift_expression:
        additive_expression
        { //printinfo("shift_expression -> additive_expression\n");
           $$=$1;

        }
        |shift_expression LSHIFT additive_expression
        { //printinfo("shift_expression -> shift_expression << additive_expression\n"); 
        if ($3->loc->type->type == "INTEGER") {
                        $$ = new expr();
                        int zero = 0;   
                        int one = 1;
                        $$->loc = gentemp (new symtype("INTEGER"));
                        emit ("LEFTOP", $$->loc->name, $1->loc->name, $3->loc->name);
                }
                else cout << "Type Error"<< endl;

        }
        |shift_expression RSHIFT additive_expression
        { //printinfo("shift_expression -> shift_expression >> additive_expression\n");

        if ($3->loc->type->type == "INTEGER") {
                        $$ = new expr();
                        int zero = 0;   
                        int one = 1;
                        $$->loc = gentemp (new symtype("INTEGER"));
                        emit ("RIGHTOP", $$->loc->name, $1->loc->name, $3->loc->name);
                }
                else cout << "Type Error"<< endl;

         }
        ;

relational_expression:
           shift_expression
           {// printinfo("relational_expression -> shift_expression\n"); 
           $$=$1;

           }
           |relational_expression '<' shift_expression
           { //printinfo("relational_expression -> relational_expression < shift_expression\n"); 
           if (typecheck ($1->loc, $3->loc) ) {
                        $$ = new expr();
                        $$->type = "BOOL";
                        int zero = 0;   
                        int one = 1;
                        $$->truelist = makelist (nextinstr());
                        $$->falselist = makelist (nextinstr()+1);
                        emit("LT", "", $1->loc->name, $3->loc->name);
                        emit ("GOTOOP", "");
                }
                else cout << "Type Error"<< endl;
           }
           |relational_expression '>' shift_expression
            { //printinfo("relational_expression -> relational_expression > shift_expression\n"); 

                if (typecheck ($1->loc, $3->loc) ) {
                        $$ = new expr();
                        $$->type = "BOOL";

                        int zero = 0;   
                        int one = 1;
                        $$->truelist = makelist (nextinstr());
                        $$->falselist = makelist (nextinstr()+1);
                        emit("GT", "", $1->loc->name, $3->loc->name);
                        emit ("GOTOOP", "");
                }
                else cout << "Type Error"<< endl;

            }
           |relational_expression LESS_THAN_EQUAL_TO shift_expression
            { //printinfo("relational_expression -> relational_expression <= shift_expression\n");
                if (typecheck ($1->loc, $3->loc) ) {
                        $$ = new expr();
                        $$->type = "BOOL";
                        int zero = 0;   
                        int one = 1;
                        $$->truelist = makelist (nextinstr());
                        $$->falselist = makelist (nextinstr()+1);
                        emit("LE", "", $1->loc->name, $3->loc->name);
                        emit ("GOTOOP", "");
                }
                else cout << "Type Error"<< endl;

             }
           |relational_expression GREATER_THAN_EQUAL_TO shift_expression
           { //printinfo("relational_expression -> relational_expression >= shift_expression\n");
           if (typecheck ($1->loc, $3->loc) ) {
                        $$ = new expr();
                        $$->type = "BOOL";
                        int zero = 0;   
                        int one = 1;
                        $$->truelist = makelist (nextinstr());
                        $$->falselist = makelist (nextinstr()+1);
                        emit("GE", "", $1->loc->name, $3->loc->name);
                        emit ("GOTOOP", "");
                }
                else cout << "Type Error"<< endl;

            }
           ;

equality_expression:
           relational_expression
           { //printinfo("equality_expression -> relational_expression\n"); 

           $$=$1;

           }
           |equality_expression DOUBLE_EQUAL relational_expression
           { //printinfo("equality_expression -> equality_expression == relational_expression\n"); 

           if (typecheck ($1->loc, $3->loc)) {
                        convertBool2Int ($1);
                        convertBool2Int ($3);

                        $$ = new expr();
                        $$->type = "BOOL";
                        int zero = 0;   
                        int one = 1;
                        $$->truelist = makelist (nextinstr());
                        $$->falselist = makelist (nextinstr()+1);
                        emit("EQOP", "", $1->loc->name, $3->loc->name);
                        emit ("GOTOOP", "");
                }
                else cout << "Type Error"<< endl;

           }
           |relational_expression NOT_EQUAL relational_expression
           { //printinfo("equality_expression -> equality_expression ! = relational_expression\n"); 

           if (typecheck ($1->loc, $3->loc) ) {
                        // If any is bool get its value
                        convertBool2Int ($1);
                        convertBool2Int ($3);

                        $$ = new expr();
                        $$->type = "BOOL";
                        int zero = 0;   
                        int one = 1;
                        $$->truelist = makelist (nextinstr());
                        $$->falselist = makelist (nextinstr()+1);
                        emit("NEOP", "", $1->loc->name, $3->loc->name);
                        emit ("GOTOOP", "");
                }
                else cout << "Type Error"<< endl;


           }
           ;

AND_expression:
        equality_expression
        { //printinfo("AND_expression -> equality_expression\n"); 
        $$=$1;

        }
        |AND_expression '&' equality_expression
        { //printinfo("AND_expression -> AND_expression & equality_expression\n");

        if (typecheck ($1->loc, $3->loc) ) {
                        // If any is bool get its value
                        convertBool2Int ($1);
                        convertBool2Int ($3);
                        int zero = 0;   
                        int one = 1;
                        $$ = new expr();
                        $$->type = "NONBOOL";

                        $$->loc = gentemp (new symtype("INTEGER"));
                        emit ("BAND", $$->loc->name, $1->loc->name, $3->loc->name);
                }
                else cout << "Type Error"<< endl;

        }
        ;

exclusive_OR_expression:
             AND_expression
             { //printinfo("exclusive_OR_expression -> AND_expression\n");
             $$=$1;

              }
             |exclusive_OR_expression '^' AND_expression
             { //printinfo("exclusive_OR_expression -> exclusive_OR_expression ˆ AND_expression\n");

             if (typecheck ($1->loc, $3->loc) ) {
                        // If any is bool get its value
                        convertBool2Int ($1);
                        convertBool2Int ($3);
                        int zero = 0;   
                        int one = 1;
                        $$ = new expr();
                        $$->type = "NONBOOL";

                        $$->loc = gentemp (new symtype("INTEGER"));
                        emit ("XOR", $$->loc->name, $1->loc->name, $3->loc->name);
                }
                else cout << "Type Error"<< endl;

              }
             ;

inclusive_OR_expression:
             exclusive_OR_expression
             { //printinfo("inclusive_OR_expression -> exclusive_OR_expression\n"); 

             $$=$1;

             }
             |inclusive_OR_expression '|' exclusive_OR_expression
             { //printinfo("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); 

             if (typecheck ($1->loc, $3->loc) ) {
                        // If any is bool get its value
                        convertBool2Int ($1);
                        convertBool2Int ($3);
                        int zero = 0;   
                        int one = 1;
                        $$ = new expr();
                        $$->type = "NONBOOL";

                        $$->loc = gentemp (new symtype("INTEGER"));
                        emit ("INOR", $$->loc->name, $1->loc->name, $3->loc->name);
                }
                else cout << "Type Error"<< endl;

             }
             ;

logical_AND_expression:
            inclusive_OR_expression
            { //printinfo("logical_AND_expression -> inclusive_OR_expression\n");
            $$=$1;

             }
            |logical_AND_expression N BINARY_AND M inclusive_OR_expression
             { //printinfo("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); 

             convertInt2Bool($5);

                // convert $1 to bool and backpatch using N
                backpatch($2->nextlist, nextinstr());
                convertInt2Bool($1);
                int zero = 0;   
                int one = 1;
                $$ = new expr();
                $$->type = "BOOL";

                backpatch($1->truelist, $4);
                $$->truelist = $5->truelist;
                $$->falselist = merge ($1->falselist, $5->falselist);

             }
            ;

logical_OR_expression:
           logical_AND_expression
           { //printinfo("logical_OR_expression -> logical_AND_expression\n");
           $$=$1;

            }
           |logical_OR_expression N BINARY_OR M logical_AND_expression
            { //printinfo("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n");
            convertInt2Bool($5);

                // convert $1 to bool and backpatch using N
                backpatch($2->nextlist, nextinstr());
                convertInt2Bool($1);
                int zero = 0;   
                int one = 1;
                $$ = new expr();
                $$->type = "BOOL";

                backpatch ($$->falselist, $4);
                $$->truelist = merge ($1->truelist, $5->truelist);
                $$->falselist = $5->falselist; 

            }
           ;


M       : %empty{       // To store the address of thenext instruction
          $$ = nextinstr();
        };

N       : %empty {      // gaurd against fallthrough by emitting a goto
                $$  = new statement();
                $$->nextlist = makelist(nextinstr());
                emit ("GOTOOP","");
        }

conditional_expression:
            logical_OR_expression
            { //printinfo("conditional_expression -> logical_OR_expression\n"); 
            $$=$1;

            }
            |logical_OR_expression N '?' M expression N ':' M conditional_expression
            { //printinfo("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); 
            $$->loc = gentemp($5->loc->type);
                $$->loc->update($5->loc->type);
                emit("EQUAL", $$->loc->name, $9->loc->name);
                list<int> l = makelist(nextinstr());
                emit ("GOTOOP", "");
                int zero = 0;   
                int one = 1;
                backpatch($6->nextlist, nextinstr());
                emit("EQUAL", $$->loc->name, $5->loc->name);
                list<int> m = makelist(nextinstr());
                l = merge (l, m);
                emit ("GOTOOP", "");
                int two = 2;    
                int three = 3;
                backpatch($2->nextlist, nextinstr());
                convertInt2Bool($1);
                backpatch ($1->truelist, $4);
                backpatch ($1->falselist, $8);
                backpatch (l, nextinstr());

            }
            ;

assignment_expression:
           conditional_expression
           { //printinfo("assignment_expression -> conditional_expression\n");
                $$=$1;

            }
           |unary_expression assignment_operator assignment_expression
            { //printinfo("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); 
            if($1->cat=="ARR") {
                        $3->loc = conv($3->loc, $1->type->type);
                        int zero = 0;   
                        int one = 1;
                        emit("ARRL", $1->array1->name, $1->loc->name, $3->loc->name);   
                        }
                else if($1->cat=="PTR") {
                        emit("PTRL", $1->array1->name, $3->loc->name);  
                        }
                else{
                        $3->loc = conv($3->loc, $1->array1->type->type);
                        emit("EQUAL", $1->array1->name, $3->loc->name);
                        }
                $$ = $3;

            }
           ;

assignment_expression_optional:
             assignment_expression
             |
             ;

assignment_operator:
           '='
           { //printinfo("assignment_operator -> =\n"); 
           }
           |MUL_ASSIGN
           {// printinfo("assignment_operator -> *=\n");
            }
           |DIV_ASSIGN
           { //printinfo("assignment_operator -> /=\n");
            }
           |MOD_ASSIGN
           { //printinfo("assignment_operator -> %%=\n");
            }
           |ADD_ASSIGN
           { //printinfo("assignment_operator -> +=\n"); 
           }
           |SUB_ASSIGN
           { //printinfo("assignment_operator -> -=\n"); 
           }
           |LSHIFT_ASSIGN
           { //printinfo("assignment_operator -> <<=\n"); 
           }
           |RSHIFT_ASSIGN
           {// printinfo("assignment_operator -> >>=\n"); 
           }
           |AND_ASSIGN
           { //printinfo("assignment_operator -> &=\n"); 
           }
           |XOR_ASSIGN
            { //printinfo("assignment_operator -> ^=\n"); 
            }
           |OR_ASSIGN
           { //printinfo("assignment_operator -> |=\n"); 
           }
           ;             

expression:
      assignment_expression
      { //printinfo("expression -> assignment_expression\n"); 
      }
      |expression ',' assignment_expression
      { //printinfo("expression -> expression , assignment_expression\n"); 
      }
      ;
       
constant_expression:
           conditional_expression
           { //printinfo("constant_expression -> conditional_expression\n"); 
           }
           ;

expression_optional:
        expression
        |
        ;

declaration:
       declaration_specifiers init_declarator_list_optional ';'
       { //printinfo("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); 
       }
       ;

declaration_specifiers:
            storage_class_specifier declaration_specifiers_optional
            { //printinfo("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); 
            }
            |type_specifier declaration_specifiers_optional
            { //printinfo("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); 
            }
            |type_qualifier declaration_specifiers_optional
            { //printinfo("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); 
            }
            |function_specifier declaration_specifiers_optional
            { //printinfo("declaration_specifiers -> function_specifier declaration_specifiers_opt\n");
             }
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
        { //printinfo("init_declarator_list -> init_declarator\n"); 
        }
        |init_declarator_list ',' init_declarator
        { //printinfo("init_declarator_list -> init_declarator_list , init_declarator\n"); 
        }
        ;

init_declarator:
         declarator
         { //printinfo("init_declarator -> declarator\n");
         $$=$1;

          }
         |declarator '=' initializer
         { //printinfo("init_declarator -> declarator = initializer\n");
         if ($3->initial_value!="") $1->initial_value=$3->initial_value;
                emit ("EQUAL", $1->name, $3->name);

          }
         ;

storage_class_specifier:
             EXTERN
             { //printinfo("storage_class_specifier -> extern\n"); 
             }
             |STATIC
             { //printinfo("storage_class_specifier -> static\n"); 
             }
             |AUTO
             { //printinfo("storage_class_specifier -> auto\n"); 
             }
             |REGISTER
             { //printinfo("storage_class_specifier -> register\n"); 
             }
             ;

type_specifier:
        VOID
        { //printinfo("type_specifier -> void\n"); 
        Type="VOID";

        }
        |CHAR
        { //printinfo("type_specifier -> char\n");
        Type="CHAR";

         }
        |SHORT
        {// printinfo("type_specifier -> short\n"); 
        }
        |INT
        { //printinfo("type_specifier -> int\n"); 
        Type="INTEGER";

        }
        |LONG
        {// printinfo("type_specifier -> long\n"); 
        }
        |FLOAT
        { //printinfo("type_specifier -> float\n");
         }
        |DOUBLE
        { //printinfo("type_specifier -> float\n"); 

        Type="DOUBLE";

        }
        |SIGNED
        { //printinfo("type_specifier -> signed\n");
         }
        |UNSIGNED
        { //printinfo("type_specifier -> unsigned\n"); 
        }
        |BOOL
        { //printinfo("type_specifier -> bool\n");
         }
        |COMPLEX
        { //printinfo("type_specifier -> complex\n"); 
        }
        |IMAGINARY
        { //printinfo("type_specifier -> imaginary\n");
         }
        |enum_specifier
        { //printinfo("type_specifier -> enum_specifier\n"); 
        }
        ;

specifier_qualifier_list:
            type_specifier specifier_qualifier_list_optional
            { //printinfo("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n");
             }
            |type_qualifier specifier_qualifier_list_optional
            { //printinfo("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); 
            }
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
        { //printinfo("type_qualifier -> const\n"); 
        }
        |RESTRICT
        { //printinfo("type_qualifier -> restrict\n");
         }
        |VOLATILE
        { //printinfo("type_qualifier -> volatile\n"); 
        }
        ;

function_specifier:
          INLINE
          { //printinfo("function_specifier -> inline\n"); 
          }
          ;

declarator:
      pointer direct_declarator
      { //printinfo("declarator -> pointer_opt direct_declarator\n"); 

      symtype * t = $1;
                int zero = 0;   
                int one = 1;
                while (t->ptr !=NULL) t = t->ptr;
                t->ptr = $2->type;
                $$ = $2->update($1);

      }
      |direct_declarator {
        }
      ;

direct_declarator:
           IDENTIFIER
           { //printinfo("direct_declarator -> identifier\n"); 
           $$ = $1->update(new symtype(Type));
                currSymbol = $$;
                int zero = 0;   
                int one = 1;

           }
           |'(' declarator ')'
           { //printinfo("direct_declarator -> ( declarator )\n");

                $$=$2;

            }
           | direct_declarator '[' type_qualifier_list assignment_expression ']' {
                }
        | direct_declarator '[' type_qualifier_list ']' {
                }
           |direct_declarator '[' assignment_expression ']' {
                symtype * t = $1 -> type;
                symtype * prev = NULL;
                int zero = 0;   
                int one = 1;
                while (t->type == "ARR") {
                        prev = t;
                        t = t->ptr;
                }
                if (prev==NULL) {
                        int temp = atoi($3->loc->initial_value.c_str());
                        symtype* s = new symtype("ARR", $1->type, temp);
                        int zero = 0;   
                        int one = 1;
                        $$ = $1->update(s);
                }
                else {
                        prev->ptr =  new symtype("ARR", t, atoi($3->loc->initial_value.c_str()));
                        int zero = 0;   
                        int one = 1;
                        $$ = $1->update ($1->type);
                }
        }
        | direct_declarator '[' ']' {
                symtype * t = $1 -> type;
                symtype * prev = NULL;
                int zero = 0;   
                int one = 1;
                while (t->type == "ARR") {
                        prev = t;
                        t = t->ptr;
                }
                if (prev==NULL) {
                        symtype* s = new symtype("ARR", $1->type, 0);
                        int zero = 0;   
                        int one = 1;
                        $$ = $1->update(s);
                }
                else {
                        prev->ptr =  new symtype("ARR", t, 0);
                        int zero = 0;   
                int one = 1;
                        $$ = $1->update ($1->type);
                }
        }
        | direct_declarator '[' STATIC type_qualifier_list assignment_expression ']' {
       
        }
        | direct_declarator '[' STATIC assignment_expression ']' {
        }
        | direct_declarator '[' type_qualifier_list '*' ']' {
        }
        | direct_declarator '[' '*' ']' {
        }
        | direct_declarator '(' CT parameter_type_list ')' {
                currTable->name = $1->name;
                int zero = 0;   
                int one = 1;
                if ($1->type->type !="VOID") {
                        sym *s = currTable->lookup("return");
                        int three = 3;  
                        int four = 4;
                        s->update($1->type);            
                }
                $1->nested=currTable;

                currTable->parent = globalTable;
                changeTable (globalTable);                              // Come back to globalsymbol currTable
                currSymbol = $$;
        }
        | direct_declarator '(' identifier_list ')' {//later
        int zero = 0;   
        int one = 1;
        }
        | direct_declarator '(' CT ')' {
                currTable->name = $1->name;
                int zero = 0;   
                int one = 1;    
                if ($1->type->type !="VOID") {  
                        sym *s = currTable->lookup("return");
                        int three = 0;  
                        int four = 1;
                        s->update($1->type);            
                }
                $1->nested=currTable;

                currTable->parent = globalTable;
                changeTable (globalTable);                              // Come back to globalsymbol currTable
                currSymbol = $$;
        }
        ;
        
CT
        : %empty {                                                                                                      // Used for changing to symbol currTable for a function
                if (currSymbol->nested==NULL) changeTable(new symtable(""));    // Function symbol currTable doesn't already exist
                else {
                        changeTable (currSymbol ->nested);                                              // Function symbol currTable already exists
                        emit ("LABEL", currTable->name);
                }
        }
        ;

           

pointer:
        
        '*' type_qualifier_list {
        }
        |'*' {
                $$ = new symtype("PTR");
        }
        |'*' type_qualifier_list {//later
        }
        |'*' pointer {
                $$ = new symtype("PTR", $2);
        }
        ;
     
pointer_optional:
       pointer
       |
       ;

type_qualifier_list:
           type_qualifier
           { //printinfo("type_qualifier_list -> type_qualifier\n"); 
           }
           |type_qualifier_list type_qualifier
           { //printinfo("type_qualifier_list -> type_qualifier_list type_qualifier\n"); 
           }
           ;

type_qualifier_list_optional:
             type_qualifier_list
             |
             ;

parameter_type_list:
           parameter_list
           {// printinfo("parameter_type_list -> parameter_list\n"); 
           }
           |parameter_list ',' ELLIPSIS
           {// printinfo("parameter_type_list -> parameter_list , ...\n"); 
           }
           ;

parameter_list:
        parameter_declaration
        { //printinfo("parameter_list -> parameter_declaration\n"); 
        }
        |parameter_list ',' parameter_declaration
        { //printinfo("parameter_list -> parameter_list , parameter_declaration\n"); 
        }
        ;

parameter_declaration:
           declaration_specifiers declarator
           { //printinfo("parameter_declaration -> declaration_specifiers declarator\n"); 
           }
           |declaration_specifiers
           { //printinfo("parameter_declaration -> declaration_specifiers\n"); 
           }
           ;

identifier_list:
         IDENTIFIER
         { //printinfo("type_name -> specifier_qualifier_list\n");
          }

         |identifier_list ',' IDENTIFIER
         { //printinfo("identifier_list -> identifier_list , identifier\n");
          }
         ;

identifier_list_optional:
           identifier_list
           |
           ;

type_name:
     specifier_qualifier_list
     { //printinfo("type_name -> specifier_qualifier_list\n"); 
     }
     ;

initializer:
       assignment_expression
       { //printinfo("initializer -> assignment_expression\n");
                $$ = $1->loc;
                int zero = 0;   
                int one = 1;

        }
       |'{' initializer_list '}'
       { //printinfo("initializer -> { initializer_list }\n"); 
       }
       |'{' initializer_list ',' '}'
       { //printinfo("initializer -> { initializer_list , }\n");
        }
       ;

initializer_list:
        designation_optional initializer
        { //printinfo("initializer_list -> designation_opt initializer\n");
         }
        |initializer_list ',' designation_optional initializer
        { //printinfo("initializer_list -> initializer_list , designation_opt initializer\n"); 
        }
        ;

designation:
       designator_list '='
       { //printinfo("designation -> designator_list =\n"); 
       }
       ;

designation_optional:
       designation
       |
       ;

designator_list:
         designator 
         { //printinfo("designator_list -> designator\n"); 
         }
         |designator_list designator
         { //printinfo("designator_list -> designator_list designator\n"); 
         }
         ;

designator:
      '[' constant_expression ']'
      { //printinfo("designator -> [ constant_expression ]\n"); 
      }
      |'.' IDENTIFIER
      { //printinfo("designator -> . identifier\n");
       }
      ;

statement:
     labeled_statement
     { //printinfo("statement -> labeled_statement\n"); 
     }
     |compound_statement
     { //printinfo("statement -> compound_statement\n");
     $$=$1;
      }
     |expression_statement
     { //printinfo("statement -> expression_statement\n"); 
                int zero = 0;      
                int one = 1;
                $$ = new statement();
                $$->nextlist = $1->nextlist;

     }
     |selection_statement
     { //printinfo("statement -> selection_statement\n

        $$=$1;

     }
     |iteration_statement
     { //printinfo("statement -> iteration_statement\n"); 
     $$=$1;
     }
     |jump_statement
     { //printinfo("statement -> jump_statement\n"); 
     $$=$1;

     }
     ;

labeled_statement:
         IDENTIFIER ':' statement
         { //printinfo("labeled_statement -> identifier : statement\n");
                $$ = new statement();

          }
         |CASE constant_expression ':' statement
         { //printinfo("labeled_statement -> case constant_expression : statement\n");
                $$ = new statement();

          }
         |DEFAULT ':' statement
         { //printinfo("labeled_statement -> default : statement\n");
         $$ = new statement();
          }
         ;

compound_statement:
          '{' block_item_list '}'
          { //printinfo("compound_statement -> { block_item_list_opt }\n"); 
                $$=$2;

          }
          | '{' '}' {$$ = new statement();}
          ;

block_item_list:
         block_item 
         { //printinfo("block_item_list -> block_item\n"); 
         $$=$1;
         }
         |block_item_list M block_item
         { //printinfo("block_item_list -> block_item_list block_item\n"); 

                $$=$3;
                backpatch ($1->nextlist, $2);

         }
         ;

block_item_list_optional:
           block_item_list
           |
           ;

block_item:
      declaration
      { //printinfo("block_item -> declaration\n"); 
      $$ = new statement();

      }
      |statement
      { //printinfo("block_item -> statement\n");

        $$ = $1;
       }
      ;

expression_statement:
          expression ';' {$$=$1;}
        |';' {$$ = new expr();}
          ;

selection_statement:
           IF '(' expression N ')' M statement N %prec THEN{
                backpatch ($4->nextlist, nextinstr());
                convertInt2Bool($3);
                $$ = new statement();
                backpatch ($3->truelist, $6);
                list<int> temp = merge ($3->falselist, $7->nextlist);
                $$->nextlist = merge ($8->nextlist, temp);
        }
        |IF '(' expression N ')' M statement N ELSE M statement {
                backpatch ($4->nextlist, nextinstr());
                convertInt2Bool($3);
                int zero = 0;   
                int one = 1;
                $$ = new statement();
                backpatch ($3->truelist, $6);
                backpatch ($3->falselist, $10);
                int zeroo = 0;  
                int onee = 1;
                list<int> temp = merge ($7->nextlist, $8->nextlist);
                $$->nextlist = merge ($11->nextlist,temp);
        }
        |SWITCH '(' expression ')' statement {//later
        }
        ;


iteration_statement:
           WHILE M '(' expression ')' M statement
           { //printinfo("iteration_statement -> while ( expression ) statement\n");
           $$ = new statement();
                convertInt2Bool($4);
                int zero = 0;   
                int one = 1;
                // M1 to go back to boolean again
                // M2 to go to statement if the boolean is true
                backpatch($7->nextlist, $2);
                backpatch($4->truelist, $6);
                $$->nextlist = $4->falselist;
                int zeroo = 0;  
                int onee = 1;
                // Emit to prevent fallthrough
                stringstream STring;
            STring << $2;
            string TempString = STring.str();
            char* Int_STring = (char*) TempString.c_str();
                string str = string(Int_STring);
                int zerooo = 0; 
                int oneee = 1;
                emit ("GOTOOP", str);

            }
           |DO M statement M WHILE '(' expression ')' ';'
           { //printinfo("iteration_statement -> do statement while ( expression ) ;\n");
           $$ = new statement();
                convertInt2Bool($7);
                int zero = 0;   
                int one = 1;
                // M1 to go back to statement if expression is true
                // M2 to go to check expression if statement is complete
                backpatch ($7->truelist, $2);
                backpatch ($3->nextlist, $4);

                // Some bug in the next statement
                $$->nextlist = $7->falselist;

            }
           |
                FOR '(' expression_statement M expression_statement ')' M statement{
                $$ = new statement();
                convertInt2Bool($5);
                backpatch ($5->truelist, $7);
                backpatch ($8->nextlist, $4);
                stringstream STring;
            STring << $4;
                int zero = 0;   
                int one = 1;
            string TempString = STring.str();
            char* Int_STring = (char*) TempString.c_str();
                string str = string(Int_STring);

                emit ("GOTOOP", str);
                $$->nextlist = $5->falselist;
        }
        |FOR '(' expression_statement M expression_statement M expression N ')' M statement{
                $$ = new statement();
                int zeroo = 0;  
                int onee = 1;
                convertInt2Bool($5);
                backpatch ($5->truelist, $10);
                backpatch ($8->nextlist, $4);
                backpatch ($11->nextlist, $6);
                stringstream STring;
            STring << $6;
                int zero = 0;   
                int one = 1;
            string TempString = STring.str();
            char* Int_STring = (char*) TempString.c_str();
                string str = string(Int_STring);
                emit ("GOTOOP", str);
                $$->nextlist = $5->falselist;
        }
        ;
           

jump_statement:
        GOTO IDENTIFIER ';'
        { //printinfo("jump_statement -> goto identifier ;\n"); 
        $$ = new statement();

        }
        |CONTINUE ';'
        { //printinfo("jump_statement -> continue ;\n"); 
        $$ = new statement();

        }
        |BREAK ';'
        { //printinfo("jump_statement -> break ;\n");
        $$ = new statement();

         }
        |RETURN expression ';' {
                $$ = new statement();
                int zero = 0;   
                int one = 1;
                emit("RETURN",$2->loc->name);
        }
        |RETURN ';' {
                $$ = new statement();
                int zero = 0;   
                int one = 1;
                emit("RETURN","");
        }
        ;

translation_unit:
        external_declaration
        { //printinfo("translation_unit -> external_declaration\n");
         }
        |translation_unit external_declaration
        {// printinfo("translation_unit -> external_declaration\n"); 
        }
        ;

external_declaration:
        function_definition
        { //printinfo("external_declaration -> function_definition\n"); 
        }
        |declaration
        {// printinfo("external_declaration -> declaration\n");
         }
        ;

function_definition:
        declaration_specifiers declarator declaration_list CT compound_statement
        { //printinfo("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n");
         }

        |declaration_specifiers declarator CT compound_statement {
                int zero = 0;   
                int one = 1;
                currTable->parent = globalTable;
                changeTable (globalTable);
        }
        ;

declaration_list:
        declaration
        { //printinfo("declaration_list -> declaration\n");
         }
        |declaration_list declaration
        { //printinfo("declaration_list -> declaration_list declaration\n"); 
        }
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
