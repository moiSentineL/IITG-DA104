#include <stdio.h>

// Write a function int reverseNumber(int n) that returns the reverse of a
// number.

int reverseNumber(int n);

int main(void) {

    int n;
    scanf("%d", &n);

    printf("The reverse fo %d is: %d", n, reverseNumber(n));


    return 0;
}

int reverseNumber(int n) {

    int rev = 0, rem = 0;

    while (n != 0) {
        rem = n % 10;
        n /= 10;

        rev = rev*10 + rem;

    }

    return rev;
}
