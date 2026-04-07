#include <stdio.h>
int count(int a[],int n){
    int no_of_positiveinteger;
    for(int i = 0; i<n; i++ ){
        if(a[i]>0){
            no_of_positiveinteger++;
        }
        
    }
return no_of_positiveinteger;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("the number of positive integer in this array are %d\n",count(arr,10));
    
    return 0;
}