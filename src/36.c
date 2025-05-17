#include <stdio.h>

void add(int x, int y) {
    printf("Adding %d + %d = ", x, y);
    printf("%d", (x + y));
}

int main() {
    int a = 5;
    int b = 3;

    add(a, b);
    return 0;
}
