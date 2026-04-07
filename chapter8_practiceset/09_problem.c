#include <stdio.h>
#include <string.h>
// this program is about making an fucnction for checking if a certain character is present in a string or not 
int checker (char * str, char a){
	int flag = 0;
	for (int i = 0; i< strlen(str); i++){
		if (str[i] == a){
			return 1;

		}
		
	}
	return 0;
}

int main() {
	char str[50];
	char n ;
	printf("pls enter the string /n");
	scanf("%s",str);
	printf("pls enter the charcter you want search in the string you provided/n");
	scanf(" %c",&n);
	if(checker(str,n)){
		printf("the character is present");
	}else{
		printf("the character is not present");
	}
    
    return 0;
}
