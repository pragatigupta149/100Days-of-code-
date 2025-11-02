//Write a program to print all factors of a given number.
    
    
    #include <stdio.h>   // Header file for input and output functions

int main() {
    int num, i;

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Factors of %d are: ", num);

    // Loop to find all factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {     // If divisible, it's a factor
            printf("%d ", i);
        }
    }

    printf("\n");  // Move to the next line after printing all factors

    return 0;   // Program executed successfully
}
