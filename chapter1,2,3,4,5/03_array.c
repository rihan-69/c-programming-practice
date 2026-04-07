#include <stdio.h>

int main() {
    /*
    diffrent ways of initialising the arrays are here and 
    c is also smart enough if you type int b[] = {1,2,2,2,2}
    compiler can count indexes on its own
    */
    int a[3] = {1,23,355};
    int b[] = {1,2,3};
    int c = sizeof(b)/sizeof (b[0]);
    int n = sizeof(a)/sizeof (a[0]);
    for(int i = 0; i<c; i++){
        printf("the value of array is %d at index %d\n",b[i],i);

    }
    printf("\n");
    printf("\n");

    for(int k = 0; k<n; k++){
        printf("the value of array is %d at index %d\n",a[k],k);
    }

    return 0;
}