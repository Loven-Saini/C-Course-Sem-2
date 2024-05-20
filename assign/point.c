#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter the coordinates of the points:");
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    scanf("%d %d",&e,&f);
    if(((d-b)/(c-a))==((f-d)/(e-c))){
        printf("Points lie in same line.");
    }
    else{
        printf("Points don't lie in the same line.");
    }
    return 0;
}