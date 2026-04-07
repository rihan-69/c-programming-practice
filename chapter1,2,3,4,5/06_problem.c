# include <stdio.h>
float avg(float a){
    float d;
     d = (a/3.0);
    return d;
}
int main (){
    float n;
    int n_1;
    int n_2;
    int n_3;

    printf("pls enter the 3 numbers you want average of\n");
    scanf("%d %d %d", &n_1,&n_2,&n_3);
    n = (n_1+n_2+n_3);
    printf("the average of three number using custom made function is %.2f/n",avg(n));
    
}