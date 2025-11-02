//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int n, x;
    int arr[100];
    int ceilIndex = -1;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input target value x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Find the ceil of x
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;  // first occurrence of element >= x
        }
    }

    // Print result
    if (ceilIndex == -1)
        printf("No ceil found! Output: -1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);

    return 0;
}
