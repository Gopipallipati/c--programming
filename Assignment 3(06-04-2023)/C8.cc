#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str); // print the current permutation
    } else {
        for (int i = start; i <= end; i++) {
            swap(str+start, str+i); // swap the characters at positions start and i
            permute(str, start+1, end); // permute the remaining characters
            swap(str+start, str+i); // backtrack
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str); // reading input string
    
    printf("All possible permutations are:\n");
    permute(str, 0, strlen(str)-1); // call permute function
    
    return 0;
}

