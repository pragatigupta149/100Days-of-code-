//Create Employee structure with nested Date structure for joining date and print details.


#include <stdio.h>

// Nested structure for joining date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure containing Date structure
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joinDate;  // nested structure
};

int main() {
    struct Employee e;

    // Taking input
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    // Displaying details
    printf("\n--- Employee Details ---\n");
    printf("Name          : %s\n", e.name);
    printf("ID            : %d\n", e.id);
    printf("Salary        : %.2f\n", e.salary);
    printf("Joining Date  : %02d-%02d-%04d\n",
           e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}
