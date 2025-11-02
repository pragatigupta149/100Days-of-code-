//Check if the elements on the diagonal of a matrix are distinct.
    
#include <stdio.h>

int main() {
    int rows, cols, i, j, k, isDistinct = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix must be square to check diagonal elements.\n");
        return 0;
    }

    int matrix[rows][cols];
    int diagonal[rows];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract diagonal elements
    for (i = 0; i < rows; i++) {
        diagonal[i] = matrix[i][i];
    }

    // Check for distinctness
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    // Display result
    if (isDistinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");

    return 0;
}
