#include <stdio.h>

// Object-like macro
#define PI 3.14159

// Function-like macro
#define SQUARE(x) (x) * (x)

int main() {
  float radius = 5.0;
  float area = PI * SQUARE(radius);

  printf("The area of the circle is: %f\n", area);

  return 0;
}
