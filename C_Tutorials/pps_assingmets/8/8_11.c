#include <stdio.h>
#define datta main

int datta(void)
{
    int n, a, b, help = 0;
    printf("Enter range from a to b --> ");
    scanf("%d %d", &a, &b);
    printf("The prime numbers in range of %d to %d --> \n", a, b);
    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j != 0)
            {
                help = 1;
            }
            else
            {
                help = 0;
                break;
            }
        }
        if (help)
        {
            printf("%d ", i);
        }
    }
}