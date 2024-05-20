#include <stdio.h>

int main(){
    int A[7]={1,2,3,6,25,26,90};
    int l=0;
    int r=6;
    int n=25;
    while(l<=r){
        int mid=(l+r)/2;
        if(A[mid]==n){
        printf("Index position of %d = %d",n,mid);
        break;
        }
        if(n<A[mid])
            r=mid-1;
        
        if(n>A[mid])
            l=mid+1;


    }
    return 0;
}