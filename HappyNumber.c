// Happy Number Detection

// Given a positive integer:
// Replace the number with the sum of the squares of its digits.
// Repeat.
// If it reaches 1, it is a happy number.
// If the process enters a cycle, it is not.

#include <stdio.h>

int main() {

    int number;
    printf("Enter Your Number: ");
    scanf("%d", &number);

    number = (int)number;// #bugg here there is not need of number = (int)number; as previously number is already int 

    int attempts = 0;

    int sum = 0;

    while (number != 1) {

        attempts = attempts + 1;

        while (number > 0) {

            int sum = number % 10;

            sum = sum + number * number; // #bugg here there is a bugg in sum = sum + digit * digit; it should be sum = sum + number * number;

            number = sum / 10;
        }

        number = sum;
    }

    if (number == 1) {
        printf("It has Entered a Loop\n");
    } else {
        printf("It is a Happy Number\n");
    }

    return 0;
}