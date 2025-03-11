  #include <stdio.h>
  
  float squareRoot(float n) {
    if (n <= 0) {
      printf("Error: Non-positive value passed to square root function.");
      return -1;
    }
    
    return sqrtf(n);
  }
  
  int main() {
    float x = 25.0f;
    float result = squareRoot(x);
    
    printf("The square root of %f is %f.\n", x, result);
    
    return 0;
  }
  