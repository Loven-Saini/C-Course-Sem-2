#include <stdio.h>
#include <math.h>
int main(){
    int x,y,r;
    int px,py;
    printf("Enter the coordinates of the circle x and y:");
    scanf("%d %d",&x,&y);
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    printf("Enter the coordinates of the point:");
    scanf("%d %d",&px,&py);
    int d=sqrt(pow(px-x,2)+pow(py-y,2));
    
    if (d==r){
        printf("Point lies on the circle.");
    }
    else if(d<r){
        printf("Point lies inside the circle.");
    }
    else{
        printf("Point lies outside the circle.");
    }
    
}