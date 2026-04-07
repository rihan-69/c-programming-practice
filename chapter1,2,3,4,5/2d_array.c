#include <stdio.h>

int main() {
    int arr[3][2];
    for (int i= 0; i<3; i++){
        for(int j = 0; j<2; j++){
            printf("pls enter the value for the index [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i<3; i++){
        for(int j =0; j<2; j++){
            printf("the value for the array at index [%d][%d] is %d\n",i,j,arr[i][j]);
        }
    }
    return 0;
}