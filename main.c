#include <stdio.h>

int main() {
  printf("Hello, World!\n");
  int a = 5;
  int b = 10;
  int sum = a + b;
  printf("Sum of %d and %d is %d\n", a, b, sum);
  for (int i = 0; i < 3; i++) {
    printf("number: %d\n", i);
  }

  return 0;
}