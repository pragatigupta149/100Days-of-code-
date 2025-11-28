//Use pointer to struct to modify and display data using -> operator.
    
    
#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;         // Structure variable
    struct Student *ptr;      // Pointer to structure

    ptr = &s;  // Assign structure address to pointer

    // Modify structure members using -> operator
    printf("Enter student name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display values using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", ptr->name);
    printf("Roll No   : %d\n", ptr->roll_no);
    printf("Marks     : %.2f\n", ptr->marks);

    return 0;
}
