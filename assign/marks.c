#include <stdio.h>
int main(){
    int n;
    int sum=0;
    float avg;
    printf("Enter the marks of 5 subjects:");
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        sum=sum+n;
    }
    avg=sum/5.0;
    printf("Sum=%d \n",sum);
    printf("Average=%f",avg);

    return 0;
}