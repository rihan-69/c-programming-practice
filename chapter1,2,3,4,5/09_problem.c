#include <stdio.h>
/*
we are gonna make program where we are suppose to print odd numbers of stars 
for n number of lines and the formula for printing the odd number of * is 2*i + 1 
and for this program we are gonna use 2 for loop one for the number of lines and column*/
void print_pattern(int n){
    for(int i = 0; i<n ; i++){
        for(int j = 0 ; j< 2*i + 1 ; j++){
            printf("*");
            
        }
        printf("\n");
    }
}
int main(){
    printf("pls enter the number you want the number of lines get printed with succcessive odd number of stars sequence\n");
    int a;
    scanf("%d", &a);
    print_pattern(a);
    return 0;
}