#include <stdio.h>
int main(){
    int fac=1;
    int i=1;
    while(1==1){
        fac=fac*i;
        if (fac>100){
            break;
        }
        else
        i++;

    }
    printf("The smallest number with factorial greater than 100 = %d",i);
    return 0;
}