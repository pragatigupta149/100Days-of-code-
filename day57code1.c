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

    printf("\nPrevious Greater Elements:\n");

    // Find previous greater element for each element
    for (int i = 0; i < n; i++) {
        int prevGreater = -1; // Default if none found

        // Search on the left side of current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // First greater element to the left
            }
        }

        // Print result in comma-separated format
        printf("%d", prevGreater);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
