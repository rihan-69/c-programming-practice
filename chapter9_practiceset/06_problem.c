#include <stdio.h>

int main() {
    int arr[10];
    printf("this program in about making an array that can take input from user to store 5 complex numbers\n");
    for (int i =0; i<10; i++){
	    if(i%2==0){
		    printf("pls enter the real part of the complex number\n");
	    }else{
		    printf("pls enter the imaginary part of complex number\n");
	    }
	    scanf("%d",&arr[i]);
    }
    for(int j = 0; j<10; j++){
	    if(j%2==0){
		    printf(" %d",arr[j]);
	    }
	    else{
		    printf(" %di",arr[j]);
	    }
    }
    return 0;
}
