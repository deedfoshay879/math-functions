#include <stdio.h>

void square(int num) {
    printf("Square of %d is %d\n", num, num * num);
}

int main() {
    int x = 5;
    square(x);
    return 0;
}
