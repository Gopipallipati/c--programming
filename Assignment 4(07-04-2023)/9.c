#include <stdio.h>

// function to calculate number of student users
int getNumStudents() {
    int numStudents;
    printf("Enter number of student users: ");
    scanf("%d", &numStudents);
    return numStudents;
}

// function to calculate total number of users
int getTotalUsers(int numStudents, int numStaff) {
    int totalUsers = numStudents + numStaff;
    return totalUsers;
}

// function to calculate number of staff users
int getNumStaff() {
    int numStaff;
    printf("Enter number of staff users: ");
    scanf("%d", &numStaff);
    int numNonTeachingStaff = numStaff / 3;
    numStaff += numNonTeachingStaff;
    printf("Number of non-teaching staff: %d\n", numNonTeachingStaff);
    return numStaff;
}

int main() {
    int numStudents, numStaff, totalUsers;
    numStudents = getNumStudents();
    numStaff = getNumStaff();
    totalUsers = getTotalUsers(numStudents, numStaff);
    printf("Total number of users: %d\n", totalUsers);
    return 0;
}

