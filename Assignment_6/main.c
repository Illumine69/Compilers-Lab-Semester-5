#include "myl.h"
 int main()
 {
	 char Welcome[]="Welcome to Assignment 2\n";
	char menu[]="1)Enter an integer\n2)Enter a float\n3)exit\nenter your choice\n";
	int option,integer;
	 float f;
	 int return_value;
	 printStr(Welcome);
	 while(1){
		 printStr("\n");
		 printStr(menu);
		 readInt(&option);
		 switch(option)
		 {
			case 1:
				printStr("Enter a integer:");
				return_value=readInt(&integer);
				if(!return_value)printStr("Error\n");
				else {
					printStr("The entered integer is:");
						;
					return_value=printInt(integer);
					printStr("\nBytes used:");
					printInt(return_value);
					printStr("\n");
				}
				break;
			case 2:

				printStr("Enter a float:");
				return_value=readFlt(&f);
				if(!return_value)printStr("Error\n");
				else {
					printStr("The entered float is:")
						;
					return_value=printFlt(f);
					printStr("\nBytes used:");
					printInt(return_value);
					printStr("\n");
				}
				break;
			case 3:
				printStr("Exiting the program,ThankYou\n");
				return 0;
				break;
			default:
				printStr("Please enter a valid choice\n");
				

		 }
	 }
 }
