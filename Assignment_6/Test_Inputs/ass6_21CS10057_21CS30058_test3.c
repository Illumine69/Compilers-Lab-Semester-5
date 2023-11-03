// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int start = 1;
    int end = 5;
    int sum = 0;
   
    factorial(4);
    return 0;
}
