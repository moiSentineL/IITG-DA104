#include <stdio.h>

// Write a program that takes two integer numbers x and y as user input and prints the even numbers between them.
// If x > y, then the program should print, “No even numbers possible”.

int main(void) {

    int x, y;
    scanf("%d%d", &x, &y);

    if (x > y) {
      printf("No even numbers possible.");
    }

    int i = 0;

    while (i <= y) {

        if ((i % 2 == 0) && (i > x)) {
            printf("%d\t", i);
      }
        i++;
    }

    return 0;

}
