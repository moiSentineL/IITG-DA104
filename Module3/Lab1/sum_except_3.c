#include <stdio.h>

/* Write a program to find the sum of all numbers from 1 to 100 except the multiples of 3. */

int main(void) {

    /* Algo: just use n(n+1)/2 and S3 = n/2(2a + (n-1)d) */

    int sumall, sum3;

    sumall = (100 * 101) / 2;

    /* And after some manual finding of "n" */

    sum3 = (33 * (6 + (32) * 3)) / 2;
    /* not  (33 / 2) * (6 + (32) * 3); that makes a round off, which produces an error */

    /* then */

    printf("%d", sumall - sum3);

    return 0;

}
