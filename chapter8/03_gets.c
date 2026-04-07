#include <stdio.h>

int main() {
    /* so we cant use scanf for multi line string and string with spaces
     so we have to use gets
     function for it
     * */
	char st[50];
	gets(st);

//	printf("%s",st)
   	puts(st);

	printf("hey");
		
	/*so the diffrence between the printf and puts print what ever there is in next iteration from next line basically you dont have to use /n with 
	 * printf if you are using the puts it gonna print whatever there is in next iteration with next line
	 * */	
    return 0;
}
