/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 4: Parser for tinyC
File: main file
*/

#include <stdio.h>
#include "y.tab.h"

extern int yylineno;

int main(){
	// extern int yydebug;
	// yydebug=1;
	int val=yyparse();
	printf("\n+---------------------------------------+\n\n");
	if(!val)
		printf("Parsing Success\n\n");
	else
		printf("Parsing Error \n\n");

	printf("Line number in the input file: %d\n", yylineno);
	return 0;
}