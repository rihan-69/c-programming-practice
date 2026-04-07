#include <stdio.h>

void swap(int*x,int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;



}
int main(){
    int a = 5;
    int b = 6;
    printf("the value of a and b before swaping is %d %d\n",a,b);
    swap(&a,&b);
    printf("the vale of a and b after swapping is %d %d\n", a , b);
    return 0;
}