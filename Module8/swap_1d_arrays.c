#include <stdio.h>

/*
5. Write a program to swap two 1D arrays using pointers.

   In the main function:
   - Use inputArray() to read the two arrays [ that is, ask for input and store ]
   - Call swapArray().
   - Print the arrays using printArray().

   You should use the following function prototypes:
*/

#define SIZE 5

void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);

int main(void) {
    int ar1[SIZE], ar2[SIZE];

    printf("Input for Array 1: ");
    inputArray(ar1, SIZE);
    printf("Input for Array 2: ");
    inputArray(ar2, SIZE);

    printf("Before:");
    printArray(ar1, SIZE);
    printArray(ar2, SIZE);

    swapArray(ar1, ar2, SIZE);

    printf("After");
    printArray(ar1, SIZE);
    printArray(ar2, SIZE);

    return 0;
}

void inputArray(int *arr, int size) {

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

}

void printArray(int *arr, int size) {
    printf("\nArray: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void swapArray(int *sourceArr, int *destArr, int size) {
    int tmp[SIZE];

    for (int i = 0; i < size; i++) {
      // usual swap idea, extended to arrays by loops. simple as that. basic.

        tmp[i] = sourceArr[i];
        sourceArr[i] = destArr[i];
        destArr[i] = tmp[i];
    }

}
