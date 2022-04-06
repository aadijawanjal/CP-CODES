#include<stdio.h>
#define datta main

int datta(void) {
    int n;
    printf("Enter Number of terms --> ");
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++)
    {
        printf("The cube of %d is %d\n", i, i * i * i);
    }
    
}