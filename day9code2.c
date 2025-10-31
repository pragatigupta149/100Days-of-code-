#include <stdio.h>   // Header file for input and output functions

int main() {
    float percentage;   // Variable to store the percentage

    // Taking input from the user
    printf("Enter your percentage (0-100): ");
    scanf("%f", &percentage);

    // Checking if input is valid
    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
    }
    else if (percentage >= 90) {
        printf("Grade A\n");
    }
    else if (percentage >= 80) {
        printf("Grade B\n");
    }
    else if (percentage >= 70) {
        printf("Grade C\n");
    }
    else if (percentage >= 60) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;   // Program executed successfully
}
