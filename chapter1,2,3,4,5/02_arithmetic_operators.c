#include <stdio.h>

int main()
{
    int a = 4, b = 3, c = a + b;
    printf("the value of a is %d\n the value of b is %d\n the sum is %d\n", a, b, c);
    // to get the remainder the operator modulus is used "%"
    printf("the remainder when a is divided by by %d", a % b);
    /*
    this does not works for exponent in c
    int d = a^4*/
    
    return 0;
}