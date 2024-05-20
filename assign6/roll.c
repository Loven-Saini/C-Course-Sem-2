#include <stdio.h>
int main(){
    int a[8];
    int sum_even,sum_odd;
    sum_even=sum_odd=0;
    printf("Enter roll number digit by digit:\n");
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<8;i++){
        if(i%2==0)
        sum_even=sum_even+a[i];
        else
        sum_odd=sum_odd+a[i];
    }
    int ans=sum_even*sum_odd;
    printf("The final answer=%d",ans);

    return 0;
}