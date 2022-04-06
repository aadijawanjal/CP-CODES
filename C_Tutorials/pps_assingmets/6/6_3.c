/* 3) Develop a Program to read a number. Check whether it is divisible by 7 or not.*/
#include<stdio.h>
#define datta main

int datta(void) {
    int n;
    printf("Enter Number --> ");
    scanf("%d",&n);

    if (n%7 == 0)
    {
        printf("Number is divisible by 7");
    }else{
        printf("Number is not divisible by 7");
    }
    
}