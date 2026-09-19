#include <stdio.h>

int fact(int n);

int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative number is not defined");
    } else {
        printf("Factorial is: %d", fact(n));
    }

    return 0;
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
