#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
    char name[50];
    int roll_number;
    struct tm birthday;
    struct tm admission_date;
};

int main() {
    struct student s;
    time_t current_time = time(NULL);
    struct tm *current_tm = localtime(&current_time);
    int age;

    // Input student details
    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll number: ");
    scanf("%d", &s.roll_number);
    printf("Birthday (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &s.birthday.tm_year, &s.birthday.tm_mon, &s.birthday.tm_mday);
    s.birthday.tm_year -= 1900;  // Adjust year to be relative to 1900
    s.birthday.tm_mon--;  // Adjust month to be 0-based
    printf("Admission date (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &s.admission_date.tm_year, &s.admission_date.tm_mon, &s.admission_date.tm_mday);
    s.admission_date.tm_year -= 1900;  // Adjust year to be relative to 1900
    s.admission_date.tm_mon--;  // Adjust month to be 0-based

    // Calculate age at time of admission
    age = s.admission_date.tm_year - s.birthday.tm_year;
    if (s.admission_date.tm_mon < s.birthday.tm_mon ||
            (s.admission_date.tm_mon == s.birthday.tm_mon && s.admission_date.tm_mday < s.birthday.tm_mday)) {
        age--;
    }

    // Print student details and age at time of admission
    printf("\nStudent details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll_number);
    printf("Birthday: %d-%02d-%02d\n", s.birthday.tm_year + 1900, s.birthday.tm_mon + 1, s.birthday.tm_mday);
    printf("Admission date: %d-%02d-%02d\n", s.admission_date.tm_year + 1900, s.admission_date.tm_mon + 1, s.admission_date.tm_mday);
    printf("Age at time of admission: %d\n", age);

    return 0;
}

