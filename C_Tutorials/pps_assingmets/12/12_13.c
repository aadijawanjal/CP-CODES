/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include <string.h>
#define datta main

int string_ln(char *);
int datta(void)
{
    char str[20];
    int length;

    printf("Enter any string :: ");
    gets(str);

    length = string_ln(str);
    printf("\nThe length of string is --> %d", length);
}

int string_ln(char *p)
{
    int count = 0;
    while (*p != '\0')
    {
        if (*p == ' ')
        {
            p++;
            continue;
        }
        else
        {
            count++;
            p++;
        }
    }
    return count;
}