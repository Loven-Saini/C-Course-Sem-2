#include<stdio.h>
int countTrailingZeros(int num)
{
   int mask = 1;
   int count = 0;
   while (mask != 0) {
      if ((num & mask) == 0) {
          count++;
      }
      else {
          break;
      }
      mask = mask << 1;
   }
   return count;
}
 
int main() {
    int n=0;
   printf("Enter a number:");
   scanf("%d",&n);
   printf("Number of trailing zeros in %d in binary format is: %d", 
          n, countTrailingZeros(n));
   return 0;
}