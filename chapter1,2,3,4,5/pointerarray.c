#include <stdio.h>

int main() {
    int a = 78;
    int* ptr = &a;
    printf("the address of variable a is %u\n",ptr);
    ptr++;
    printf("the address of variable a after increment is %u\n",ptr);
    
    return 0;
}