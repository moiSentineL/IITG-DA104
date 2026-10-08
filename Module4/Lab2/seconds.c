#include <stdio.h>

// Write a C program that takes as input the time in hours, minutes, and seconds.
// The program should convert the time to seconds.
// Extend the program to calculate the percentage of the day this time represents.

int main(void) {
    int h, m, s = 0;
    float per = 0;

    printf("time in (h, m, s): ");
    scanf("%d%d%d", &h, &m, &s);

    h *= 3600;
    m *= 60;
    s += h + m; // beauty of working with variables without side effects. gives me lisp-y feeling.

    per = (float) s/86400 * 100;

    printf("sec: %d\nper: %f", s, per);

    return 0;
}
