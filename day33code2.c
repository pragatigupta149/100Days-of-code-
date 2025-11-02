#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assuming max size 100

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find position where element should be inserted
    for (i = n - 1; i >= 0 && arr[i] > element; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[i + 1] = element;
    n++; // increase array size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
