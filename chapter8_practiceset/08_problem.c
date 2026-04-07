#include <stdio.h>
#include <string.h>
// this program is about making an fucntion counting an occurance of a given character in a string
int count (char * str, char a){
	int j = 0;
	for (int i = 0; i< strlen(str); i++){
		if (str[i] == a){
			j++;

		}
		
	}
	return j;
}

int main() {
	char str[] = "hell0 my name is wiskers";
	char n = 'e';
	printf(" the number time the character e has occured in string str is %d", count(str,n));
    
    return 0;
}
