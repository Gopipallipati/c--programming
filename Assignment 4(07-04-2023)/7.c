#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int roll_no;
    char stud_name[50];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float avg_marks;
};

int num_students = 0;
struct Student students[MAX_STUDENTS];

void calculate_total_and_avg_marks(struct Student *s) {
    s->total_marks = s->mark1 + s->mark2 + s->mark3;
    s->avg_marks = s->total_marks / 3.0;
}

void add_student() {
    if (num_students >= MAX_STUDENTS) {
        printf("Maximum number of students reached. Cannot add more students.\n");
        return;
    }

    printf("Enter details of the student:\n");
    printf("Roll No.: ");
    scanf("%d", &students[num_students].roll_no);
    printf("Name: ");
    scanf("%s", students[num_students].stud_name);
    printf("Mark 1: ");
    scanf("%d", &students[num_students].mark1);
    printf("Mark 2: ");
    scanf("%d", &students[num_students].mark2);
    printf("Mark 3: ");
    scanf("%d", &students[num_students].mark3);

    calculate_total_and_avg_marks(&students[num_students]);

    num_students++;
    printf("Student added successfully.\n");
}

void display_students() {
    if (num_students == 0) {
        printf("No students in the list.\n");
        return;
    }

    printf("List of Students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Roll No.: %d, Name: %s, Mark 1: %d, Mark 2: %d, Mark 3: %d, Total Marks: %d, Average Marks: %.2f\n", 
        students[i].roll_no, students[i].stud_name, students[i].mark1, students[i].mark2, students[i].mark3,
        students[i].total_marks, students[i].avg_marks);
    }
}

void sort_students_desc() {
    struct Student temp;
    for (int i = 0; i < num_students-1; i++) {
        for (int j = i+1; j < num_students; j++) {
            if (students[i].total_marks < students[j].total_marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nStudent Menu:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Sort Students in Descending Order of Marks\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                display_students();
                break;
            case 3:
                sort_students_desc();
                printf("Students sorted in descending order of marks.\n");
                break;
            case 4:
                printf("Exiting Student System.\n");
                return 0;
            default:
                printf("Invalid Choice. Please try again.\n");
        }
    }


