#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *start, *end, temp; // declare pointers to the start, end and a temp char variable
    int len = strlen(str);
    
    start = str; // start points to the beginning of the string
    end = str + len - 1; // end points to the end of the string
    
    // swapping characters from start to end
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    reverseString(str); // call the reverseString function
    
    printf("Reversed string: %s", str);
    
    return 0;
}

