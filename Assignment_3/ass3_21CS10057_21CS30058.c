/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 3: Lexer for tinyC
File: main file
*/

#include <stdio.h>
#define COMMENT_Multi 1
#define COMMENT_Single 2
#define KEYWORD 3
#define IDENTIFIER 4
#define CONSTANT 5
#define STRING_LITERAL 6
#define PUNCTUATOR 7
extern char* yytext;
extern int yylex();
int main(){
    int token;

    while(token = yylex()){
        switch(token) {
            case COMMENT_Single:printf("<COMMENT_Single, %d, '%s' >\n", token, yytext); break;
            case COMMENT_Multi:printf("<COMMENT_Multi, %d, '%s' >\n", token, yytext); break;
            case KEYWORD: printf("<KEYWORD, %d,'%s' >\n", token, yytext); break;
            case IDENTIFIER: printf("<IDENTIFIER, %d, '%s' >\n", token, yytext); break;
            case CONSTANT: printf("<CONSTANT, %d, '%s' >\n", token, yytext); break;
            case STRING_LITERAL: printf("<STRING_LITERAL, %d, '%s' >\n", token, yytext); break;
            case PUNCTUATOR: printf("<PUNCTUATOR, %d, '%s' >\n", token, yytext); break;
            default: printf("<Invalid C literal: %d, '%s' >\n", token, yytext); break;
        }
    }
    
}