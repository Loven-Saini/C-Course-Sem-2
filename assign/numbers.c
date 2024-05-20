#include <stdio.h>
int main(){
    int c,d,e,n=0;
    c=d=e=0;
    printf("Enter the numbers(2005 to exit):");
    while(n!=2005){
        scanf("%d",&n);
        if(n==0)
        c++;
        if(n>0)
        d++;
        if(n<0)
        e++;
    }
    printf("Zeroes = %d, Positives = %d, Negatives = %d",c,d,e);
    return 0;
}