/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main
void ArrayElement(int arr1[], int st, int l);
int datta(void)
{
    int n, i;
    printf(" enter the size of array --> ");
    scanf("%d", &n);
    int arr1[n];
    printf(" Input %d elements in the array --> \n", n);
    for (i = 0; i < n; i++)
    {
        printf(" element - %d --> ", i);
        scanf("%d", &arr1[i]);
    }

    printf(" The elements in the array are -->  ");
    ArrayElement(arr1, 0, n);
    printf("\n\n");
    return 0;
}

void ArrayElement(int arr1[], int st, int l)
{
    if (st >= l)
        return;

    printf("%d  ", arr1[st]);

    ArrayElement(arr1, st + 1, l);
}