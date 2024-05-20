#include <stdio.h>
int main()
{
    int num,t,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0){
        t=num%10;
        rev=(rev*10)+t;
        num=num/10;

    }
    printf("The reversed number is = %d",rev);

    return 0;
}