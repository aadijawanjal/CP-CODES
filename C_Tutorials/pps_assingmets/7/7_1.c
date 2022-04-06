// 1)	Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
#define datta main

int datta(void) {
    int a,b;
    printf("Enter 2 Numbers A and B --> \n");
    scanf("%d\n%d",&a,&b);

    if (a == b)
    {                     
        printf("Both entered numbers are equal.");
    }else{
        printf("Both entered numbers are not equal."); 
    }
    
}