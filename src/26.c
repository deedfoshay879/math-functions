#include <stdio.h>

// Define a simple function
void add(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

int main() {
    int x = 5;
    int y = 3;

    // Call the function and pass arguments
    add(x, y);

    return 0;
}
