#include <stdio.h>

int main()
{
    int a;
    printf("enter a:\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you have entered 1\n");
        break;
    case 2:
        printf("you have entered 2\n");
        break;
    case 3:
        printf("you have entered 3 \n");
        break;
    }
    return 0;
}