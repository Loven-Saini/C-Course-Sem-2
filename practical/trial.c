#include <stdio.h>
#include <string.h>
int main(){
    char *x="IIT";
    if(*x+1=='J')
    printf("%c",*x++);
    else
    printf("%s",x);
    char st[]="loven";
    printf("%s \n",st);
    printf("%p",strcmp("10","9"));
    //trying contri from other one;
    char stk[10];
    scanf("%s",&stk);
    printf("%s",stk);
    return 0;
}
//added in new branch