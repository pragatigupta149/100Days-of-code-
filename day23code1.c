#include <stdio.h>

int main() {
    int n;              // Number of terms
    int numerator = 2;  // Starting numerator
    int denominator = 3; // Starting denominator
    float sum = 0.0;    // Variable to store total sum

    // Take input from user
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 0;
    }

    printf("Series: ");

    // Loop to calculate series sum
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;  // Add current term to sum
        printf("%d/%d", numerator, denominator);

        if (i < n)
            printf(" + ");

        numerator += 2;      // Increase numerator by 2
        denominator += 4;    // Increase denominator by 4
    }

    // Display the result
    printf("\nSum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
