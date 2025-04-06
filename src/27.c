#include <stdio.h>
#include <stdlib.h>

double find_gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return find_gcd(b, a % b);
}

int main() {
    printf("GCD of 12 and 8 is: %d", find_gcd(12, 8));
    return 0;
}
