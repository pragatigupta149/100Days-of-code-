#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows]; // Array to store sum of each row

    // Input elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0; // initialize sum for this row
        for (j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Display row sums
    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
