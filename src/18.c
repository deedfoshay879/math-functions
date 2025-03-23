#include <stdio.h>

double add(const double a, const double b) {
    return a + b;
}

int main() {
    double x = 2.0, y = 3.0;
    printf("The sum of %lf and %lf is %lf\n", x, y, add(x, y));
    return 0;
}
