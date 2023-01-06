//. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>

int hcf(int a, int b) {
  int i, hcf;

  for (i = a; i > 0; i--) {
    if (a % i == 0 && b % i == 0) {
      hcf = i;
      break;
    }
  }

  return hcf;
}

int main(void) {
  int num1, num2, result;

  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);

  result = hcf(num1, num2);
  printf("The HCF of %d and %d is: %d\n", num1, num2, result);

  return 0;
}
