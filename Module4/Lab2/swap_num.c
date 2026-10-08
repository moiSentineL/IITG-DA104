#include <stdio.h>

// Write a program to swap two numbers using macros.

#define swap(m, n) n

int main(void) {
    int m, n = 0;

    scanf("%d%d", &m, &n);
    printf("%d, %d", swap(m, n), swap(n, m));

    return 0;
}
