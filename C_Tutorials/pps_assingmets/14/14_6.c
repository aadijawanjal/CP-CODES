/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<stdlib.h>
#define datta main

int datta(void)
{
    FILE *file6;
    char ch;
    int wrd = 1, charctr = 1;
    char fname[20];
    printf(" enter  the name of file to be opened : ");
    scanf("%s", fname);
    file6 = fopen(fname, "r");
    if (file6 == NULL)
    {
        printf(" File does not exist or can not be opened.");
    }
    else
    {
        ch = fgetc(file6);
        printf(" The content of the file %s are : ", fname);
        while (ch != EOF)
        {
            printf("%c", ch);
            if (ch == ' ' || ch == '\n')
            {
                wrd++;
            }
            else
            {
                charctr++;
            }
            ch = fgetc(file6);
        }
        printf("\n The number of words in the  file %s are : %d\n", fname, wrd - 2);
        printf(" The number of characters in the  file %s are : %d\n\n", fname, charctr - 1);
    }
    fclose(file6);
}