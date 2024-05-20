#include <stdio.h>
int main(){
    int n,num,t,c=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the digit to count:");
    scanf("%d",&n);
    while(num>0){
        t=num%10;
        if(t==n)
        {
            c++;
        }
        num=num/10;

    }
    printf("The number occurs %d times!",c);
    return 0;

}