#include <stdio.h>
int main(){
    int m,n,ans=0;
    m=n=0;
    printf("Enter the numbers to multiply:");
    scanf("%d %d",&m,&n);
    for(int i=1;i<=n;i++){
        ans=ans+m;
    }
    printf("The product of the numbers = %d",ans);
    
    return 0;
}