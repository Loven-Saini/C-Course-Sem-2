#include <stdio.h>
#include <string.h>

int countOccurrences(char *str, char *pattern) {
    int i, j, found, count;
    int stringLen = strlen(str);
    int patternLen = strlen(pattern);

    count = 0;

    for(i=0; i <= stringLen - patternLen; i++) {
        found = 1;
        for(j=0; j < patternLen; j++) {
            if(str[i + j] != pattern[j]) {
                found = 0;
                break;
            }
        }

        if(found == 1) {
           count++;
        }
    }

    return count;
}

int main() {
    char str[100], pattern[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter a pattern to find: ");
    gets(pattern);

    printf("'%s' occurs %d times in '%s'.\n", pattern, countOccurrences(str, pattern), str);

    return 0;
}
