/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 3: Lexer for tinyC
*/

#include <stdio.h>

extern char* yytext;
int main(){
    int token;
    while(token = yylex()){
        switch(token) {
            case KEYWORD: printf("<KEYWORD, %d, %s>\n", token, yytext); break;
            case IDENTIFIER: printf("<IDENTIFIER, %d, %s>\n", token, yytext); break;
            case CONSTANT: printf("<CONSTANT, %d, %s>\n", token, yytext); break;
            case STRING_LITERAL: printf("<STRING_LITERAL, %d, %s>\n", token, yytext); break;
            case PUNCTUATOR: printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
            default: printf("<Invalid C literal: %d, %s\n", token, yytext); break;
        }
    }
}

int yywrap(void){
    return 1;
}