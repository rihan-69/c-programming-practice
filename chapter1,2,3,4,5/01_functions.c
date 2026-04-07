#include <stdio.h>


// using custom funtions you can reduse the lines of code by having a custom code of block that can be called for diffrent arguments accordingly


int sum(int  , int );


// function defination
int sum (int x , int y){
    //printf("the sum is %d\n", x+y);
// so here we are using a function with a printf so it will work out if we were not to use the return value cause our custom function will just print it out directly buit the value is lost so return value gives you a option so it can be used manipulated accordingly

    return x+y;

}




int main() {
    int a = 1;
    int b = 2;
    
    // int c = a + b;
    // printf("the sum is %d\n", c);
    int c = sum(a,b);
    printf(" the value of sum is %d\n",c);
    

    int a1 = 3;
    int b1 = 4;
    sum(a1,b1);



    return 0;
}