#include <stdio.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("It is a vowel!");
    }
    else{
        printf("It is not a vowel.");
    }
    return 0;
}