#include <stdio.h>
int main(){
    printf("Enter the angles of the triangle:");
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b+c)==180)
    {
        printf("The Triangle is valid.");
    }
    else{
        printf("The Triangle is not valid.");
    }
    return 0;
}