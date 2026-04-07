#include <stdio.h>

int main(){
    float c ;
    float f;
    printf("pls enter temprature in \"celius\" to get it converted into farenheight%f\n");
    scanf("%f",&c);
    f = (c*9)/5+32;
    printf("temprature in farenhieght is %df\n",f);
    
    
    return 0;
}