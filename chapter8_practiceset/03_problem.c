#include <stdio.h>

int strlenght(char st[]) {
    int n = 0; 

    for(int i = 0; st[i] != '\0'; i++) {
	    if (st[i]!= ' '){
		    n++;
	    }
        
    }
    return n;
}
#include <stdio.h>

int main() {
    char st[] = "hello how are you ";
    printf("the number of character in this string are %d",strlenght(st));
    return 0;
}
