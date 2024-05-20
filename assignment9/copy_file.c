#include <stdio.h>

int main() {
    FILE *ofile = fopen("hello.txt", "r");
    FILE *nfile = fopen("nfile.txt", "w");

    if (ofile == NULL || nfile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(ofile)) != EOF) {
        fputc(ch, nfile);
    }

    printf("File copied successfully.\n");

    fclose(ofile);
    fclose(nfile);

    return 0;
}
