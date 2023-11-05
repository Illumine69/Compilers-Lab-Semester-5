//testing various declarations , while loop and for loop
void foo() {
    int a = 5;
    int b = 4;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    int b[100][20];

    b[1][1]=4;

    int a = 5;
    while (a < 10) {
        a++;
    }

    int i;
    for (i = 0; i < 10; i++) {
        foo();
    }

    if (1) {
        foo();
    }

    foo();

    return 0;
}

