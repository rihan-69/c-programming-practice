#include <stdio.h>

int main() {
    int i = 5;
    int* y = &i;
    int** x = &y;
    printf("the value of i is %d\n",i);
    printf("the addres of i using pointer is %d\n",y);
    printf("the value at addess of %d\n",*(&y));
    printf("the value of pointer to pointer is %d\n",***(&x));

    return 0;
}                                                                           