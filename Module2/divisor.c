#include <math.h>
#include <stdio.h>

int main(void) {
    int f, d1, d2;

    scanf("%d%d%d", &f, &d1, &d2);

    printf("%d", ((f % d1 == 0) && (f % d2 == 0)) ? 1 : 0);
    // how elegant. logic always saves the day (provided you know what the fuck is going on).

    return 0;

}
