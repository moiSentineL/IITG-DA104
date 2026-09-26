#include <stdio.h>

void power(int base) {
    int result = 1;

    for (int i = 0; i <= 5; i++) {
        printf("\t%d", result *= base);
    }

}

int main(void) {

    for (int i = 1; i <= 10; i++) {
        power(i);
        printf("\n");
  }
    return 0;
}
