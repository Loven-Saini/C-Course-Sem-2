#include <stdio.h>
int main(){
    int i=1;
    int sum=0;
    printf("Enter the numbers:(Zero to exit):");
    while(i!=0){
    
        scanf("%d",&i);
        if(i==0){
            printf("The sum of numbers entered till now=%d",sum);
            break;
        }
        if(i>0)
        sum=sum+i;


    }
    return 0;
}