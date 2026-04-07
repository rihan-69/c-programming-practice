#include <stdio.h>
#include <string.h>
/*
 * "strcat "this function is used to concatenate two strings 
 * */
int main() {
	char s1[] = "hello";
	char s2[] = "rihan ";
	strcat(s1,s2); // s1 now contains "hellorihan" no space in between
	printf("%s",s1);
    
    return 0;
}
