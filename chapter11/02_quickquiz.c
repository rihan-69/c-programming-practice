#include <stdlib.h>
#include <stdio.h>
int main(){
    int n;
    float* ptr;
    printf("pls enter the size of array \n");
    scanf("%d",&n);
    ptr = (float*) malloc(n * sizeof(float));
    printf("pls enter the 4 number accordingly that you want to add to the array \n");

    for(int i = 0; i<n; i++){
        scanf("%f",&ptr[i]);

    }
    for(int j = 0; j<n; j++){
        printf("%f\n",ptr[j]);
    }
    


    return 0;
}