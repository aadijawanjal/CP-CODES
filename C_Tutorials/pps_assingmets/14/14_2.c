/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<stdlib.h>
#define datta main

int datta(void)
{
    FILE *file2;
    char fname[20];
    char str;
    printf(" enter the name of file  to be opened : ");
    scanf("%s", fname);
    file2 = fopen(fname, "r");
    if (file2 == NULL)
    {
        printf(" File does not exist or cannot be opened.\n");
        exit(0);
    }
    printf("\n The content of the file %s is  :\n", fname);
    str = fgetc(file2);
    while (str != EOF)

    {
        printf("%c", str);
        str = fgetc(file2);
    }
    fclose(file2);
    printf("\n\n");
}