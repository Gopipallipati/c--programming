#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2, i, j, freq[256] = {0}, flag = 1;
    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    printf("Enter the second string: ");
    fgets(str2, 100, stdin);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 != len2) {
        printf("The strings are not anagrams.\n");
        return 0;
    }
    for(i = 0; i < len1; i++) {
        freq[(int)str1[i]]++;
        freq[(int)str2[i]]--;
    }
    for(j = 0; j < 256; j++) {
        if(freq[j] != 0) {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");
    return 0;
}

