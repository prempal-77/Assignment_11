// Write a program in C to find the square of any number using the function.
#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The square of %d is %d\n", num, square(num));
    return 0;
}
