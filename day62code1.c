#include <stdio.h>

int main() {
    int n, arr[100];

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0];  // Store overall max sum
    int currSum = arr[0]; // Store current subarray sum

    // Kadane’s Algorithm
    for (int i = 1; i < n; i++) {
        if (currSum < 0)
            currSum = arr[i];
        else
            currSum += arr[i];

        if (currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum sum of contiguous subarray: %d\n", maxSum);

    return 0;
}
