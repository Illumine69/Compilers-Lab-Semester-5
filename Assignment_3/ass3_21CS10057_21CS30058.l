/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 3: Lexer for tinyC
File: lex file
*/

%{
/* define the token codes */
#include<stdio.h>
#include<string.h>

#define COMMENT_Multi 1
#define COMMENT_Single 2
#define KEYWORD 3
#define IDENTIFIER 4
#define CONSTANT 5
#define STRING_LITERAL 6
#define PUNCTUATOR 7
%}

SPACE                          [ \t\n]

/*keywords*/

KEYWORD                         "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"

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

{SPACE}                         { }
{KEYWORD}                       { return KEYWORD; }
{IDENTIFIER}                    { return IDENTIFIER; }
{CONSTANT}                      { return CONSTANT; }
{STRING_LITERAL}                { return STRING_LITERAL; }
{PUNCTUATOR}                    { return PUNCTUATOR; }
{COMMENT_Single}                { return COMMENT_Single; }
{COMMENT_Multi}                 {return COMMENT_Multi;}

%%

int yywrap(void){
    return 1;
}
