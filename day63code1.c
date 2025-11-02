#include <stdio.h>

int main() {
    int n, k, arr[100], temp;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input k
    printf("Enter value of k: ");
    scanf("%d", &k);

    // Check for valid k
    if (k <= 0 || k > n) {
        printf("Invalid value of k!\n");
        return 0;
    }

    // Sort array using simple Bubble Sort (for 1st sem level)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print kth smallest element
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
