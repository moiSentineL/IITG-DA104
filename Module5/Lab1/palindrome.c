#include <stdio.h>

// Write a function int isPalindrome(int n) that checks if a number is palindrome.
// The function returns 1 for yes, 0 for no.

int isPalindrome(int n);
int reverseNumber(int n);

int main(void) {

    int n;
    scanf("%d", &n);

    printf("%d", isPalindrome(n));

    return 0;
}

int isPalindrome(int n){

    if (n == reverseNumber(n))
      return 1;
    else
      return 0;

}


int reverseNumber(int n) {

    int rev = 0, rem = 0;

    while (n != 0) {
        rem = n % 10;
        n /= 10;

        rev = rev*10 + rem;

    }

    return rev;
}
