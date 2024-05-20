#include <stdio.h>
#include <math.h>
int order(int x)
{
    int n = 0;
    while (x>0) {
        n++;
        x = x / 10;
    }
    return n;
}

int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    int n = order(x);
    int temp = x;
    double sum=0.0;
    while (temp>0) {
        int r = temp % 10;
        sum += pow(r, n);
        temp = temp / 10;
    }
    if (sum == x)
        printf("yess! It is an armstrong number!");
    else
        printf("NO! It is not an armstrong number!");
    return 0;
}