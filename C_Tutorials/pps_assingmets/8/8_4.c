#include<stdio.h>
#define datta main

int datta(void) {
    int n;
    printf("Input upto the table number starting from 1 --> ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%dx%d=%d\t", j, i, j * i);
        }
        printf("\n");
    }
}