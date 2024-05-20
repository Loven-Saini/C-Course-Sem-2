#include <stdio.h>
int main(){
    int a=1,b=1,c=a+b;
    printf("0 1 1 ");
    for(int i=4;i<=30;i++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    
 }
