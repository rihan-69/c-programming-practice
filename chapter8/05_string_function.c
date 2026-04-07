#include <stdio.h>
#include <string.h>
/*
 * this function is used for copying a certain string to another string like source string to target string
 * "stcpy" 
 * */
int main() {
	char st[] = "rihan";
	char target[50];
	strcpy(target,st);// target now contain "rihan"
        printf("%s %s", st, target );


    
    return 0;
}
