#include <stdio.h>

// Function to calculate length of a string
int strlen(char* str) {
    int length = 0;
    while(*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to copy a string
void strcpy(char* destination, char* source) {
    while(*source) {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

// Function to concatenate two strings
void strcat(char* destination, char* source) {
    // Move to the end of destination string
    while(*destination) {
        destination++;
    }
    // Copy characters from source to destination
    while(*source) {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

// Function to compare two strings
int strcmp(char* str1, char* str2) {
    while(*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int main() {
    char str1[50] = "Loven";
    char str2[] = "Saini";
    char str3[50];

    printf("Length of str1: %d\n", strlen(str1));  // Outputs: 7

    // Call strcpy() function
    strcpy(str3, str1);
    printf("str3 after copy: %s\n", str3);  // Outputs: Hello, 

    // Call strcat() function
    strcat(str1, str2);
    printf("str1 after concatenation: %s\n", str1);  // Outputs: Hello, World!

    // Call strcmp() function
    printf("Comparison of str1 and str3: %d\n", strcmp(str1, str3));  // Outputs: a positive number

    return 0;
}
