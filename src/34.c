#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            printf("*");
        }
        printf("\n");
    } else {
        for (int i = 1; i <= n - 1; i++) {
            printf("*");
        }
        for (int i = n; i > 0; i--) {
            printf(" ");
        }
        printf("*\n");
    }
}
