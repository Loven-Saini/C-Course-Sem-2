#include<stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c],transpose[c][r];

    
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j) {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }

    
    printf("\nEntered Matrix: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }

    
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j) {
            transpose[j][i] = a[i][j];
        }

   
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j) {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }

    return 0;
}
