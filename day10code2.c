Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>   // Header file for input and output functions

int main() {
    int day;   // Variable to store day number

    // Taking input from the user
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    // Displaying the corresponding day using switch-case
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;   // Program executed successfully
}
