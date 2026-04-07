#include <stdio.h>

int main() {
    FILE *ptr;
    ptr  = fopen("jq.txt","r");
    if (ptr  == NULL){
	    printf("sorry the file you have entered does not exist");
    }else{
   char  num[7];
    fscanf(ptr, "%s", num);
    printf("the value of num is %s\n",num);
    }

    return 0;
}
