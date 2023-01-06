// Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>

void print_pascal_triangle(int n) {
  int C = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", C);
      C = C * (i - j) / (j + 1);
    }
    printf("\n");
  }
}

int main(void) {
  int n;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  printf("Pascal triangle with %d rows:\n", n);
  print_pascal_triangle(n);

  return 0;
}
