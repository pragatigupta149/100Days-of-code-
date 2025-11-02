//Find the digit that occurs the most times in an integer number.
    
#include <stdio.h>

int main() {
    int num, digit, maxDigit = 0;
    int count[10] = {0}; // To store count of each digit (0–9)

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    int maxCount = count[0];
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs most often is: %d\n", maxDigit);
    printf("It appears %d times.\n", maxCount);

    return 0;
}
