#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found or cannot be opened!\n");
        return 1;
    }

    printf("Contents of the file:\n\n");

    // Read file line by line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp); // Close file
    return 0;
}
