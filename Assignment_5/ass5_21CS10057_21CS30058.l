/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 5: Machine Independent Code Generator for tinyC
File: lex file
*/

%{
#include <stdio.h>
#include <string.h>

#include "ass5_21CS10057_21CS30058_translator.h"
#include "y.tab.h"
extern "C" int yylex();
%}

SPACE                          [ \t]
NEW_LINE                       \n

/*idetifiers*/
DIGIT                           [0-9]
NONDIGIT                        [_a-zA-Z]
IDENTIFIER                      {NONDIGIT}({NONDIGIT}|{DIGIT})*

/*constants*/

/*integer constants*/
NONZERO_DIGIT                   [1-9]
INTEGER_CONSTANT                {NONZERO_DIGIT}{DIGIT}*|"0"

/*floating co+-tants*/
SIGN                            [+-]
DIGIT_SEQUENCE                  {DIGIT}+
EXPONENT_PART                   ("e"{SIGN}?{DIGIT_SEQUENCE})|(E{SIGN}?{DIGIT_SEQUENCE})
FRACTIONAL_CONSTANT             ({DIGIT_SEQUENCE}?"."{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}".")
FLOATING_CONSTANT               ({FRACTIONAL_CONSTANT}{EXPONENT_PART}?)|({DIGIT_SEQUENCE}{EXPONENT_PART})

/*enumeration constants*/
ENUMERATION_CONSTANT {IDENTIFIER}

/*character constants*/
ESCAPE_SEQUENCE                 "\'"|"\""|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"
C_CHAR                         [^("\'"|"\\"|"\n")]|({ESCAPE_SEQUENCE})
C_CHAR_SEQUENCE                 {C_CHAR}+
CHARACTER_CONSTANT              "\'"{C_CHAR_SEQUENCE}"\'"

CONSTANT                        {INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ENUMERATION_CONSTANT}|{CHARACTER_CONSTANT}

/*string literals*/
S_CHAR                          {C_CHAR}
S_CHAR_SEQUENCE                 {S_CHAR}+
STRING_LITERAL                  "\""{S_CHAR_SEQUENCE}?"\""

/*punctuators*/
PUNCTUATOR                      "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|","|"#"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="

/*comments*/

COMMENT_Multi_SEQ               [^*]|[*][^/]
COMMENT_Multi                  "/*"{COMMENT_Multi_SEQ}*"*/"
COMMENT_Single                  "//"[^\n]*\n


%%
"->"				{return RIGHT_ARROW;}
"++"				{return INCREMENT;}
"--"				{return DECREMENT;}
"<<"				{return LSHIFT;}
">>"				{return RSHIFT;}
"<="				{return LESS_THAN_EQUAL_TO;}
">="				{return GREATER_THAN_EQUAL_TO;}
"=="				{return DOUBLE_EQUAL;}
"!="				{return NOT_EQUAL;}
"&&"				{return BINARY_AND;}
"||"				{return BINARY_OR;}
"..."				{return ELLIPSIS;}
"*="				{return MUL_ASSIGN;}
"/="				{return DIV_ASSIGN;}
"%="				{return MOD_ASSIGN;}
"+="				{return ADD_ASSIGN;}
"-="				{return SUB_ASSIGN;}
"<<="				{return LSHIFT_ASSIGN;}
">>="				{return RSHIFT_ASSIGN;}
"&="				{return AND_ASSIGN;}
"^="				{return XOR_ASSIGN;}
"|="				{return OR_ASSIGN;}
"auto"				{return AUTO;}
"break"				{return BREAK;}
"case"				{return CASE;}
"char"				{return CHAR;}
"const"				{return CONST;}
"continue"			{return CONTINUE;}
"default"			{return DEFAULT;}
"do"				{return DO;}
"double"			{return DOUBLE;}
"else"				{return ELSE;}
"enum"				{return ENUM;}
"extern"			{return EXTERN;}
"float"				{return FLOAT;}
"for"				{return FOR;}
"goto"				{return GOTO;}
"if"				{return IF;}
"inline"			{return INLINE;}
"int"				{return INT;}
"long"				{return LONG;}
"register"			{return REGISTER;}
"restrict"			{return RESTRICT;}
"return"			{return RETURN;}
"short"				{return SHORT;}
"signed"			{return SIGNED;}
"sizeof"			{return SIZEOF;}
"static"			{return STATIC;}
"struct"			{return STRUCT;}
"switch"			{return SWITCH;}
"typedef"			{return TYPEDEF;}
"union"				{return UNION;}
"unsigned"			{return UNSIGNED;}
"void"				{return VOID;}
"volatile"			{return VOLATILE;}
"while"				{return WHILE;}
"_Bool"				{return BOOL;}
"_Complex"			{return COMPLEX;}
"_Imaginary"		{return IMAGINARY;}

{IDENTIFIER}		{yylval.symp = currTable->lookup(yytext);
return IDENTIFIER;}
{INTEGER_CONSTANT}		{yylval.intval = atoi(yytext);return INTEGER_NO;} 
{FLOATING_CONSTANT}	{yylval.charval = yytext;return FLOAT_NO;}
{CHARACTER_CONSTANT}	{	yylval.charval = yytext;return CHARACTER;}
{STRING_LITERAL}	{yylval.charval = yytext;return STRING;}
{PUNCTUATOR}		{return yytext[0];}
{COMMENT_Single}    {}
{COMMENT_Multi}	{}
{NEW_LINE}			{ yylineno++; } 
{SPACE}				{}
%%