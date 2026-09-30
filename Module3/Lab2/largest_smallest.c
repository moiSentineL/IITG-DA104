#include <stdio.h>

// Write a program that takes a positive integer value n as user input.
// Next it takes as input n integer numbers from the user.
// The program then prints the largest and smallest number.

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

// pitfall: macros evaluate twice.

int main(void) {

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int i = 0;
    int j, k = 1;

    while (i < n) {
        j = MAX(j, a[i]);
        k = MIN(k, a[i]);
        ++i;

        // recursive comparison to itself. if find max/min, reassign
        // otherwise, it reigns.
    }

    printf("Max: %d, Min: %d", j, k);

    return 0;
}
