//Store employee data in a binary file using fwrite() and read using fread().


#include <stdio.h>

// Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    // Take employee data from user
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    // Open binary file for writing
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Write structure to file using fwrite
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data saved to employee.dat successfully!\n");

    // Open file for reading
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Read structure using fread
    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("\n--- Employee Data Read From File ---\n");
    printf("Name      : %s\n", e_read.name);
    printf("ID        : %d\n", e_read.id);
    printf("Salary    : %.2f\n", e_read.salary);

    return 0;
}
