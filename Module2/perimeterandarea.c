#include <stdio.h>

/* Compute the perimeter and area of a rectangle */

int main(void) {
    int x, y;

    scanf("%d%d", &x, &y);
    printf("Perimeter: %d\nArea: %d", 2 * (x + y), x * y);

    return 0;

}
