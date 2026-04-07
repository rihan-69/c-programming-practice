#include <stdio.h>

int main() {
    int arr[10]={};
    for(int i = 1; i<= 10; i++){
        arr[i] = 5*i;
    }
    for(int i = 1; i<=10; i++){
        printf("the value of array at index %d is %d\n",i,arr[i]);
    }
    return 0;
}