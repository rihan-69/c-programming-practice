#include <stdio.h>

char*  slice (char st[], int i , int n) {
char * ptr1 =&st[i] ;
st = ptr1;
st[n] = '\0';
        
    return st;
}
#include <stdio.h>

int main() {
    char st[] = "hello how are you ";
    printf("the sliced string is %s",slice(st,1,5));
    return 0;
}
