#include <stdio.h>
double square(double x) {
    return x * x;
}

double cube(double x) {
    return x * x * x;
}

double power(double base, double exponent) {
    if (exponent > 0)
        return base ** exponent;
    else
        return 1 / (base ** (-exponent));
}
