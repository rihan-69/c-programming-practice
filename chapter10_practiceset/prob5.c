#include <stdio.h>

int main() {
    
    FILE *ptr;
    ptr = fopen("employee.txt","w");
    
    if(ptr == NULL){
        printf("the file was not opened\n");
        return 1;
    }

    fprintf(ptr,"%s %d","RIHAN",100);
    fprintf(ptr,"\n");
    fprintf(ptr, "%s %d", "rohan",200);
    fclose(ptr);
    return 0;

}