#include <stdio.h>   // Header file for input and output functions

int main() {
    int units;             // Variable to store number of units consumed
    float billAmount = 0;  // Variable to store total bill amount

    // Taking input from the user
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculating bill based on given slabs
    if (units <= 0) {
        printf("Invalid input! Units must be greater than 0.\n");
    }
    else if (units <= 100) {
        billAmount = units * 5;
    }
    else if (units <= 200) {
        billAmount = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        billAmount = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        billAmount = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    // Displaying the bill amount
    if (units > 0) {
        printf("Total Electricity Bill = ₹%.2f\n", billAmount);
    }

    return 0;   // Program executed successfully
}
