#include <stdio.h>

int main() {
    int n, target;
    int nums[100];
    int first = -1, last = -1;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Input target element
    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    // Print result
    if (first == -1)
        printf("Target not found! Output: -1, -1\n");
    else
        printf("First occurrence: %d (Index %d)\nLast occurrence: %d (Index %d)\n",
               nums[first], first, nums[last], last);

    return 0;
}
