#include <stdio.h>
#define datta main
int Prime(int n);
int datta(void)
{
    int n, i, help = 0;
    printf("Enter a Number --> ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (Prime(i) == 1)
        {
            if (Prime(n - i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                help = 1;
            }
        }
    }
    if (help == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.", n);

}
int Prime(int n)
{
    int i, isPrime = 1;
    if (n == 0 || n == 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    return isPrime;
}