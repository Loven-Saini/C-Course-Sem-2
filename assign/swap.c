#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a = %d and b = %d",a,b);
    return 0;
}