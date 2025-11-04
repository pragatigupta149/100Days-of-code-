//Q111. Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

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

    printf("First negative integer in each subarray of size %d:\n", k);

    // Brute force approach
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0 ");
    }

    printf("\n");
    return 0;
}
