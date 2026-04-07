#include <stdio.h>
#include <stdlib.h>
/*int main() {
    int n;
    printf("pls enter the value of the array \n");
    scanf("%d", &n);
    int arr[n];
    return 0;
}*/ 
//this method is for dynamically allocating memory in and the method shown above is not allowed
 //
int main(){
    int n;
    int* ptr; 
    scanf("%d",&n);
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr [1] =6;
    printf("%d\n",ptr[1]);
    return 0;

} 