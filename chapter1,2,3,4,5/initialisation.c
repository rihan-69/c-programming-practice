#include <stdio.h>

int main()
{
    int cgpa[3] = {23, 45, 34};
    int nr[] = {56, 67, 89, 89};
    /*
    so in the second version when we initialised the array nr we just direclty putt the
    value and dont actually know hoe many numbers are stored there at diffrent indexes i will be
    using a way to find the number of intgers in the array without actually looking*/
    int c = sizeof(nr) / sizeof(nr[0]);
    for (int n = 0; n < 3; n++)
    {
        printf("the value at index %d is %d\n", n, cgpa[n]);
    }
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        printf("the value at index %d is %d\n", i, nr[i]);
    }

    return 0;
}