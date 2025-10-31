#include <stdio.h>   // Header file for input and output functions

int main() {
    float celsius, fahrenheit;   // Variables to store temperatures

    // Taking input from the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Converting Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying the result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;   // Program executed successfully
}
