#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read string with spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to file using fprintf
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);  // Close the file

    printf("Data saved successfully to info.txt\n");

    return 0;
}
