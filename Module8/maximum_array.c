#include <stdint.h>
#include <stdio.h>

/*
4. Write a function to find the maximum element in an array passed
   as an argument.

   The function prototype is:
*/

#define SIZE 5

float *findMax(float A[], int size); // this functin returns a pointer, which is why it's *func.

int main(void) {

    float ar[SIZE] = {1.0, 2.0, 3.0, 5.0, 4.0};

    printf("Max: %f", *findMax(ar, SIZE));

    return 0;
}

float *findMax(float A[], int size) {
    float max = 0;
    int index = 0;

    for (int i = 0; i < size; i++) {
      if (A[i] > max) {
          max = A[i];
          index++;
      } else
          continue;
    }

    return &A[index-1]; // pointer yayy!
}
