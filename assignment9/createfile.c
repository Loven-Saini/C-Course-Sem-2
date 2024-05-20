
#include <stdio.h>

int main() {
    FILE *file = fopen("hello.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    else{
    fprintf(file, "Hello, World!\n");
    fclose(file);
}

    return 0;
}