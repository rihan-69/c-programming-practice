#include <stdio.h>

int main() {
    int i = 72;
    int* j = &i; // j is a pointer pointing towards i (j is a integer pointer)
    int k = 67;
    printf("the address of i is %u\n",&i);
    printf("the address of i ifs %p\n",&i);
    printf("the address i  is %p \n",j);
    printf("the address of k is %p\n",&k);    
    printf("the address at  the pointer variable j  is %u\n", *(&j));  
    return 0;
}