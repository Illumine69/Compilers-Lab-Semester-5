/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 3: Lexer for tinyC
File: test file
*/

typedef struct{
	int a;
	char b[20];
	struct node* next;
}node;

#include <stdio.h>

static int stat;

volatile int vola;

inline int add();

void main()
{
	// This is a single line comment

	/* 
		This is a multiline comment
	   This is a multiline comment
	*/

	int a[200];
	int u[200];
	int n=4,i=0;
	unsigned int t=4;
	short int shorty=2;
	register r;
	char character='c';
	extern int yylex();

	float abcdef =12.3345;
	long long int c=1E17;
	char b[200]="This is a string\n \t";
		_Bool b=1;
		double _Complex cmplx=1;
	for(auto  i=0;i<n;i++)
	{
		i+=4;
		if(i>3)break;
		continue;
	}
		i--;
	do {
		i++;
	}while(i<n||i<54&&i>32);
	
	int size =sizeof(int );
	if(t>shorty){
		shorty=t;
	}
	else if(shorty<t){
		node *node;
		node->a=1234;
		n=shorty&t;
		n=n*4;
		n=n&(~4);
		if(n<=t);
		if(t>=n);
		n^=t;
		n+=t;
		n-=t;
		n|=t;
		n*=t;
		n<<=t;
		n>>=t;
		n%=4;
		n/=56;
		n=(n>t)?(t):(n);
		node->next=node;
		goto abc;
	}
	else {
		n=10;
	}
	abc:
		int * restrict res;
 }
