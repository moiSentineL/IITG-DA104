#include <stdio.h>

// Write a program to store the marks of students in a 2D array. There are 4
// students, and the program needs to record the mark of 3 subjects per student.
// The marks can be decimal. Compute the average mark of each student.

#define STUDENT 4
#define SUBJECT 3

int main(void) {

    // structure: rows are students, columns are marks; so

    // row index is for student
    // column index for subject

    double ar[STUDENT][SUBJECT] = {
    {1.2, 2.3, 3.4}, {5.0, 4.0, 3.0}, {2.0, 1.7, 3.4}, {3.2, 4.3, 2.5}};

    // make array to keep the averages:

    double avg[4] = {0};

    for (int i = 0; i < STUDENT; i++) {
        // this loop traverses across students
        for (int j = 0; j < SUBJECT; j++) {
            // this loop across marks in that student, and allocates information to the mapped "avg" array.
            avg[i] += ar[i][j];
        }

        avg[i] /= 3.0; // to calculate the average

    }

    for (int i = 0; i < STUDENT; i++) {

        printf("Average for Student%d: %lf\n", i+1, avg[i]);
    }

    return 0;
}
