#include <stdio.h>

int main() {
   
    int a = 5; 
    int b = 3; 
    int bitwise_and_result = a & b; 
    printf("Bitwise AND: %d & %d = %d\n", a, b, bitwise_and_result);

    
    int bitwise_or_result = a | b; 
    printf("Bitwise OR: %d | %d = %d\n", a, b, bitwise_or_result);

    
    int bitwise_xor_result = a ^ b; 
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, bitwise_xor_result);

    
    int c = 5; 
    int bitwise_not_result = ~c; 
    printf("Bitwise NOT: ~%d = %d\n", c, bitwise_not_result);

    
    int x = 5;
    int y = 3;
    int logical_and_result = (x > 2) && (y < 5); 
    printf("Logical AND: (%d > 2) && (%d < 5) = %d\n", x, y, logical_and_result);

    
    int logical_or_result = (x < 2) || (y > 5); 
    printf("Logical OR: (%d < 2) || (%d > 5) = %d\n", x, y, logical_or_result);

   
    int z = 0;
    int logical_not_result = !z; 
    printf("Logical NOT: !%d = %d\n", z, logical_not_result);

    return 0;
}