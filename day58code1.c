#include <stdio.h>

int main() {
    int n, nums[100];
    
    // Input the size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[100];

    // Compute product except self (brute force)
    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = 0; j < n; j++) {
            if (i != j)
                product *= nums[j];
        }
        answer[i] = product;
    }

    // Print result
    printf("\nProduct of array except self:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
