//testing various declrations , while loop and for loop

void foo(){
    int a;
    int b;
    a=5;
    b=4;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
    int a=5;
    while(a<10)a++;
    int i;
    for(i=0;i<10;i++){foo();}
    if(true )foo();
    foo();
    return 0;

}
