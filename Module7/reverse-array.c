#include <stdio.h>

// Write a function to reverse an array. The function prototype is:

void reverse(int[], int size);

// The function accepts the array and its size. Write a main function that accepts an array of size n. The code for the main function is given below.

int main() {
    int arr[10], n;

    printf("Enter the size of the array (<10):");
    scanf("%d", n);

    printf("Enter the array elements\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, n);

    printf("The reversed array elements are\n");

    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}
