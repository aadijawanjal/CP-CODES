#include<stdio.h>
#define datta main

int datta(void) {
    int n;
    printf("Input Number of terms --> ");
    scanf("%d", &n);
    printf("The first n natural terms are\n");
    for (int i = 1; i < n+1; i++)
    {
        printf("%d\n",i);
    }
    printf("The Sum of %d terms is %d", n, 
    (n * (n + 1)) / 2);
}