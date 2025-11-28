//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

    
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input.txt for reading
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output.txt for writing
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not create output.txt!\n");
        fclose(inFile);
        return 1;
    }

    // Read character by character and convert to uppercase
    while ((ch = fgetc(inFile)) != EOF) {
        ch = toupper(ch);
        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion Successful! Check output.txt\n");

    return 0;
}
