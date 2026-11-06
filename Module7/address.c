#include <stdio.h>

// Write a program to print the address of a double array to show that elements
// of the array are stored sequentially. Print the array length.

#define SIZE 4

int main(void) {

    double a[SIZE] = {1, 2, 3, 4};

    printf("%d\n", sizeof(a));

    for (int i = 0; i < (SIZE + 1); i++) {
        printf("Address of %d: %p\n", i, &a[i]);

        // use & (pointers) for the addresses; %p is the format
    }

    return 0;
}
