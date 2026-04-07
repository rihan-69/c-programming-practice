#include <stdio.h>
int sum(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        return a + sum(a - 1);
    }
}
int main()
{
    int n;
    printf("pls enter the number you want sum of \n");
    scanf("%d", &n);
    printf("the sum of first %d numbers is %d", n, sum(n));
    return 0;
}