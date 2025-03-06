#include <stdio.h>
int main() {
  int x = 10;
  int y = 20;
  int z = sum(x, y);
  printf("The sum is: %d\n", z);
  return 0;
}

int sum(int a, int b) {
  return a + b;
}
