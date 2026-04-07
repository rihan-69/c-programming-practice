#include <stdio.h>
int sum (int , int);
int sum (int a, int b){
    return a + b;

}

int main() {
    int x = 1;
    int y = 7;
    printf("the sum of x and y is %d",sum(x,y));

    return 0;
}
/*
when you calling by the values you custom function can not change the value
cause you are giving him the copy of values not the actual values*/