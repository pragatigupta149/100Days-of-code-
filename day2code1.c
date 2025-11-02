Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
    #include <stdio.h>   // Header file for input and output functions

int main() {
    float length, breadth;        // Variables to store dimensions
    float area, perimeter;        // Variables to store results

    // Taking input from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculating area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Displaying the results
    printf("\nArea of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;   // Program executed successfully
}
