#include <stdio.h>
int main(){
    int bs;
    float hra,da,gs;
    printf("Enter your salary:");
    scanf("%d",&bs);
    if(bs<1500){
        hra=(10/100)*bs;
        da=(90.0/100.0)*bs;

    }
    else{
        hra=500.0;
        da=(98.0/100.0)*bs;
    }
    
    gs=bs+hra+da;
    printf("Gross salary=%.2f",gs);
    return 0;
}