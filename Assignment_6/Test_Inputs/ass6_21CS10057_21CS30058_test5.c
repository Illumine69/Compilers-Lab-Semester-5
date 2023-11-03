// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
double divide(int a, int b) {
    if (b != 0) {
        return (double)a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0.0;
    }
}

int main() {
    int x = 10;
    int y = 5;
    int result;

    // Assignment and arithmetic operations
    result = add(x, y);
    printf("Addition: %d + %d = %d\n", x, y, result);

    result = subtract(x, y);
    printf("Subtraction: %d - %d = %d\n", x, y, result);

    result = multiply(x, y);
    printf("Multiplication: %d * %d = %d\n", x, y, result);

    double division_result = divide(x, y);
    printf("Division: %d / %d = %lf\n", x, y, division_result);

    // Unary operations
    x++;
    printf("Increment x: %d\n", x);

    y--;
    printf("Decrement y: %d\n", y);

    // Binary assignment operations
    x = x + 5;
    printf("x += 5: %d\n", x);

    y = y*2;
    printf("y *= 2: %d\n", y);

    return 0;
}
