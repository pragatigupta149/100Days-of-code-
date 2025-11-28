//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    int ch;

    // Input filenames
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open files
    src = fopen(sourceFile, "r");
    dest = fopen(destFile, "w");

    if (src == NULL) {
        printf("Error: Source file not found!\n");
        return 1;
    }
    if (dest == NULL) {
        printf("Error: Destination file cannot be created!\n");
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from %s to %s\n", sourceFile, destFile);

    // Close files
    fclose(src);
    fclose(dest);

    return 0;
}
