#include <stdio.h>

int main() {
    FILE *ptr;
    printf("pls enter the number you want the table of to be saved in text file \n");
    int num;
    scanf("%d",&num);
    ptr = fopen("table.txt","w");
    if (ptr == NULL){
        printf("the pointer was not opened ");
    }
    for(int i =0; i<=10; i++){
        fprintf(ptr, "%d", num*i);
        fprintf(ptr, "%c" "\n");

    }
    fclose(ptr);
    return 0;
}