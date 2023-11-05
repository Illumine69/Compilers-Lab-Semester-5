/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 6: Target Code Generator for tinyC
File: myl.c file
*/

#include "myl.h"
int printStr(char * a)
{
	int bytes=0;// variable to store number of bytes
	while(*(a+bytes)!='\0')
	{
		bytes++;// counts the number of bytes
	}

	// call system write function
	__asm__ __volatile__(
		"movl $1,%%eax \n\t"
		"movq $1,%%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(a),"d"(bytes)

		);
	return bytes;
}

int readInt(int * n)
{

	char a[40]="abcd";
	int bytes=40;//max number of bytes allowed
	// calling the system read function
	__asm__ __volatile__(
		"movl $0,%%eax \n\t"
		"movq $1,%%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(a),"d"(bytes)

		);
	int i=0;
	int sign=0;// keeps track of sign of number
	int tenp=1;// current power to ten (to be multiplied to get numerical value)
	long long number =0;// the number to be stored 
	for( i=0;((a[i]!='\n')&&(i<20));i++)// getting the length of entered string
	if(a[0]=='-')sign=1;// if the number is negative then we make sign =1

	if(a[0]=='\n')return (ERR);// if the  zeroth bit is new line then user just hit enter we return error in this case 

	
	if(i>11)return(ERR);// if the length of the string entered is greater than 11 then it wont fit in integer 
	else if((a[0])!='-'&&(i==11))return(ERR);// the range of positive number
	else {

		int j;
		// we get the number charecter by charecter and multiply by appr		opirate ten power  to get value

		for(j=i-1;j>=sign;j--)
		{
			if(((a[j]-'0')>9)||((a[j]-'0')<0))return(ERR);//if the c			harecter is not a digit then we return error 
			number+=(a[j]-'0')*tenp;
			tenp*=10;

		}
		if(sign)number=-number;// if the number is negative
		if(number>2147483647||(number<-2147483648))return (ERR);//if the number is out of the bounds of integer we return error
		*(n)=number;// else we store the number 
		return (OK);// we return success
	}
	
}

int printInt(int n)
{
	char buff[20];
	int start=18;// start holds the starting index at which the string starts
	int sign=0;// indicates sign
	int bytes=0;// number of bytes 
	if(n<0){
		sign=1;//if n is less than zero then sign =1
		n=-n;// replace make n positive
	}
	if(n==0){
		buff[0]='0';
		bytes=1;
		start=0;

	}
	else{
		while(n)// get the number digit by digit and store in buffer array
		{
			buff[start]=('0'+n%10);
			start--;
			
			bytes++;
			n/=10;
			

		}
		start++;
		if(sign){
			bytes++;
			start--;
			buff[start]='-';

		}

	}

	__asm __volatile__(//assembly code to call write system call
		"movl $1,%%eax \n\t"
		"movq $1,%%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(buff+start),"d"(bytes)


		);
	return bytes;// returning the number of bytes
}

