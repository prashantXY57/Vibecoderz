// Electricity Bill Calculator
// Write a program that calculates the electricity bill based on units consumed using different rates for different slabs.

// 100 and below = 3
// 100-200 = 5
// 200-300 = 7
// 300 above = 10

#include <stdio.h>

int main() {

    int units; // #bugg here there is a bugg there is char units[50] instead of int 
    printf("Enter Units Consumed: ");
    scanf("%d", &units);// #bugg here there is a bugg in scaf there is no  & before units and there is %s instead of %c

    int totalBill;

    if (units <= 100 && units > 0) { // #bugg here there is units == 100 which is wrong it should be units <= 100 && units >0 according  to question
        totalBill = units * 3;
    }
    else if (units <= 200 && units > 100) { // #bugg here there is units == 200 which is wrong it should be units <= 200 && units >100 according  to question
        totalBill = units * 5; // #bugg here there there should be only units * 5 insted of units * 3 + (units - 100) * 5 
    }
    else if (units <= 300 && units > 200) { // #bugg here there is units == 300 which is wrong it should be units <= 300 && units >200 according  to question
        totalBill = units * 7;
    }
    else {
        totalBill = units * 10; // #bugg here there is units * 10 instead of that previously written 
    } // #bugg here there is a bugg there is no need of else as all cases are covered in if and else if 
    
    printf("Total Electricity Bill: %d\n", totalBill);

    return 0;
}