#include <stdio.h>
int rtn(int*ptr){
    printf("the value of ptr is  %p\n",ptr);
    printf("the value at ptr is %d\n",*  ptr);
    return 5;


}

int main() {
    int i = 1;
    int* ptr = &i;
    printf("the address of variable i is %p\n",&i);
    printf("the values of function is   %p %d\n",rtn(ptr));

    return 0;
}