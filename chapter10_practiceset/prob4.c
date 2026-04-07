#include <stdio.h>

int main() {
    int ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("nigga.txt","r");
    ptr2 = fopen("target.txt","w");

    if(ptr == NULL){
        printf("the file was not opened \n");

    }
    while(1){
        ch = fgetc(ptr);
        if (ch == EOF){
            break;

        }
        fprintf(ptr2, "%c", ch);  


    }
    fclose(ptr);
    fclose(ptr2);
    int i;
    ptr = fopen("nigga.txt","r");
    ptr2 = fopen("target.txt","a");
    if(ptr == NULL|| ptr2 == NULL){
        printf("file was not opened \n");
    }
    while(1){
        i = fgetc(ptr);
        if(i == EOF){
           break;
        }
        fprintf(ptr2,"%c",i);
    }
    fclose(ptr);
    fclose(ptr2);
        
    

    
    return 0;
}