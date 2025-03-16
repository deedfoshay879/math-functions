/*
 * This program calculates the factorial of a given integer.
 */

#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}
