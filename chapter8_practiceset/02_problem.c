
/* so this question is about compairing two string and using two diffrent format specifier "%s" and %c */

    // so in the case of %c format specifier it is just for a single character so we have to traverse the string array 
    // using for loop and have to manually add the null character at the end
    // and it also reads /n and takes it as input so we have to use fflush(stdin); it ignores the newline character so 
    // so apparantly fflush is just for forcing any buffered data to the stdout and it does not define any behaviour and 
    // oofcource and fflush with stdin does not define any behavior so in some cases when you are working on windows there
    // microsoft (msvc) added a non standard extension to clear input buffer but it does not works in linux so we have to
    // use another method
   /*  char st[6];
    for(int i = 0; i<5; i++){
	    scanf("%c",&st[i]);
	    fflush(stdin);

    } st[5] = '\0';
    printf("%s",st);
    return 0;
}*/
/*
 * in this format basically by leaving a space before the " %c"
 * we are telling the format specifier to skip white spaces and that could be newline character 
 * space tab*/

#include <stdio.h>

int main() {
    char st[6];
      for(int i = 0; i<5; i++){
              scanf(" %c",&st[i]);
     
      } st[5] = '\0';
      printf("%s",st);
      return 0;

}
