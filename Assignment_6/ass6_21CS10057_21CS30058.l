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

IDENTIFIER                      [_a-zA-Z][_a-zA-Z0-9]*

integer_constant                [1-9][0-9]*|[0]

digits                          [0-9]+
exponent                        [eE]([+-]?){digits}
fractional_constant             ({digits}?\.{digits})|({digits}\.)
floating_constant               ({fractional_constant}{exponent}?)|({digits}{exponent})

enum_constant                   {IDENTIFIER}

escape_sequence                 \\['"?\\abfnrtv]
c_char                          [^\'\\\n]|{escape_sequence}
c_char_sequence                 {c_char}+
char_constant                   \'({c_char_sequence})\'

constant                        {integer_constant}|{floating_constant}|{enum_constant}|{char_constant}

s_char                          [^\"\\\n]|{escape_sequence}
s_char_sequence                 {s_char}+
string_literal                  \"({s_char_sequence}?)\"

ws                              [ \t\n]

%x single_line
%x multi_line

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



"//"                            { BEGIN(single_line); }
<single_line>.                  {  }
<single_line>\n                 { BEGIN(INITIAL); }
<single_line><<EOF>>            { BEGIN(INITIAL); }

"/*"                            { BEGIN(multi_line); }
<multi_line>"*/"                { BEGIN(INITIAL); }
<multi_line>.                   {  }
<multi_line>\n                  {  }

{IDENTIFIER}                    { yylval.str = new string(yytext); return IDENTIFIER; }
{integer_constant}              { yylval.intval = atoi(yytext); return INTEGER_CONSTANT; }
{floating_constant}             { yylval.floatval = atof(yytext); return FLOATING_CONSTANT; }
{char_constant}            { yylval.charval = yytext[1]; return CHAR_CONSTANT; }
{string_literal}                { yylval.str = new string(yytext); return STRING_LITERAL; }
{ws}                         {}


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
