/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
#define datta main

int datta(void)
{
    int lno, ctr = 0;
    char ch;
    FILE *file7_1, *file7_2;
    char fname[MAX];
    char str[MAX], temp[] = "temp.txt";
    printf(" enter  the file name to be opened : ");
    scanf("%s", fname);
    file7_1 = fopen(fname, "r");
    if (!file7_1)
    {
        printf(" File not found or unable to open the input file!!\n");
        return 0;
    }
    file7_2 = fopen(temp, "w");
    if (!file7_2)
    {
        printf("Unable to open a temporary file to write!!\n");
        fclose(file7_1);
        return 0;
    }
    printf(" enter the line number you want to remove : ");
    scanf("%d", &lno);
    lno++;
    while (!feof(file7_1))
    {
        strcpy(str, "\0");
        fgets(str, MAX, file7_1);
        if (!feof(file7_1))
        {
            ctr++;
            if (ctr != lno)
            {
                fprintf(file7_2, "%s", str);
            }
        }
    }
    fclose(file7_1);
    fclose(file7_2);
    remove(fname);
    rename(temp, fname);
    file7_1 = fopen(fname, "r");
    ch = fgetc(file7_1);
    printf(" Now the content of the file %s is : \n", fname);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(file7_1);
    }
    fclose(file7_1);
}