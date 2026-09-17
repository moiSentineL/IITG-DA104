#include <stdio.h>

int main(void) {
    int days;
    int years, weeks, leftover;
    // it wouldn't work if it were floats
    // because picking int type, by default, does a floor.

    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    leftover = days - (years * 365) - (weeks * 7);

    // the main math here is the rounding off (floor)

    printf("Years: %d\nWeeks: %d\n Days: %d\n", years, weeks, leftover);
    return 0;


}
