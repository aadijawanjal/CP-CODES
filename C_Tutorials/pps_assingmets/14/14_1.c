/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<stdlib.h>
#define datta main

int datta(void)
{
    char str[1000];
    FILE *file1;
    char fname[20] = "Datta.txt";
    file1 = fopen(fname, "w");
    if (file1 == NULL)
    {
        printf(" Error in opening file!");
        exit(1);
    }
    printf(" Enter a sentence  : ");
    fgets(str, sizeof str, stdin);
    fprintf(file1, "%s", str);
    fclose(file1);
    printf("\n The file %s created successfully...!!\n\n", fname);
}