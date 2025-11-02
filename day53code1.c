#include <stdio.h>

int main() {
    int n, arr[100];
    int totalSum = 0, leftSum = 0, pivotIndex = -1;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];  // Calculate total sum
    }

    // Find pivot index
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            pivotIndex = i;
            break; // stop at first (leftmost) pivot
        }
        leftSum += arr[i];
    }

    // Output result
    if (pivotIndex == -1)
        printf("No pivot index found. Output: -1\n");
    else
        printf("Pivot index is %d\n", pivotIndex);

    return 0;
}
