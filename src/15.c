#include <stdio.h>

void sum(int a, int b) {
    printf("The sum of %d and %d is: %d\n", a, b, a + b);
}

int main() {
    int a = 5, b = 3;
    sum(a, b);
    return 0;
}
