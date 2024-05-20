#include <stdio.h>
int main(){
    int A[7]={1,90,3,26,25,6,2};
    for(int j=0;j<7;j++){
    for(int i=0;i<7;i++){
        if(A[i]>A[i+1]){
            int t=A[i];
            A[i]=A[i+1];
            A[i+1]=t;
        }
    }
    }
    printf("Final sorted array:\n");
    for(int i=0;i<7;i++){
        printf("%d\n",A[i]);
    }

    return 0;
}