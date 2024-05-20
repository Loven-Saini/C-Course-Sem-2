#include <stdio.h>
int main(){
    int a[6][6]={{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6}};
    int b[6][6]={{6,5,4,3,2,1},{6,5,4,3,2,1},{6,5,4,3,2,1},{6,5,4,3,2,1},{6,5,4,3,2,1},{6,5,4,3,2,1}};
    int c[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            c[i][j]=0;
            for(int k=0;k<6;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplied Matrix:\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}