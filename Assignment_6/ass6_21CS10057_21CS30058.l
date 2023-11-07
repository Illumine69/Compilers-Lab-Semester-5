/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 6: Target Code Generator for tinyC
File: lex file
*/


%{  
    #include <stdio.h>
    #include <string.h>

    #include "ass6_21CS10057_21CS30058_translator.h"
    #include "ass6_21CS10057_21CS30058.tab.h"
    
%}

%option yylineno
%option noyywrap

/* Regular Expression Definitions */

SPACE                           [ \t\n]
IDENTIFIER                      [_a-zA-Z][_a-zA-Z0-9]*

INTEGER_CONSTANT                [1-9][0-9]*|[0]

DIGITS                          [0-9]+
EXPONENT                        [eE]([+-]?){DIGITS}
FRACTIONAL_CONSTANT             ({DIGITS}?\.{DIGITS})|({DIGITS}\.)
FLOATING__CONSTANT              ({FRACTIONAL_CONSTANT}{EXPONENT}?)|({DIGITS}{EXPONENT})

ENUMERATION_CONSTANT            {IDENTIFIER}

ESCAPE_SEQUENCE                 \\['"?\\abfnrtv]
C_CHAR                          [^\'\\\n]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE                 {C_CHAR}+
CHARACTER_CONSTANT              \'({C_CHAR_SEQUENCE})\'

CONSTANT                        {INTEGER_CONSTANT}|{FLOATING__CONSTANT}|{ENUMERATION_CONSTANT}|{CHARACTER_CONSTANT}

S_CHAR                          [^\"\\\n]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE                 {S_CHAR}+
STRING_LITERAL                  \"({S_CHAR_SEQUENCE}?)\"


%x COMMENT_Single
%x COMMENT_Multi

/* Translation_rules */
%%

"auto"                          { return AUTO; }
"break"                         { return BREAK; }
"case"                          { return CASE; }
"char"                          { return CHAR_; }
"const"                         { return CONST; }
"continue"                      { return CONTINUE; }
"default"                       { return DEFAULT; }
"do"                            { return DO; }
"double"                        { return DOUBLE; }
"else"                          { return ELSE; }
"enum"                          { return ENUM; }             
"extern"                        { return EXTERN; }
"float"                         { return FLOAT_; }
"for"                           { return FOR; }
"goto"                          { return GOTO_; }
"if"                            { return IF; }
"inline"                        { return INLINE; }
"int"                           { return INT_; }
"long"                          { return LONG; }
"register"                      { return REGISTER; }
"restrict"                      { return RESTRICT; }
"return"                        { return RETURN_; }
"short"                         { return SHORT; }
"signed"                        { return SIGNED; }
"sizeof"                        { return SIZEOF; }
"static"                        { return STATIC; }
"struct"                        { return STRUCT; }
"switch"                        { return SWITCH; }
"typedef"                       { return TYPEDEF; }
"union"                         { return UNION; }
"unsigned"                      { return UNSIGNED; }
"void"                          { return VOID_; }
"volatile"                      { return VOLATILE; }
"while"                         { return WHILE; }
"_Bool"                         { return BOOL_; }
"_Complex"                      { return COMPLEX; }
"_Imaginary"                    { return IMAGINARY; }



"//"                            { BEGIN(COMMENT_Single); }
<COMMENT_Single>.               {  }
<COMMENT_Single>\n              { BEGIN(INITIAL); }
<COMMENT_Single><<EOF>>         { BEGIN(INITIAL); }

"/*"                            { BEGIN(COMMENT_Multi); }
<COMMENT_Multi>"*/"             { BEGIN(INITIAL); }
<COMMENT_Multi>.                {  }
<COMMENT_Multi>\n               {  }

{IDENTIFIER}                    { yylval.str = new string(yytext); return IDENTIFIER; }
{INTEGER_CONSTANT}              { yylval.intval = atoi(yytext); return INTEGER_CONSTANT; }
{FLOATING__CONSTANT}            { yylval.floatval = atof(yytext); return FLOATING_CONSTANT; }
{CHARACTER_CONSTANT}            { yylval.charval = yytext[1]; return CHAR_CONSTANT; }
{STRING_LITERAL}                { yylval.str = new string(yytext); return STRING_LITERAL; }
{SPACE}                         {  }


"["                             { return LEFT_SQUARE; }
"]"                             { return RIGHT_SQUARE; }
"("                             { return LEFT_PARENTHESIS; }
")"                             { return RIGHT_PARENTHESIS; }
"{"                             { return LEFT_CURLY; }
"}"                             { return RIGHT_CURLY; }
"."                             { return DOT; }
"->"                            { return ARROW; }
"++"                            { return SELF_INCREASE; }
"--"                            { return SELF_DECREASE; }
"&"                             { return BITWISE_AND; }
"*"                             { return MUL; }
"+"                             { return PLUS; }
"-"                             { return SUBTRACT; }
"~"                             { return BITWISE_NOR; }
"!"                             { return EXCLAMATION; }
"/"                             { return F_SLASH; }
"%"                             { return MODULO; }
"<<"                            { return LEFT_SHIFT; }
">>"                            { return RIGHT_SHIFT; }
"<"                             { return LESS_THAN; }
">"                             { return GREATER_THAN; }
"<="                            { return LESS_THAN_EQUAL; }
">="                            { return GREATER_THAN_EQUAL; }
"=="                            { return EQUAL; }
"!="                            { return NOT_EQUAL; }
"^"                             { return BITWISE_XOR; }
"|"                             { return BITWISE_OR; }
"&&"                            { return LOGICAL_AND; }
"||"                            { return LOGICAL_OR; }
"?"                             { return QUESTION_MARK; }
":"                             { return COLON; }
";"                             { return SEMICOLON; }
"..."                           { return ELLIPSIS; }
"="                             { return ASSIGN_; }
"*="                            { return MUL_ASSIGN; }
"/="                            { return F_SLASH_ASSIGN; }
"%="                            { return MODULO_ASSIGN; }
"+="                            { return PLUSASSIGN; }
"-="                            { return SUBTRACT_ASSIGN; }
"<<="                           { return LEFT_SHIFT_ASSIGN; }
">>="                           { return RIGHT_SHIFT_ASSIGN; }
"&="                            { return BITWISE_AND_ASSIGN; }
"^="                            { return BITWISE_XOR_ASSIGN; }
"|="                            { return BITWISE_OR_ASSIGN; }
","                             { return COMMA; }
"#"                             { return HASH; }

%%
