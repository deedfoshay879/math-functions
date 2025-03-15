#include <math.h>

double my_sqrt(double x) {
    return sqrt(x);
}

int main() {
    double result = my_sqrt(16);
    printf("The square root of 16 is %f\n", result);
    return 0;
}
