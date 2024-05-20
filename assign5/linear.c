#include <stdio.h>
int search(int arr[],int n){
    int s=7;
    for(int i=0;i<s;i++){
        if(arr[i]==n)
        return i;

    }
    return -1;
}
int main(){
    int n=25;
    int arr[]={1,2,3,6,26,25,90};
    int num=search(arr,n);
    if(num==-1){
        printf("Element Not Found!!");
    }
    else{
        printf("Element found at index=%d",num);
    }
    return 0;

}