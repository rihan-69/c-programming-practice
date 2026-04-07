#include <stdio.h>

int main() {
    int marks[5];
    printf("pls enter the marks of 5 students\n");
    for(int i = 0; i<5; i++){
        scanf("%d",&marks[i]);
    }
    int* ptr = &marks[0];

    for(int n = 0; n<5; n++){
        printf("the value at index %d is %d \n",n,marks[n]);
        printf("using pointer value at %d is %d \n",n,*ptr);
        printf("\n");
        ptr++;

    }
    /*
    so this is the normal way of traversing through a array and now we will be using 
    pointer to traverse throught the array*/

    

    return 0;
}