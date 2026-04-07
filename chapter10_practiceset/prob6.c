#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    FILE *ptr;
    ptr = fopen("num.txt","r");
    fscanf(ptr, "%d",&i);
    printf("the value stored in the file num.txt is %d \n",i);
    fclose(ptr);
    ptr = fopen("num.txt","a");
    fprintf(ptr,"\n");
    fprintf(ptr,"the double of the number you have entered is %d\n", i*2);
    fclose(ptr);
    system("cat num.txt");
    return 0;
}