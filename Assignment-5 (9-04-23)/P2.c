#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

typedef struct {
    int num;
    int square;
} Tuple;

int main() {
    Tuple array[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i].num = i + 1;
        array[i].square = (i + 1) * (i + 1);
    }

    printf("Array of tuples:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("(%d, %d) ", array[i].num, array[i].square);
    }

    return 0;
}

