#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[200];

    // Ask for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened!\n");
        return 1;
    }

    // File exists — display contents
    printf("\nContents of %s:\n\n", filename);
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
