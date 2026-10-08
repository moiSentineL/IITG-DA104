#include <stdio.h>

// Write a program that accepts a floating-point number and prints the ceiling and floor values of the number.

// You should not use any standard function.

int main(void) {

    float n;
    scanf("%f", &n);

    // floor(x) <= x
    // ceil(x) >= x

    printf("floor: %d\nceil: %d", (int) n, ((int) n == n) ? (int) n : (int) (n + 1));

    // (int) n == n is the check for value despite datatype.


    return 0;

}
