#include <stdio.h>
 
int main()
{
    int number, tempnum;
 
    printf("Enter an integer \n");
    scanf("%d", &number);
    tempnum = number;
    number = number << 2;
    printf("%d x 4 = %d\n", tempnum, number);
    number=tempnum >>2;
    printf("%d / 4 = %d\n", tempnum, number);
    return 0;
}