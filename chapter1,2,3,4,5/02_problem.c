#include <stdio.h>

int main(){
    float english , maths , phy , percentage, g;
    printf("pls enter  your marks obtained in english %f\n");
    scanf("%f", &english);
    printf("pls enter your marks obtained in maths %f \n");
    scanf("%f",&maths);
    printf("pls enter your marks obtained in phy %f \n");
    scanf("%f",&phy);
    percentage = english+maths+phy;
    g = (percentage/300)*100;
    if(english<33 || maths<33 || phy<33){
        printf("you failed\n");
    }
    else if(percentage<=45&& percentage>=40){
        printf("you have secured passing marks with 3 devision\n");
    }
    else if(percentage<=60&& percentage>=45){
        printf("you have passed your exam with 2nd divsion \n");
    }
    else if (percentage<100 && percentage>=60){
        printf("you have passed the exam with distinction\n");
    }
    

    


    return 0;
}