#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    // Take input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 10) {
        printf("After swapping: %d (only one digit, no change)\n", num);
        return 0;
    }

    int temp = num;

    // Find last digit
    lastDigit = num % 10;

    // Count number of digits
    digits = (int)log10(num);

    // Find first digit
    firstDigit = num / (int)pow(10, digits);

    // Remove first and last digits from the number
    temp = num % (int)pow(10, digits);
    temp = temp / 10;

    // Construct the swapped number
    swappedNum = lastDigit * (int)pow(10, digits) + (temp * 10) + firstDigit;

    // Display result
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
