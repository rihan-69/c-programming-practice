#include <stdio.h>
void inc(int* a){
     *a = *a * 10;
}
int main(){
    int i = 10;
    printf(" the value of i is %d\n",i);
    inc(&i);
    printf("the value of i after increasing it 10x is %d\n",i);
    return 0;

}