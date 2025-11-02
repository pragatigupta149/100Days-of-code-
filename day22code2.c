#include <stdio.h>

int main() {
    int n;          // Number of terms
    int numerator = 1, denominator = 2;  // Starting values
    float sum = 0.0; // Use float for fractional sum

    // Take input from user
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 0;
    }

    printf("Series: ");

    // Loop to calculate sum of the series
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator; // Add term to sum
        printf("%d/%d", numerator, denominator);
        if (i < n)
            printf(" + ");

        numerator += 2;     // Increase numerator by 2
        denominator += 2;   // Increase denominator by 2
    }

    // Display result
    printf("\nSum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
