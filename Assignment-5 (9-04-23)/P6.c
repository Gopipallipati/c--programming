#include <stdio.h>
#include <string.h>

int count_special_chars(char str[]) {
    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == ' ')) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = count_special_chars(str);

    printf("Number of special characters: %d\n", count);

    return 0;
}

