#include <stdio.h>
#define datta main

int datta(void)
{
    int n, k = 2;
    printf("Input number of terms --> ");
    scanf("%d", &n);
    printf("The even numbers are --> ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", k);
        k += 2;
    }
    printf("\nThe Sum of even natural terms upto %d is %d", n, n * (n + 1));
}