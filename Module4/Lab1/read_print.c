#include <stdio.h>

// Write a program to read a continuous stream of characters (use getchar())
// and print the characters (use putchar()).

// The program should halt when the user enters EOF.

int main(void) {
    char c;

    while ((c = getchar()) != EOF) {

        putchar(c);
  }


    return 0;
}
