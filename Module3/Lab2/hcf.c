#include <stdio.h>

// Write a program to find the HCF of two integers.
// Sorta difficult.

int main(void) {

    int a, b, c;

    scanf("%d%d", &a, &b);

    // implement Euclid's Algorithm.
    // a = bq + r
    // b = rq2 + r2
    // r = r2 q3 + r3 and so on.

   while (b != 0) {
        c = b;
        b = a%b;
        a = c;
    }

    // unlike python, C cannot do a, b = c, d (same step assignment)
    // so you have to store the initial value to a temp var.

    printf("%d", a);

    return 0;

}
