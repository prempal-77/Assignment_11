//1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>

int lcm(int a, int b) {
  int i, lcm;

  for (i = 1; i <= a || i <= b; i++) {
    if (i % a == 0 && i % b == 0) {
      lcm = i;
      break;
    }
  }

  return lcm;
}

int main(void) {
  int num1, num2, result;

  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);

  result = lcm(num1, num2);
  printf("The LCM of %d and %d is: %d\n", num1, num2, result);

  return 0;
}
