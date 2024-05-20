#include <stdio.h>
int main(){
    int n,f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;

    }
    printf("The factorial of the number is : %d",f);
    
    return 0;
}