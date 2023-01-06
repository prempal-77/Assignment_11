//. Write a function to find the next prime number of a given number. (TSRS)
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

int next_prime(int num) {
  while (!is_prime(num)) {
    num++;
  }

  return num;
}

int main(void) {
  int num, result;

  printf("Enter a number: ");
  scanf("%d", &num);

  result = next_prime(num);
  printf("The next prime number after %d is: %d\n", num, result);

  return 0;
}
