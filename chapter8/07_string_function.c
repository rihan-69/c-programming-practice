#include <stdio.h>
#include <string.h>
/*
 * "strcmp"this function is used to compair 2 strings 
 * if it is returns 0 then it means the strings are equal
 * if it is returning a negative then that means when both strings were compaired they mismatched
 * and after that asci value of the first character is compaired in both string and first one was 
 * less then the other
 * if the value is positive The first non-matching character in str1 has a larger ASCII value than the one in str2. (str1 comes after str2).
 * */

int main() {
	char st[] = "abcd";
	char tr[] = "bcds";
 	int a = strcmp("st","tr");
     printf("%d",a);	
    return 0;
}
