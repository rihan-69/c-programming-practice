#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];
    printf("the value of array from index 1 to 10 is \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("the value of pointer before the increment is %d\n", **(&ptr));
    ptr + 2;
    printf("here is the proof if we incremnt the pointer with +2 it hops to the 3 value in array %d", **(&ptr));
    return 0;
}