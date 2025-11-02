#include <stdio.h>

int main() {
    int i, j, space;

    // Outer loop controls the number of rows
    for (i = 5; i >= 1; i--) {
        // Print leading spaces before stars
        for (space = 5; space > i; space--) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
