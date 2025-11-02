#include <stdio.h>

int main() {
    int n, i, pos, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assuming maximum 100 elements

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Check for valid position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter position between 1 and %d\n", n + 1);
    } else {
        // Shift elements to the right
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert element
        arr[pos - 1] = element;
        n++; // increase array size

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
