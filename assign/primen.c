#include <stdio.h>
int main(){
    int n,k=1;
    int c=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The prime numbers are: \n");
    for(int i=1;i<=n;i++){
        c=0;
        while(k<=i){
            if(i%k==0)
            c++;
            k++;
        }
        k=1;
        if(c==2)
        
        printf("%d \n",i);
    }
    return 0;
}