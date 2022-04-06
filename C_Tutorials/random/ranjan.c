#include <stdio.h>
#include <string.h>
int main()
{
    char strarr[5][20];
    int i, j, length = 0;
    printf("\nEnter 5 strings:\n");
    for (i = 0; i < 5; ++i)
    {
        gets(strarr[i]);
    }
    for (i = 0; i < 5; ++i)
    {
        j = 0;
        while (strarr[i][j] != '\0')
        {
            ++length;
            ++j;
        }
        printf("\nlength of %s=%d", strarr[i], length);
        length = 0;
    }

    printf("\nThank you. ");
}