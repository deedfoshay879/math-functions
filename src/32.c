#include <stdio.h>

void main() {
    int x = 5;
    double y = 3.14;

    printf("x = %d\n", x);
    printf("y = %.2f\n", y);

    // Add some calculations with floating point numbers and print the result
    float z = x + y;
    printf("z = %.6f\n", z);

    // Output a message indicating that the program is finished
    printf("\nProgram is finished.\n");
}
