// Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
  if (num < 2) return false;
  if (num == 2) return true;
  if (num % 2 == 0) return false;

  for (int i = 3; i * i <= num; i += 2) {
    if (num % i == 0) return false;
  }

  return true;
}

int main(void) {
  int num;
  bool result;

  printf("Enter a number: ");
  scanf("%d", &num);

  result = is_prime(num);
  if (result) {
    printf("%d is a prime number\n", num);
  } else {
    printf("%d is not a prime number\n", num);
  }

  return 0;
}
