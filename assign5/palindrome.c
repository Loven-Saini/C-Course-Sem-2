 
#include <stdio.h> 

int main() 
{ 
    int n=0;
	printf("Enter the number:"); 
    scanf("%d",&n);

	int reversed = 0; 

	int num = n; 

	while (num != 0) { 
		int r = num % 10; 
		reversed = reversed * 10 + r; 
		num /= 10; 
	} 

	
	if (n == reversed) { 
		printf(" Given number %d is a palindrome number", 
			n); 
	} 
	else { 
		printf( 
			" Given number %d is not a palindrome number", 
			n); 
	} 
	
	return 0; 
}
