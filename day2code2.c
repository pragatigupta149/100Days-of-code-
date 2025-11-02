Write a program to calculate the area and circumference of a circle given its radius.
    #include <stdio.h>   // Header file for input and output functions
#define PI 3.1416     // Defining the value of π (pi)

int main() {
    float radius, area, circumference;   // Variables to store radius and results

    // Taking input from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Displaying the results
    printf("\nArea of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;   // Program executed successfully
}