int readFlt(float *f)
{
	int sign=0;// stores the sign of the number 
	long double number =0;// the number to be stored 
	char a[50]="bac";
	int bytes=50;
	int i=0;
	int decimal=0;// this is a boolean value that stores is the number has adecimal point
	__asm__ __volatile__(// assembly code to make read syscall
		"movl $0,%%eax \n\t"
		"movq $1,%%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(a),"d"(bytes)

		);
	if (a[0]=='\n')return(ERR);// if user just pressed enter then we return error
	while((a[i]!='.')&&(a[i]!='\n')&&(i<50)){//checking if the entered number has a decimal point
		i++;
	}
	if(a[0]=='-')sign=1;// checking for the sign
	if(a[i]=='.')decimal=1;// if decimal point exist 
	int 	j;
	float tenp=1;// tenp stores the current power of 10 to be multiplied to get the value
	if(decimal)// if decimal exist case 
	{
		for(j=i-1;j>=sign;j--)// i stores the position of decimal point
		{
			if(((a[j]-'0')>9)||((a[j]-'0')<0))return(ERR);// if the charecter is not a number then we return error
			number+=(a[j]-'0')*tenp;
			if((number>3.402823466E+38))return(ERR);// if number is greater than the float range we return error 
			tenp*=10;
		}
		long double decimal_tenp=0.1;//adding decimals
		for(j=i+1;((a[j]!='\n')&&(j<50));j++)// j starts from i+1 ie the digit after the decimal point
		{
			if(((a[j]-'0')>9)||((a[j]-'0')<0))return(ERR);// if the digit is not a number then we return error
			number+=(a[j]-'0')*decimal_tenp;
			if((number>3.402823466E+38))return(ERR);//if the number becomes greater than float range then we return error
			decimal_tenp/=10;	
		}
		if(sign)number=-number;// we the number is negative then we invert sign
	}
	else {// number does not contain decimal point case 

		int j;

		for(j=i-1;j>=sign;j--)
		{
			if(((a[j]-'0')>9)||((a[j]-'0')<0))return(ERR);
			number+=(a[j]-'0')*tenp;
			if((number>3.402823466E+38))return(ERR);

			tenp*=10;

		}
		if(sign)number=-number;// if number is negative then we invert sign

	}
	*(f)=number;// we store the number 
	return (OK);// if we reach this point then there was no error, we return ok
}
/*
  Since float has a huge range (larger than int )we cannot typecast it to int 
  to get integer value get integer part of float.if the number is greater than
  the int range we do the following:
   To get integer value of float, i kept on dividing the number with 2 until
  it fits in integer range , we also keep track of number of times we divided
  by 2 now we store type cast the current value with int and then store this 
  in a an array , we now multiply with number with the number of times we divi
  ded with 2 also since the number was greater than int range storing the deci
  mal dosent add to anything since float is less precise hence we padd the num
  ber with six zeros (default precision of float)
  if number is less than the range of int then we do the following:
  we type cast the number to int store the number into buffer (similar to printI nt then we get first six decimal digits of the number by repeatedly multiplying by ten and taking integer part also at the end we round of the number.
 
 */
int printFlt(float f){

	char buff[50];
	int b[50];
	float  d_f=f;
	int bytes=0;
	int start=49;
	int sign=0;
	if(f<0){
		sign=1;
		d_f=-d_f;
		f=-f;
	}
	if(f==0.0)
	{

		buff[0]='0';
		buff[1]='.';
		bytes=2;

		for(bytes=2;bytes<8;bytes++)buff[bytes]='0';
		start=0;
	}
	else if(d_f>2147483647)
	{
		int p=0;
		while(d_f>2147483647){
			p+=1;
			d_f/=2;
		}

		int i_value=(int )d_f;

		int i=0;
		for(i=0;i<40;i++)b[i]=0;
		while(i_value)
		{

			b[start]=i_value%10;
			start--;
			bytes++;
			i_value/=10;
		}
		int last=49;
		while(p--)
		{
			int carry=0;
			for( i=49;i>=0;i--)
			{
				int temp=b[i];
				b[i]=(b[i]*2+carry)%10;
				carry=(temp*2+carry)/10;
				if(b[i])last=i;
			}
		}
		if(sign)buff[0]='-';
		int j=sign;
		for(i=last;i<50;i++)
		{
			buff[j++]=('0'+b[i]);
		}
		buff[j++]='.';
		buff[j++]='0';
		buff[j++]='0';
		buff[j++]='0';
		buff[j++]='0';
		buff[j++]='0';
		buff[j++]='0';
		bytes=j;
		start=0;
	}
	else {
		start=41;

		int i_f=(int )f;
		float p=f-i_f;

		while(i_f)
		{
			buff[start]=('0'+i_f%10);
			start--;
			
			bytes++;
			i_f/=10;
		}
		start++;
		if(sign){
			bytes++;
			start--;
			buff[start]='-';
		}
		buff[42]='.';
		bytes++;
		for(int i=0;i<6;i++)
		{
			int l;
			float t;
			t=10*p;
			l=(int)t;
			buff[43+i]=('0'+l);
			p=t;
			p-=l;
			bytes++;
		}
		float x=10*p;
		int w=(int)x;
		if((w>5)||((w==5)&&((buff[48]-'0')%2))){
			int carry=1;

			for(int  i=48;i>=0;i--)
			{
			   if(buff[i]=='.')continue;
			   else {
				   int value=buff[i]-'0';
				   buff[i]=(value+carry)%10+'0';
		
		carry=(value+carry)/10;
			   }
			}
		}

	}
	__asm __volatile__(
		"movl $1,%%eax \n\t"
		"movq $1,%%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(buff+start),"d"(bytes)


		);
	return bytes;

}















