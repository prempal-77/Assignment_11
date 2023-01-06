// Write a function to print all Prime numbers between two given numbers. (TSRN)
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

void print_primes(int start, int end) {
  for (int i = start; i <= end; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }

  printf("\n");
}

int main(void) {
  int start, end;

  printf("Enter the start number: ");
  scanf("%d", &start);
  printf("Enter the end number: ");
  scanf("%d", &end);

  printf("The prime numbers between %d and %d are: ", start, end);
  print_primes(start, end);

  return 0;
}
