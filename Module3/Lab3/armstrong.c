#include <stdio.h>

// A number is called an Armstrong number if the sum of the cubes of the digits of the number is equal to the number.
// For example 153 = 1^3 + 5^3 + 3^3.
// Write a C program that asks the user to enter an integer number and prints “Yes” if the number is an Armstrong number else “No”.

int main(void) {

    int n, i, n_og, sum;

    scanf("%d", &n);

    n_og = n; // otherwise, it gets lost.

    while (n != 0) {

        i = n%10;
        n /= 10;

        // classic code for separating digits!

        sum += i*i*i;
    }

    printf("%s", (sum == n_og) ? "Yes":"No");

    return 0;
}
