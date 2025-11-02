#include <stdio.h>

int main() {
    int n, arr[100];

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nNext Greater Elements:\n");

    // Find next greater element for each element
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Default if none found
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // First greater element to the right
            }
        }

        // Print result in comma-separated format
        printf("%d", nextGreater);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
