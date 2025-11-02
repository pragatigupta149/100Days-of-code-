#include <stdio.h>

int main() {
    int n, nums[100];
    int majority = -1;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Find the majority element (appears more than n/2 times)
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }
        if (count > n / 2) {
            majority = nums[i];
            break;  // only one majority possible
        }
    }

    // Output result
    if (majority == -1)
        printf("No majority element found. Output: -1\n");
    else
        printf("Majority element is: %d\n", majority);

    return 0;
}
