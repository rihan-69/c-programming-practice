#include <stdio.h>
int fib(int a){
    if(a == 1 )
        return 1;
        else if( a == 0 ){
            return 0;
        }
    return fib(a-1) + fib(a-2);
    }
    
      int main(){
        int n;
        printf("pls enter the number \n");
        scanf("%d", &n);
        


        for(int i = 0 ; i <=n; ++i  ){
            printf("the n element of the series is %d \n", fib(i));
            

        }
        return 0 ;
    }