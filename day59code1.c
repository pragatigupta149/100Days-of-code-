//Q109. Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k, arr[100];

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input subarray size
    printf("Enter subarray size (k): ");
    scanf("%d", &k);

    // Check if k is valid
    if (k > n || k <= 0) {
        printf("Invalid subarray size!\n");
        return 0;
    }

    int maxSum = 0;

    // Compute the sum of the first window
    for (int i = 0; i < k; i++)
        maxSum += arr[i];

    int windowSum = maxSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    // Output result
    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);

    return 0;
}
