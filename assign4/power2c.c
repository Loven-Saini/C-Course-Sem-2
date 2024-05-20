

#include <stdio.h>

int main()
{
    int n;
    int d=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n == 0){
		printf("not in power of 2");
        d=1;
}
	while (n != 1) {
		if (n % 2 != 0){
            d=1;
			printf("not in power of 2");
    }
		n = n / 2;
	}
    if(d==0)
	printf("yes the number is in power of 2!");
	
	return 0;
}
