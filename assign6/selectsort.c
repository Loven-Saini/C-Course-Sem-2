#include <stdio.h>
int main(){
    int A[7]={1,90,3,26,25,6,2};
    for(int i=1;i<7;i++){
        int min=i;
        for(int j=i+1;j<7;j++){
            if(A[j]<A[min])
            min=j;
        }
        int t=A[i];
        A[i]=A[min];
        A[min]=t;
    }
    printf("Sorted Array is: ");
    for(int i=0;i<7;i++)
    printf("%d ",A[i]);
    return 0;
}