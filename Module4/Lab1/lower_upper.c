#include <stdio.h>

// Write a program that accepts a stream of characters until the user enters EOF.

// For each input character, the program should perform the following operation:

//     If the input character is lowercase, convert it to uppercase and vice versa.
//     Otherwise, print it is not an alphabet.

int main(void) {

    char c;

    c = getchar();

    // lowercase alphabets in ASCII = [97, 122]
    // uppercase alphabets in ASCII = [65, 90]

    if (c > 96 && c < 123) {
        c -= 32;
        printf("%c", c);
    } else if (c > 64 && c < 91) {
        c += 32;
        printf("%c", c);
    } else {
        printf("Not an alphabet");
    }

    return 0;
}
