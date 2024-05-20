#include <stdio.h>
int main(){
    int a,b,c;
    while(1==1){
    printf("Enter your choice(1 for +,2 for -,3 for X,4 for /,5 for exit):");
    scanf("%d",&c);
    if(c==1){
        printf("Enter the numbers:");
        scanf("%d %d",&a,&b);
        printf("The sum of the numbers = %d",a+b );
    }
    else if(c==2){
        printf("Enter the numbers:");
        scanf("%d %d",&a,&b);
        printf("The difference of the numbers = %d",a-b );
    }
    else if(c==3){
        printf("Enter the numbers:");
        scanf("%d %d",&a,&b);
        printf("The product of the numbers = %d",a*b);
    }
    else if(c==4){
        printf("Enter the numbers:");
        scanf("%d %d",&a,&b);
        printf("The quotient = %d \n",a/b);
        printf("The remainder = %d",a%b);
    }
    else{
        break;
    }
    return 0;
    }
}