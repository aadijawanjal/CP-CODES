/* 2) Write C program to find entered number by user is prime or not.*/
#include<stdio.h>
#include<stdlib.h>
#define datta main
int datta(void) {
    int n,c;
    printf("Enter Number --> ");
    scanf("%d",&n);

    for (int i = 2; i < n; i++)
    {
        if (n==2)
        {
            printf("Entered Number is Prime Number!\n");
            exit(0);
        }else if (n%i==0)
        {
            printf("Entered Number is not a prime number!\n");
            exit(0);
        }else{
            c++;
        } 
    }
    if (c>0)
    {
        printf("Entered Number is Prime Number!\n");
    }
    
}