#include<stdio.h>
int main(){
    float fa,c,d;
    printf("enter the temp in fahrenhiet ");
    scanf("%f",&fa);
    c=((fa-32)*5/9);
    printf("temp is :%.2f",c);
    return 0;
}