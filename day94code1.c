#include <stdio.h>

// Structure Definition
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function Declaration
void display(struct Student s);

int main() {
    struct Student s1;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Calling function to print values
    display(s1);

    return 0;
}

// Function to print structure members
void display(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Marks     : %.2f\n", s.marks);
}
