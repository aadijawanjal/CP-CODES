/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main

void sort(int n, int *ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr + j) < *(ptr + i))
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
int datta(void)
{
    int n = 5;
    int arr[] = {0, 23, 14, 12, 9};

    sort(n, arr);
}