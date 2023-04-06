#include <stdio.h>

int main() {
    char str[100];
    int sum = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin); // reading input string
    
    for (int i = 0; str[i] != '\0'; i++) {
        sum += (int)str[i]; // adding ASCII value of each character to sum
    }
    
    printf("Sum of ASCII values of all characters in the given string: %d", sum);
    
    return 0;
}

