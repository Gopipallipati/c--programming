#include <stdio.h>

#define ROWS_A 3
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 4

void matrix_multiply(int a[ROWS_A][COLS_A], int b[ROWS_B][COLS_B], int result[ROWS_A][COLS_B]) {
 for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_matrix(int matrix[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[ROWS_A][COLS_A] = {{1, 2}, {3, 4}, {5, 6}};
    int b[ROWS_B][COLS_B] = {{7, 8, 9, 10}, {11, 12, 13, 14}};
    int result[ROWS_A][COLS_B];

    matrix_multiply(a, b, result);

    printf("Result:\n");
    print_matrix(result);

    return 0;
}

