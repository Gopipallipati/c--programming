#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch, max_ch;
    int i, j, freq, max_freq = -1, len;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        ch = str[i];
        freq = 0;
        for(j = 0; j < len; j++) {
            if(str[j] == ch)
                freq++;
        }
        if(freq > max_freq) {
            max_freq = freq;
            max_ch = ch;
        }
    }
    printf("Max repeated character in the string = %c\n", max_ch);
    printf("It occurs %d times", max_freq);
    return 0;
}

