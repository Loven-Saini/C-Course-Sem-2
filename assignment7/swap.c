#include <stdio.h>

void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping by value: x = %d, y = %d\n", a, b);
}
void swapref(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(x, y);

    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before Swapping: x = %d, y = %d\n", x, y);
    swapref(&x,&y);
    printf("After Swapping by reference:x=%d,y=%d\n",x,y);

    return 0;
}


