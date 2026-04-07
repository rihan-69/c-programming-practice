#include <stdio.h>

int main() {
    char i = 'A';
    char* j = &i;
    float k = 5.4444;
    float* n = &k;

    printf("the address of i is %p\n",&i);
    printf("the address of i in integer is %u\n",&i);
    printf("the address of k is %p\n",&k);
    
    printf("the value at address j is %d",*(&j));

    return 0;
}