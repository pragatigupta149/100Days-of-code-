//Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);

    // To handle cases where k > n
    k = k % n;

    printf("Array before rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Temporary array to store rotated version
    int temp[n];
    int index = 0;

    // Copy last k elements to the beginning
    for (i = n - k; i < n; i++) {
        temp[index++] = arr[i];
    }

    // Copy the remaining elements
    for (i = 0; i < n - k; i++) {
        temp[index++] = arr[i];
    }

    // Copy back to original array
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("\nArray after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
