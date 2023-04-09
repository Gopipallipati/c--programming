#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A, B, n;
    printf("Enter the values of A and B: ");
    scanf("%d %d", &A, &B);
    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);

    srand(time(NULL));  // seed the random number generator with the current time

    int list[n];

    for (int i = 0; i < n; i++) {
        int random_num = rand() % (B - A + 1) + A;  // generate a random number between A and B
        list[i] = random_num;
    }

    printf("Random numbers between %d and %d: ", A, B);
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}

