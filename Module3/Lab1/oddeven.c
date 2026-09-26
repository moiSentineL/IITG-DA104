#include <stdio.h>

/* Write a program that accepts a number n from the user. */
/* The program then asks the user to enter n numbers and prints whether the number is even or odd. */

int main(void) {

    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }

    return 0;
}
