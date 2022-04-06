#include <stdio.h>
#define datta main

int datta(void)
{
    int n;
    printf("Enter no of terms --> ");
    scanf("%d", &n);
    printf("The series is ");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("1");
        }
        if (i == n)
        {
            break;
        }
        printf(" + ");
    }
    printf("\nThe Sum of series is --> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", i + 1);
    }
}