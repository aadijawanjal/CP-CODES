/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<stdlib.h>
#define datta main

int datta(void)
{
    FILE *file5;
    int ctr = 0;
    char fname[50];
    char c;
    printf(" enter the file name to be opened : ");
    scanf("%s", fname);

    file5 = fopen(fname, "r");
    if (file5 == NULL)
    {
        printf("Could not open file %s", fname);
        return 0;
    }
    for (c = getc(file5); c != EOF; c = getc(file5))
        if (c == '\n')
            ctr++;
    fclose(file5);
    printf(" The lines in the file %s are : %d \n \n", fname, ctr);
}