#include <stdio.h>
int main(){
    int a=3;
    int c=a++*a++*a++;
    int d= --a--;
    printf("%d%d",c,a);
    printf("%d",d);
    return 0;
}