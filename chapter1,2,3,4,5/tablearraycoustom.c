#include <stdio.h>

int main() {
    int arr[3][10];
    int mul[3];
    printf("pls enter the 3 number you want table of to be stored in a 3d array \n");
    for(int a = 0; a<3; a++){
        scanf("%d",&mul[a]);
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            arr[i][j] = mul[i]*(j+1);
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            printf("the value of arr[i][j] is %d \n",arr[i][j]);

        }
        printf("\n");
    }
    return 0;
}