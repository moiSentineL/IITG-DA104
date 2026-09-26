#include <stdio.h>

/* Write a program to find the maximum and minimum of three numbers. */

int main(void) {

    int x, y, z, maxnum, minnum;

    x = 3, y = 70, z = 69;

    maxnum = (x > y) ? ( (x > z) ? x:z ) : ((y > z) ? y:z);
    minnum = (x < y) ? ( (x < z) ? x:z ) : ((y < z) ? y:z);

    /* elegant conditional operator usage. fuck if else statements */

    printf("%d, %d", maxnum, minnum);

    return 0;

}
