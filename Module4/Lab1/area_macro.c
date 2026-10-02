#include <stdio.h>

// Compute the area of a circle, square and rectangle using parameterized macros.

#define circle(r) 3.14*r*r
#define square(s) s*s
#define rectangle(x, y) x*y

// no ; here!

int main(void) {

    int r, s, x, y = 0;

    scanf("%d%d%d%d", &r, &s, &x, &y);
    printf("%f, %d, %d", circle(r), square(s), rectangle(x, y));

    return 0;
}
