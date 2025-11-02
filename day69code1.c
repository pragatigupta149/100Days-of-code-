#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (one element is repeated): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int expectedSum = (n - 1) * (n - 2) / 2; // Sum of unique elements (0 to n-2)
    int actualSum = 0;

    for (i = 0; i < n; i++)
        actualSum += arr[i];

    printf("The repeated element is: %d\n", actualSum - expectedSum);

    return 0;
}
