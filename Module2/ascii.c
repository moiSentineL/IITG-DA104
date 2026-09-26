#include <stdio.h>

int main(void) {
    char c, d;
    scanf("%c%c", &c, &d);

    printf("%d, %d", c, d);
    // prints the ascii automatically because it's by default
    // stored as "number"

    return 0;

}
