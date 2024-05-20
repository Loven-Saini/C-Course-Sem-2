#include <stdio.h>
int main(){
    int hardness,ten_sth,grade=0;
    float carb_cont;
    
    printf("Enter hardness,carbon content and tensile strength:");
    scanf("%d %f %d",&hardness,&carb_cont,&ten_sth);
    if(hardness>41 && carb_cont<1.5 && ten_sth>4100)
    grade=10;
    else if(hardness>41 && carb_cont<1.5 && ten_sth<=4100)
    grade=9;
    else if(hardness<=41 && carb_cont<1.5 && ten_sth>4100)
    grade=8;
    else if(hardness>41 && carb_cont>=1.5 && ten_sth>4100)
    grade=7;
    else if(hardness<=41 && carb_cont>=1.5 && ten_sth<=4100)
    grade=5;
    else
    grade=6;


    printf("%d",grade);

    return 0;
}