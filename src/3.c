// File name: math_functions.h

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y == 0) {
        printf("Error: division by zero is undefined.\n");
        exit(1);
    }
    return x / y;
}
