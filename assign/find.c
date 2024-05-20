#include <stdio.h>
int main(){
    int n,d;
    printf("Enter the dividend and divisor:");
    scanf("%d",&n);
    scanf("%d",&d);
    float q=n/d;
    float r=n%d;
    printf("quotient=%.2f \n",q);
    printf("remainder=%.2f",r);
    return 0;
}