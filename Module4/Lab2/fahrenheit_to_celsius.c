#include <stdio.h>

// Write a C program to convert Fahrenheit to Celsius using macros.
// The formula is (<Farhenheit> - 32) X 5/9 = <Celsius value>.

#define cel(f) (f - 32) * (float) 5 / 9

// the (float) typecasting is important. otherwise it just results in 0 for all f.

int main(void) {
    int f = 0;

    scanf("%d", &f);

    printf("%f", cel(f)); // notice: not %d

   return 0;
}
