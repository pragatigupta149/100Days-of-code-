#include <stdio.h>

int main() {
    int n, x = -1;
    int totalSum = 0, leftSum = 0;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate total sum from 1 to n
    totalSum = n * (n + 1) / 2;

    // Find pivot integer
    for (int i = 1; i <= n; i++) {
        leftSum += i;  // sum from 1 to i
        int rightSum = totalSum - leftSum + i;  // sum from i to n

        if (leftSum == rightSum) {
            x = i;  // pivot integer found
            break;
        }
    }

    // Output result
    if (x == -1)
        printf("No pivot integer found. Output: -1\n");
    else
        printf("Pivot integer is: %d\n", x);

    return 0;
}
