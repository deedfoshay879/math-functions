#include <stdio.h>

void fibonacci(int n) {
    if (n <= 1) {
        printf("%d ", n);
    } else {
        int first = 0, second = 1;
        for (int i = 2; i <= n; i++) {
            int temp = first + second;
            first = second;
            second = temp;
            if (i % 2 == 0) {
                printf("%d ", temp);
            } else {
                printf("%d ", second);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
