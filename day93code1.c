#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, index = 0;

    // Input details of 5 students
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

    // Find the student with highest marks
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }

    // Display highest scoring student
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name      : %s\n", s[index].name);
    printf("Roll No   : %d\n", s[index].roll_no);
    printf("Marks     : %.2f\n", s[index].marks);

    return 0;
}
