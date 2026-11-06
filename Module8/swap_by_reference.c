#include <stdio.h>

/*
2. Write a function to swap numbers using call-by-reference.
   - In the main function, take two integers as user input.
   - Call the function swap().
   - Print the integers. The values of the integers should be swapped.

   The function prototype is:
*/
void swap(int *p, int *q);

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("Original:\na:%d, b:%d\n", a, b);

    swap(&a, &b);

    printf("After swap:\na:%d, b:%d", a, b);

    return 0;
}

void swap(int *p, int *q) {
    int tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
}
