#include <stdio.h>   // Header file for input and output functions

int main() {
    int year;   // Variable to store the year

    // Taking input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the year is a leap year
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;   // Program executed successfully
}
