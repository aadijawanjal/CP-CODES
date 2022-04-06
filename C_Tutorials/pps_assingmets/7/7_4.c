// 4)	Write a C program to check whether a character is 
// an alphabet, digit or special character.(else if)
#include<stdio.h>
#define datta main

int datta(void) {
    char test;
    printf("Enter your Testing character --> ");
    scanf("%s", &test);
    if (test >= 48 && test <= 57)   
    {
        printf("You entered a digit!");
    }else if (test >= 65 && test <= 90)
    {
        printf("You entered a Capital Alphabet!");
    }else if (test >= 97 && test <= 122)
    {
        printf("You entered a Small Alphabet!");
    }else
    {
        printf("You entered a Special character!");
    }
}