#include <stdio.h>
int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("The area of a circle with radius %.2f is %.2f\n", 2 * M_PI * x, M_PI * x * x);
    printf("The volume of a sphere with radius %.2f is %.2f\n", (M_PI / 6) * x * x, (3.0/4.0) * x * x * x);
    return 0;
}
