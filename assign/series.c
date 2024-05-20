#include <stdio.h>
#include <math.h>
int fac(int n);
int main(){
    int x,n;
    float ans=0.0;
    printf("Enter the value of x and n: \n");
    scanf("%d %d",&x,&n);
    for(int i=0;i<=n;i++){
        
        ans=ans+(pow(x,i)/fac(i));
    }
    printf("The sum of the series=%f",ans);
    return 0;
}
int fac(int n){
    int f=1;
    for(int i=1;i<=n;i++){
         f=f*i;
    }
    return f;

}