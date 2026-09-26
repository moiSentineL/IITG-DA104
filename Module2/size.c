#include <stdint.h>
#include <stdio.h>

int main(void) {
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d", sizeof(int64_t));

    return 0;
}
