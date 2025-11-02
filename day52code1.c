#include <stdio.h>

int main() {
    int n, x;
    int arr[100];
    int ceilIndex = -1;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input target value x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Find the ceil of x
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;  // first occurrence of element >= x
        }
    }

    // Print result
    if (ceilIndex == -1)
        printf("No ceil found! Output: -1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);

    return 0;
}
