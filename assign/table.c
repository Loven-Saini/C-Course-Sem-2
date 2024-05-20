#include <stdio.h>
int main(){
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    printf("The multiplication table of %d is:\n",n);
    for(int i=1;i<=20;i++){
        printf("%d X %d = %d \n",n,i,n*i);
    }
    return 0;
}