#include <stdio.h>
int main(){
    printf("Enter the elements:");
    int sum=0;
    for(int i=1;i<=10;i++){
        int n;
        scanf("%d",&n);
        sum=sum+(n*n);
    }
    printf("The sum of this series = %d",sum);
    
    return 0;
}