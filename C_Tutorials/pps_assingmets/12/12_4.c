/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main

int findMax(int[]);
int n;

int datta(void)
{
    int max, i;
    printf("enter the size of array --> ");
    scanf("%d", &n);
    int arr1[n];
    printf(" enter  %d elements in the array --> \n", n);
    for (i = 0; i < n; i++)
    {
        printf(" element - %d -->  ", i);
        scanf("%d", &arr1[i]);
    }
    max = findMax(arr1);

    printf(" The largest element in the array is -->  %d\n\n", max);
    return 0;
}
int findMax(int arr1[])
{
    int i = 1, maxE;
    maxE = arr1[0];
    while (i < n)
    {
        if (maxE < arr1[i])
            maxE = arr1[i];
        i++;
    }
    return maxE;
}