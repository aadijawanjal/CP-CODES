/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main

int *maxmin(int ar[], int v);
int datta(void)
{
    int n, i, *p;
    printf("enter the size of array --> ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d values\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    p = maxmin(arr, n);
    printf("Minimum value is --> %d\n", *p++);
    printf("Maximum value is --> %d\n", *p);
}
int *maxmin(int arra1[], int v)
{
    int i;
    static int result_mm[2];
    result_mm[0] = arra1[0];
    result_mm[1] = arra1[0];
    for (i = 1; i < v; i++)
    {
        if (result_mm[0] > arra1[i])
            result_mm[0] = arra1[i];
        if (result_mm[1] < arra1[i])
            result_mm[1] = arra1[i];
    }
    return result_mm;
}
