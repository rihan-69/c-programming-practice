# include <stdio.h>

int factorial(int);
int factorial(int n ){
    int p ;
    if(n == 1 ||n == 0 ){
        return 1;

    } else{
    int p = n * factorial(n-1);
    return p ;
    }
}
int main(){
    int a ;
    printf("pls enter the number you want factorial of \n");
    scanf("%d",&a);

    printf("the factorial of the number %d is %d",a , factorial(a));

}