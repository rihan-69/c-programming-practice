#include <stdio.h>
#include <stdlib.h>
/*
so these function fegetc and fputc lets you get a single character or type a single character accordingly in to a file or out
of the file in the very begeining we first need to define a file pointer then we need open the in that pointer in diffrent modes
accordingly to your use case*/

int main() {
    FILE *ptr;
    ptr = fopen("rihan.txt","w");
    //char c = fgetc(ptr);
  //  printf("%c\n",c);
    fputc('c',ptr);
    fclose(ptr);
    printf("\n");
    system("cat rihan.txt");
    printf("\n");

    
    return 0;
}