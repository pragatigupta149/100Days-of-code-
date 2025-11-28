//Return a structure containing top student's details from a function.
    
    
#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function declaration
struct Student getTopStudent(struct Student s[], int n);

int main() {
    struct Student s[5], topper;
    int i;

    // Input student details
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Function call to get top student
    topper = getTopStudent(s, 5);

    // Display top student details
    printf("\n--- Top Student Details ---\n");
    printf("Name      : %s\n", topper.name);
    printf("Roll No   : %d\n", topper.roll_no);
    printf("Marks     : %.2f\n", topper.marks);

    return 0;
}

// Function to return the structure of top-scoring student
struct Student getTopStudent(struct Student s[], int n) {
    int i, index = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }

    return s[index]; // return structure
}
