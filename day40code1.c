//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Diagonal traversal
    printf("\nDiagonal traversal (main diagonal elements):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\n");

    return 0;
}
