#include <stdio.h>
int main(){
    int a=1;
    int b=8;
   // a=~a;
    printf("The initial numbers are: a=%d and b=%d \n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("The swapped numbers are: a=%d and b=%d",a,b);
    
    return 0;
}