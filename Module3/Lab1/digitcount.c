#include <stdio.h>

/* Write a program that accepts a number n from the user and counts the number of digits in n. */

int main(void) {

    int n;
    int i = 0;

    scanf("%d", &n);

    // * Algo: anything can be a ones + tens + hundreds + ...
    // * But how do i "segregate"?

    // * Alternatively: something like sizeof? maybe i can store it as a string?

    // Remember, I don't have to "separate and show" each digit. I can get away
    // with by just giving the number of digits...

    while (n != 0) {
        n /= 10;
        // i++; // post-fix works too. since it will not exactly could the n = 0
        // case, so no extra arms and legs.

        ++i;

        // repeated division, followed by storing the number of iterations ->  number of digits
    }

    printf("digits: %d", i);

    return 0;

}
