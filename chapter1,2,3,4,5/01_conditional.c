#include <stdio.h>

int main()
{
    int age = 15;
    if (age > 10)
    {
        printf("we are inside the if\n"); // so basically when conditions are satisfied of only the it enter in it
        printf("your age  is greater then 10\n");
    }
    if (age % 5 == 0)
    {
        printf("your age is divisible by 5\n");
    }
    return 0;
}