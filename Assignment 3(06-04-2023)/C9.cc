#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i); // copying each element from source to destination
    }
}

int main() {
    int sourceArr[] = {1, 2, 3, 4, 5};
    int destinationArr[5]; // destination array
    int size = sizeof(sourceArr) / sizeof(sourceArr[0]);
    
    copyArray(sourceArr, destinationArr, size); // call the copyArray function
    
    printf("Source array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(sourceArr + i)); // printing the source array
    }
    
    printf("\nDestination array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(destinationArr + i)); // printing the destination array
    }
    
    return 0;
}

