#include <stdio.h>

double squareRoot(double x) {
    if (x >= 0) {
        double sqrt = sqrt(x);
        printf("Square root of %lf is %lf\n", x, sqrt);
    } else {
        printf("Square root of a negative number is not defined in real numbers.\n");
    }
}

int main() {
    double input;
    printf("Enter a number: ");
    scanf("%lf", &input);

    squareRoot(input);
    
    return 0;
}
