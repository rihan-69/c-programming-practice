#include <stdio.h>
#include <string.h>
//this program is about making simple encrypting and decrypting function for strings 
char * encrypt(char * str){
	for(int i = 0; i<strlen(str); i++){
		str[i] = str[i] +1;
	}
	return str;
}
char * decrypt( char *str ){
	for (int j = 0; j<strlen(str); j++){
		str[j] = str[j] - 1;

}
return str;
}

int main() {
	char hi[] = "hello how are you";
	printf("the encrypted msg is %s/n",encrypt(hi));
	printf (" the decrypted msg is %s", decrypt(hi));
    
    return 0;
}
