#include <stdio.h>
int main(){
    int n,t,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        t=n%10;
        sum=sum+t;
        n=n/10;

    }
    printf("The sum of the digits=%d",sum);
}