#include <stdio.h>

/*
1. Write a C program to create the following pointers:
   a. Pointer to a floating point constant (pointer name: fp)
   b. Constant pointer to a floating point variable (pointer name: cfp)
   c. Constant pointer and pointer to a floating point constant
      (pointer name: cptr)

For each of the pointers, try the following test cases and report your result:
   - Let the pointer point to a different floating point variable.
   - Change the value pointed to by the pointer.

Write your observations in a text file.
*/

int main(void) {
    // constants:
    const float pi = 3.14159;
    float e = 2.718282;
    const float r2 = 1.41421;

    // pointers:
    const float *fp = &pi; // fp -> pi
    float *const cfp = &e; // cfp -> e
    const float *const cptr = &r2; // cptr -> r2

    fp = &e; // should work

    cfp = &pi; // shouldn't work
    cptr = &pi; // shouldn't work

    *fp = 1.23; // shouldn't work since pi is const

    *cfp = 2.241; // should work

    *cptr = 4.52; // shouldn't work.

    return 0;
}
