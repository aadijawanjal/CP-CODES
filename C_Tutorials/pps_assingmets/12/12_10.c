/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<string.h>
#define datta main

char *reverse(char *str);
int datta(void)
{
    int i, j, k;
    char str[100];
    char *rev;
    printf("Enter the string --> ");
    gets(str);
    printf("The original string is: \n");
    puts(str);
    rev = reverse(str);
    printf("The reversed string is: \n");
    puts(rev);
}
char *reverse(char *str)
{
    static int i = 0;
    static char rev[100];
    if (*str)
    {
        reverse(str + 1);
        rev[i++] = *str;
    }
    return rev;
}