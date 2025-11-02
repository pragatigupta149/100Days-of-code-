#include <stdio.h>

int main() {
    int n, i, sum = 0, total;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 0 to n with one missing): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Sum of first n natural numbers (0 to n)
    total = n * (n + 1) / 2;

    // Sum of given elements
    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("The missing number is: %d\n", total - sum);

    return 0;
}
