#include <stdio.h>

int main() {
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("the value of i is %d\n",i);
    printf("the address of i is %d\n",&i);
    printf("the value of is %d\n",*j);/*
    so basically here *j is derefrence operator that tells compiler to
    go to the address stored at the pointer j and tell what value it stores*/
    printf("the value at the address of i is %d\n",*(&i));
    printf("the value at address j is %d\n", *(&j));
    printf("the value of i is %d\n",**(&j));/*
    so baically whats happening with these operrator is **(&j)--(the right to left first 
    *(&j)means the value at the adddres of j is that is the address of the i that we 
    have stored by making it a pointer for the i so it stores it address after that 
    whats the remaining is the *and the adrrres of i that we optained so thet * here is 
    a dereffrence operator that tells the compiler to go the the address and fetch that 
    value that ultimately means the value at the adrresofi that is 6)*/
    

    return 0;
}