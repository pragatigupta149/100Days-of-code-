Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>   // Header file for input and output functions

int main() {
    float side1, side2, side3;   // Variables to store side lengths

    // Taking input from the user
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if sides form a valid triangle
    if ((side1 + side2 > side3) && 
        (side2 + side3 > side1) && 
        (side1 + side3 > side2)) {

        // Classify the triangle
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;   // Program executed successfully
}
