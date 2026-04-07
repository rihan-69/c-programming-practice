#include <stdio.h>
 void avg(int*,int*);
 void avg(int*a, int*b){
    printf("the sum of a and b is %d\n",*a+*b);
    printf("the avg of a and b is %d",(*a+*b)/2);
 }
 int main(){
    int a1 = 5;
    int b2 = 6;
    avg(&a1,&b2);
    return 0;
 }
