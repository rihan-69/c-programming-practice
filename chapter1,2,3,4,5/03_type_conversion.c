#include <stdio.h>

int main()
{
    /*
 so basically if you are operating btw the int and int type you will
yield your answer in int date type even if you try to change the
type when you are operating the eventually but first declared them
in int type
 int a = 9, b = 2 ;
 float c = a*b;
 printf(" the value of a/b is %f/n",c);
  // the answer will be in int */

    float a = 9;
    int b = 2;
    int c = 5.5;
    printf("the value of a/b %f \n", a / b);
    printf(" the value of c is %d \n", c); // that nigga just got demoted

    return 0;
}