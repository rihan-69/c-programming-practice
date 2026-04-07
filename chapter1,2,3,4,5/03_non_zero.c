#include <stdio.h>

int main()
{
    if (1)
    {
        printf("this condition is executable in c\n");
    }
    if (2345)
    {
        printf("this condition is executable in c\n");
    }
    if (4.5)
    {
        printf("this condition is executable in c\n");
    }
    if ('c')
    {
        printf("this condition is executable in c\n");
    }
    if (0)
    {
        printf("i am zero and i am not executable\n");
    }
    return 0;
}