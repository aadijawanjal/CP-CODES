//
#include <stdio.h>
#define datta main

int datta()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n], count_0 = 0,count_1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count_0++;
            }
        }
        count_1 = n - count_0;
        if (count_0 == 0)
        {
            printf("0\n");
        }
        else
            printf("%d\n", (count_0 * 1000) + n * 100);
    }
    return 0;
}