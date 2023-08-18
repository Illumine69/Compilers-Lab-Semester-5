#include "myl.h"

/*
Name: Sanskar Mittal
Roll No.: 21CS10057
Semester: 5
*/

int main(){
    float floatvalue=0; 
	int opt;
	int intval=0;
	while(1){
		printStr("\nChoose which function to use :");
		printStr("\n1. Read integer");
		printStr("\n2. Print integer");
		printStr("\n3. Read float");
		printStr("\n4. Print float");
		printStr("\n5. Exit");
		printStr("\n\nChoose an option: ");	
		if(readInt(&opt)==ERR){
			printStr("Invalid choice\n, re-enter :");
			continue;
		}
		if(opt==5){
			break;
		}
		switch(opt){
			case 1: printStr("\nEnter integer value: ");
					if(readInt(&intval)==ERR){
						printStr("Error! Invalid integer\n");
					}
					break;
			case 2: printStr("\nInteger value: ");
                    printInt(intval);
					break;
			case 3: printStr("\nEnter float value: ");
			        if(readFlt(&floatvalue)==ERR){
						printStr("Error! Invalid float value\n");
					}
					break;
			case 4: printStr("\nFloat value: ");
                    printFlt(floatvalue);
					break;
			default:
                    printStr("Enter a valid option\n");
					break;
		}
	}
    printStr("\nThank You!\n");
	return 0;
    
}