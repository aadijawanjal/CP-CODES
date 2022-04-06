/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define datta main
#define LSIZ 10
#define RSIZ 128

int datta(void)
{
    char line[RSIZ][LSIZ];
    char fname[20];
    FILE *file4 = NULL;
    int i = 0;
    int tot = 0;
    printf(" enter the filename to be opened : ");
    scanf("%s", fname);

    file4 = fopen(fname, "r");
    while (fgets(line[i], LSIZ, file4))
    {
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;
    printf("\n The content of the file %s  are : \n", fname);
    for (i = 0; i < tot; ++i)
    {
        printf(" %s\n", line[i]);
    }
    printf("\n");
}