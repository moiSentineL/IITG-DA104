#include <math.h>
#include <stdatomic.h>
#include <stdio.h>

/*
3. Write a C function to compute the area and perimeter of a triangle
   whose sides a, b, and c are given by the user as inputs.

   The function prototype is:
*/

void area_peri(float x, float y, float z, float *a, float *p);

int main(void) {
    float a, b, c, area, perimeter;
    scanf("%f%f%f", &a, &b, &c);

    area_peri(a, b, c, &area, &perimeter);

    printf("Area:%f\nPerimeter:%f", area, perimeter);
    return 0;
}


void area_peri(float x, float y, float z, float *a, float *p) {
    float s = (x + y + z) * 0.5;
    float sq = s * (s - x) * (s - y) * (s - z);

    // we'll skip all the logical bitching and assume it's a triangle that
    // exists

    *p = x + y + z;
    *a = sqrt(sq);
}
