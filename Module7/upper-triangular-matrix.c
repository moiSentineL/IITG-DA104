#include <stdio.h>

// Write a program to check whether a matrix is an upper triangular matrix or
// not. An upper triangular matrix is a square matrix, whose all elements below
// the principal diagonal are zeros.

int main(void) {

    // mathematically:
    // let i be row; j be column (coords); if i > j, then it's below diagonal.
    // we need to check if all such elements are zero.

    // base case: 3x3 matrix:
    int ar[3][3] = {{1, 2, 3}, {0 , 1 , 2}, {0 , 0 , 1}}; // this is a upper triangular matrix
    int arf[3][3] = {{1, 2, 3}, {0 , 1 , 2}, {1 , 0 , 1}}; // this is NOT a upper triangular matrix

    // use nested loops:
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < i; j++) {
          if (ar[i][j] == 0) // you can sub for arr[i][j] to check the other one
              continue; // if all goes fine, it moves to line 30
          else {
              printf("Not an upper triangular matrix, no.");
              return 0; // exits right away
          }
        }
    }
    printf("It's an upper triangular matrix, yes.");
    return 0;
}
