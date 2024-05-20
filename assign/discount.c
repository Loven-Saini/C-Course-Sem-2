#include <stdio.h>
int main(){
    int q,p;
    float fp,d;
    printf("Enter the quantity:");
    scanf("%d",&q);
    printf("Enter the price per item:");
    scanf("%d",&p);
    fp=q*p;
    if(q>1000){
        d=(10.0/100.0)*fp;
    }
    fp=fp-d;
    printf("The final price is %.2f",fp);
    return 0;
}