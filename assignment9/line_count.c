#include <stdio.h>

int main() {
    FILE *file = fopen("lines.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int count = 0;
    char ch;
    while((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    printf("The file contains %d lines.\n", count);

    fclose(file);

    return 0;
}
