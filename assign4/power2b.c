#include <stdio.h>
int main()
{
    int n;
    int d=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n && (!(n & (n - 1))))
    printf("yes the number is in power of 2!");
    else
    printf("not in power of 2!");
	
	return 0;
}
