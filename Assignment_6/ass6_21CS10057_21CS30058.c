/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 6: Target Code Generator for tinyC
File: Input output Library functions.
*/


#include "myl.h"

#define BUFF 100

int printStr(char *s){
    int stringLen = 0;                      // Length of the string
    while(s[stringLen] != '\0'){
        stringLen++;
    }
    
    __asm__ __volatile__(
		"movl $1, %%eax\n\t"
		"movq $1, %%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(s), "d"(stringLen)
	);
    return stringLen;                       // Return the length of the string
}

int readInt(int* n){
    char buff[BUFF];
    int i = 0;
    int sign = 1;
    int len;

    __asm__ __volatile__(
        "movq $0, %%rax;"
        "movq $0, %%rdi;"
        "syscall;"
        : "=a"(len)
        : "S"(buff), "d"(BUFF)
    );
    *n = 0;
    if(len <= 0){
        *n = ERR;
        return ERR;
    }

    if(buff[0] == '-'){
        sign = -1;
        i = 1;
    }
    while(i < len - 1){                             
        *n *= 10;
        if(buff[i] < '0' || buff[i] > '9'){
            return ERR;
        }
        *n += buff[i] - '0';
        i++;
    }

    *n *= sign;                                     // Assign the sign to the integer
    if(len <= 1 || (len == 2 && buff[0] == '-')){   // If no input is given or only '-' is given
        return 0;
    }
    int ans = (int)*n;
    *n = OK;
    return ans;

}

int printInt(int n){
    char buff[BUFF],zero = '0';
    int i=0,j,k,bytes;
    if(n == 0){
        buff[i++] = zero;
    }
    else{
        if(n < 0){
            buff[i++] = '-';
            n = -n;
        }
        while(n){
            int dig = n%10;
            buff[i++] = (char)(zero+dig);
            n /= 10;
        }
        if(buff[0] == '-'){
            j = 1;
        }
        else{
            j = 0;
        }
        k = i-1;
        while(j < k){
            char temp = buff[j];
            buff[j++] = buff[k];
            buff[k--] = temp;
        }
    }
    buff[i] = '\0';
    bytes = i+1;

    __asm__ __volatile__(
        "movq $1, %%rax;"
        "movq $1, %%rdi;"
        "syscall;"
        :
        :"S"(buff), "d"(bytes)
    );
    return bytes;
}

float readFlt(float* f){
    int integralPart = 0;
    float decimalPart = 0;
    int len;
    char buff[BUFF] = "";
    int sign = 1;
    int i = 0;

    __asm__ __volatile(
		"movl $0,%%eax \n\t"
		"movq $0, %%rdi \n\t"
		"syscall \n\t"
		:"=a"(len)
		:"S"(buff),"d"(BUFF)
	);
    
    if(len <= 0){
        return ERR;
    }
	if(buff[0] == '-'){
		sign = -1;
		i++;
		if(len == 1){        // If only '-' is given
			return ERR;
        }
	}
	else if((buff[0] < '0' || buff[0] > '9') && buff[0] != '.'){    // If the first character is not a digit or a decimal point
        return ERR;
    }
    len--;
    while(i < len  && buff[i] != '.'){
        if(buff[i] >= '0' && buff[i] <= '9'){
            integralPart *= 10;
            integralPart += buff[i] - '0';
        }
        else{
            return ERR;
        }
        i++;
    }
    if(buff[i] == '.'){
        if(len == 1 || (len == 2 && sign == -1)){   // If only '.' or '-.' is given
            return ERR;
        }
        i++;
        int ten = 10;
        while(i < len){
			if(buff[i] >= '0' && buff[i] <= '9'){
				decimalPart += (float)(buff[i] - '0')/ten;      // Add the decimal part
                ten *= 10;
			}
			else{
				return ERR;
			}
            i++;
		}
    }
    *f = (float)(integralPart + decimalPart)*sign;
    float ans = *f;
    *f = OK;
    return ans;
}



float converttoFlt(string s){
    int integralPart = 0;
    float decimalPart = 0;
    int len;
     string buff =s;
     int len=buff.size();
    int sign = 1;
    int i = 0;

    
    if(len <= 0){
        return ERR;
    }
    if(buff[0] == '-'){
        sign = -1;
        i++;
        if(len == 1){        // If only '-' is given
            return ERR;
        }
    }
    else if((buff[0] < '0' || buff[0] > '9') && buff[0] != '.'){    // If the first character is not a digit or a decimal point
        return ERR;
    }
    len--;
    while(i < len  && buff[i] != '.'){
        if(buff[i] >= '0' && buff[i] <= '9'){
            integralPart *= 10;
            integralPart += buff[i] - '0';
        }
        else{
            return ERR;
        }
        i++;
    }
    if(buff[i] == '.'){
        if(len == 1 || (len == 2 && sign == -1)){   // If only '.' or '-.' is given
            return ERR;
        }
        i++;
        int ten = 10;
        while(i < len){
            if(buff[i] >= '0' && buff[i] <= '9'){
                decimalPart += (float)(buff[i] - '0')/ten;      // Add the decimal part
                ten *= 10;
            }
            else{
                return ERR;
            }
            i++;
        }
    }
    *f = (float)(integralPart + decimalPart)*sign;
    float ans = *f;
    *f = OK;
    return ans;
}



int printFlt(float f){
    
    char buff[BUFF];
    int i = 0;
    int j,k,bytes;
    char zero = '0';
    if(f < 0){
        buff[i++] = '-';
        f = -f;
    }
    int integralPart = (int)f;
    float decimalPart = f - (float)integralPart;

    if(integralPart == 0){
        buff[i++] = zero;
    }
    else{
        while(integralPart){
            int dig = integralPart%10;
            buff[i++] = (char)(zero + dig);
            integralPart /= 10;
        }
        if(buff[0] == '-'){
            j = 1;
        }
        else{
            j = 0;
        }
        k = i-1;
        while(j < k){
            char temp = buff[j];
            buff[j++] = buff[k];
            buff[k--] = temp;
        }
    }
    int cnt = 6;
    if(decimalPart != 0){
        buff[i++] = '.';
        int ten = 10;
        while(decimalPart != 0 && cnt--){                       // Print upto 6 decimal places
            int dig = (int)(decimalPart*ten);
            buff[i++] = (char)(zero + dig);
            decimalPart = decimalPart*ten - (float)dig;
        }
    }
    buff[i] = '\0';
    bytes = i+1;

    __asm__ __volatile__(
        "movq $1, %%rax;"
        "movq $1, %%rdi;"
        "syscall;"
        :
        :"S"(buff), "d"(bytes)
    );
    return bytes;
}