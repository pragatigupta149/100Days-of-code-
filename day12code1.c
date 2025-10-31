#include <stdio.h>   // Header file for input and output functions

int main() {
    int days;      // Variable to store number of late days
    int fine = 0;  // Variable to store total fine

    // Taking input from the user
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

    // Calculating fine based on the number of late days
    if (days <= 0) {
        printf("No fine. Book returned on time.\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%d\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = ₹%d\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled due to delay of more than 30 days.\n");
    }

    return 0;   // Program executed successfully
}
