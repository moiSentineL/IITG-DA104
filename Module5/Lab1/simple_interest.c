#include <stdio.h>

// Write a function float simpleInterest(float p, float r, float t) that calculates and returns simple interest.
// Call this function from main() using user input.

float simpleInterest(float p, float r, float t);

int main(void) {

    float p, r, t;

    scanf("%f%f%f", &p, &r, &t);
    printf("%f", simpleInterest(p, r, t));

    return 0;
}


float simpleInterest(float p, float r, float t) {

    // note that simple interest = prt / 100

    return (p * r * t) / 100;
}
