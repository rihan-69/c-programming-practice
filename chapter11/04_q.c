#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int k;
    printf("pls enter the number you want table of \n");
    scanf("%d",&n);
    int* ptr;
    ptr = (int*) malloc(10 * sizeof(int));
    for (int i =0; i<10; i++){
        ptr[i] = n*i;

    }
    for(int j =0; j<10; j++){
        printf("%d\n",ptr[j]);

    }
    printf("pls enter the number range if you want your  table to be incressed to \n");
    scanf("%d",&k);
    realloc(ptr,15*sizeof(int));
    for(int a =0; a<k; a++){
        ptr[a] = n*a;

    }
    for (int b = 0; b<k; b++){
        printf("%d\n",ptr[b]);
    }
free(ptr);


    return 0;
}