#include <stdio.h>

int main() {
    FILE *ptr;
    int a,c;
    char b[20];
    ptr = fopen("file.txt","r");
    fscanf(ptr,"%d %s %f",&a,b,&c);
    printf("the value are %d %s %d\n",a,b,c);
    fclose(ptr);

    return 0;
}