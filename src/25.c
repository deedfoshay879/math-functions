#include <stdio.h>

void print_sum(int num1, int num2) {
    int result = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    print_sum(num1, num2);
    return 0;
}
