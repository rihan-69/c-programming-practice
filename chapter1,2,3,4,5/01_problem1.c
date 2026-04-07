 #include <stdio.h>
 
 int main() {
    int i = 5;
    int* ptr = &i;

    printf("the addres of the varaible i is %u \n",&i);
    printf("the addres of the varaible i is %d\n ",*ptr);


    return 0;
 }