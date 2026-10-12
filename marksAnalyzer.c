// Student Marks Analyzer
// Write a program that accepts the marks obtained by a student in five subjects.
// The program should determine the highest marks, lowest marks, and average marks obtained by the student, and display all three results.

#include <stdio.h>

int main() {

    int highestMarks ; // #bug here there should be only int highestMarks instead of char highestMarks
    int lowestMarks;   // #bug here there should be only int lowestMarks instead of char lowestMarks

    int subject1; // #bugg here there is a bugg there is char instead of int
    printf("Enter Marks for Subject 1: ");
    scanf("%d", &subject1); // #bug here there is a bug in scanf there should be %d insted of %c

    int subject2; // #bugg here there is a bugg there is char instead of int
    printf("Enter Marks for Subject 2: ");
    scanf("%d", &subject2); // #bug here there is a bug in scanf there should be %d insted of %c

    int subject3; // #bugg here there is a bugg there is char instead of int
    printf("Enter Marks for Subject 3: ");
    scanf("%d", &subject3); // #bug here there is a bug in scanf there should be %d insted of %c

    int subject4; // #bugg here there is a bugg there is char instead of int
    printf("Enter Marks for Subject 4: ");
    scanf("%d", &subject4); // #bug here there is a bug in scanf there should be %d insted of %c

    int subject5; // #bugg here there is a bugg there is char instead of int
    printf("Enter Marks for Subject 5: ");
    scanf("%d", &subject5); // #bug here there is a bug in scanf there should be %d insted of %c

    if (subject1 < subject2) {
        highestMarks = subject2;
    } else {
        highestMarks = subject1;
    }

    if (subject2 < subject3) {
        highestMarks = subject3;
    }

    if (subject3 < subject4)
    {
        highestMarks = subject4;
    }

    if (subject4 < subject5)
    {
        highestMarks = subject5;
    }

    if (subject2 < subject1)
    {
        lowestMarks = subject2;
    }

    if (subject2 < subject3) {
        lowestMarks = subject3;
    }
    {
        lowestMarks = subject2;
    }

    if (lowestMarks < subject3) {
        lowestMarks = subject3;
    }

    if (lowestMarks < subject4) {
        lowestMarks = subject4;
    }

    if (lowestMarks < subject5) {
        lowestMarks = subject5;
    }

    float avg = subject1 + subject2 + subject3 + subject4 + subject5 / 5;

    printf("Highest: %d\n", highestMarks);
    printf("Lowest: %d\n", lowestMarks);
    printf("Average: %f\n", avg);

    return 0;
}