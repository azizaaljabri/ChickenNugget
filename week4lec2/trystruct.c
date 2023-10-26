#include <stdio.h>
#include <string.h>
struct student {
    char name [100];
    char student_id [11]; // Assuming 10 digits.
    int mark;
};

int main () {
    struct student new_student;

    printf ("Enter student name:\n");
    scanf ("%s",new_student.name);
    printf ("Enter student ID:\n");
    scanf ("%s",new_student.student_id);
    printf ("Enter student mark:\n");
    scanf ("%d",new_student.mark);
    //no & sign required as strings don't need and signs 
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %d\n", new_student.mark);
    return 0;
}