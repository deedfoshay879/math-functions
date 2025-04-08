#include <stdio.h>

double sum(double a, double b) {
    return (a + b);
}

int main() {
    double num1 = 3.5;
    double num2 = 4.0;
    printf("The sum of %.2f and %.2f is: %f\n", num1, num2, sum(num1, num2));
    return 0;
}
