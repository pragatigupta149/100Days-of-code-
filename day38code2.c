//Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int rows, cols, i, j, isSymmetric = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // A symmetric matrix must be square
    if (rows != cols) {
        printf("Matrix is not symmetric because it is not square.\n");
        return 0;
    }

    int matrix[rows][cols];

    // Input elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Display result
    if (isSymmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}
