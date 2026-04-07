#include <stdio.h>

int main() {
    FILE *ptr;
    ptr  = fopen("harry.txt","r");
   char  num[7];
    fscanf(ptr, "%s", num);
    printf("the value of num is %s\n",num);


    return 0;
}
