//Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>    // For input and output functions
#include <math.h>     // For pow() function used in compound interest

int main() {
    float principal, rate, time;               // Input variables
    float simple_interest, compound_interest;  // Result variables

    // Taking input from the user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculating Compound Interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    // Displaying the results
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;   // Program executed successfully
}
