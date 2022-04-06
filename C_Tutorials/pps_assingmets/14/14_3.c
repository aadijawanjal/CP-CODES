/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<stdlib.h>
#define datta main

int datta(void)
{
    FILE *file3;
    int i, n;
    char str[100];
    char fname[20] = "test.txt";
    char str1;
    printf(" enter the number of lines to be written : ");
    scanf("%d", &n);
    printf("\n :: The lines are ::\n");
    file3 = fopen(fname, "w");
    for (i = 0; i < n + 1; i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, file3);
    }
    fclose(file3);
    file3 = fopen(fname, "r");
    printf("\n The content of the file %s is  :\n", fname);
    str1 = fgetc(file3);
    while (str1 != EOF)
    {
        printf("%c", str1);
        str1 = fgetc(file3);
    }
    printf("\n\n");
    fclose(file3);
}