#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int list[MAX_SIZE], n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    printf("Enter the elements of the list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    printf("Duplicate items in the list: ");
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (list[i] == list[j]) {
                printf("%d ", list[i]);
                break;
            }
        }
    }

    printf("\nNon-duplicate items in the list: ");
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = i + 1; j < n; j++) {
            if (list[i] == list[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            printf("%d ", list[i]);
        }
    }

    return 0;
}

