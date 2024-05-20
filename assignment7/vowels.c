#include <stdio.h>
int main(){
    int n=0;
    printf("enter length of string:");
    scanf("%d",&n);

    char st[n];
    int c=0;
    printf("enter a string:");
    for(int i=0;i<=n;i++){
    scanf("%c",&st[i]);
    
    }
    int i;
    for(i=0;i<=n;i++){
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
        c++;
    }
    printf("The number of vowels in string=%d",c);
    
    return 0;
}