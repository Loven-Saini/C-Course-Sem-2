#include <stdio.h>
int main(){
    int weeknum=0;
    printf("Enter the weekday number:");
    scanf("%d",&weeknum);
    switch(weeknum){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Please enter a number only between 1 and 7");
    }
    return 0;
}