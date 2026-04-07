#include <stdio.h>
#include <string.h>
char * strcopy(char *target , char *src, int n ){
	for (int i = 0; i<= n ; i++){
		target[i] = src[i];
		
	}
	target[n] = '\0';
return target;
	
}

int main() {
    char hr[] = "hello how are you";
    char ni[] = "i am fine how are you doing ";
    int a = strlen(ni);
    printf("the full string is %s",strcopy(hr,ni,a));
     
    return 0;
}
