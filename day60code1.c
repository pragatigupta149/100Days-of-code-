#include <stdio.h>

int main() {
    int n, k, arr[100];

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements of array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input window size
    printf("Enter window size (k): ");
    scanf("%d", &k);

    // Check for valid k
    if (k > n || k <= 0) {
        printf("Invalid window size!\n");
        return 0;
    }

    printf("Maximum elements of each subarray of size %d:\n", k);

    // Brute force method to find max of each subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
