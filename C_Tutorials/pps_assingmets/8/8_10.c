#include<stdio.h>
#define datta main

int datta(void) {
    int n, r, sum = 0;
    printf("Enter the number --> ");
    scanf("%d", &n);
    int help = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == help)
    {
        printf("The number %d is armstrong number", help);
    }
    else
    {
        printf("The number %d is not armstrong number", help);
    }
}