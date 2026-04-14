#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int digit_checker(char *argv);
char rotate(char c, int key);

int main(int argc, char *argv[])
{
    char string[1000];

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    if (!digit_checker(argv[1]))
    {
        printf("Usage: ./caesar key\n"); 
        return 1;
    }

    int key = atoi(argv[1]);

    printf("plaintext:  ");    
    fgets(string, 1000, stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("ciphertext: "); 
    for (int i = 0; i < strlen(string); i++)
    {
        printf("%c", rotate(string[i], key));
    }
    printf("\n");

    return 0;
}

char rotate(char c, int key) 
{
    if (c >= 'A' && c <= 'Z')
    {
        return (((c - 'A' + key) % 26) + 'A'); 
    }
    else if (c >= 'a' && c <= 'z') 
    {
        return (((c - 'a' + key) % 26) + 'a'); 
    }
    else
    {
        return c; 
    }
}

int digit_checker(char *argv)
{
    for (int i = 0; argv[i] != '\0'; i++)
    {
        if (argv[i] < '0' || argv[i] > '9')
        {
            return 0;
        }
    }
    return 1;
}