#include <stdio.h>

// Write a C program that accepts two numbers from the user: an integer (iVal) and a floating-point number (fVal).

// The program will ask the user to predict the result type and predicted value.
// The program will display the Predicted type & value (as entered by the student) and actual type & value (computed by the program).
// Finally, the program will print whether the prediction was correct or not.
// The expressions to predict are (a) int + float and (b) int / float.

int main(void) {

    int iVal, n;
    float fVal;

    printf("just do your job: ");
    scanf("%d%f", &iVal, &fVal);

    printf("just do your job (which is to predict type)\n1 = int\t2 = float\t");
    scanf("%d", &n);

    switch (n)

    return 0;
}
