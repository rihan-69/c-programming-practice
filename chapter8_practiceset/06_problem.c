#include <stdio.h>
#include <string.h>
char * mystrslice(char * str, int startingpoint, int endingpoint){
	str[0] = str[startingpoint];
	str[endingpoint] = '\0';
	return str;
}

int main() {
	char gi[]= "turtles all the way down";
	printf("%s",mystrslice(gi,5,8));
    
    return 0;
}
