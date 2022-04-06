/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<stdlib.h>
#define datta main

int datta(void)
{
    FILE *fold1, *fold2, *fnew;
    char ch, fname1[20], fname2[20], fname3[30];
    printf(" enter the 1st file name : ");
    scanf("%s", fname1);
    printf(" enter the 2nd file name : ");
    scanf("%s", fname2);
    printf(" enter the new file name where to merge the above two files : ");
    scanf("%s", fname3);
    fold1 = fopen(fname1, "r");
    fold2 = fopen(fname2, "r");
    if (fold1 == NULL || fold2 == NULL)
    {
        printf(" File does not exist or error in opening...!!\n");
        exit(EXIT_FAILURE);
    }
    fnew = fopen(fname3, "w");
    if (fnew == NULL)
    {
        printf(" File does not exist or error in opening...!!\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(fold1)) != EOF)
    {
        fputc(ch, fnew);
    }
    while ((ch = fgetc(fold2)) != EOF)
    {
        fputc(ch, fnew);
    }
    printf(" The two files merged into %s file successfully..!!\n\n", fname3);
    fclose(fold1);
    fclose(fold2);
    fclose(fnew);
}