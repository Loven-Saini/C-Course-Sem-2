#include <stdio.h>  
   
int main()  
{ 
    int arr[] = {54,32,56,123,645,32534,12,4324,31};    
    int length = sizeof(arr)/sizeof(arr[0]);  
    int min = arr[0];  
    for (int i = 0; i < length; i++) {   
        
       if(arr[i] < min)  
           min = arr[i];  
    }    
    printf("Smallest element present in given array: %d\n", min);  
    return 0;  
}  