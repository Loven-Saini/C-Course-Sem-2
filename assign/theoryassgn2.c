#include <stdio.h>
int main(){
    int i=99;
    for(int i=99;i>=1;){
        printf("%d cans of juice on the table,%d cans of juice.\n",i,i);
        i--;
        if(i>1)
        printf("Take one and pass it around, %d cans of juice on the table.\n",i);
        if(i==1){
        printf("%d can of juice on the table, %d can of juice.\n",i,i);
        i--;
        }
        if(i==0){
            printf("Take one and pass it around, no more cans of juice on the table.\n");
            printf("No more cans of juice on table, no more cans of juice.\n");
        }

    }
    return 0;

}