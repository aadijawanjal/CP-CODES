// 7)	Write a program in C which is a Menu-Driven Program 
// to perform a simple calculation.(use all arithmetic operators)

#include<stdio.h>
#define datta main

int datta(void) {
    char x;
    printf("Enter Arithmatic Operation\nto be performed [A/S/M/D/R] --> ");
    scanf("%c", &x);
    float a, b;

    switch (x)
    {
    case 'A':
        printf("You chose Addition.\n Enter 2 Numbers --> ");
        scanf("%f\n%f", &a, &b);
        printf("Your answer is --> %.2f", a + b);
        break;
    case 'S':
        printf("You chose Subtraction.\n Enter 2 Numbers --> ");
        scanf("%f\n%f", &a, &b);
        printf("Your answer is --> %.2f", a - b);
        break;
    case 'M':
        printf("You chose Multiplication.\n Enter 2 Numbers --> ");
        scanf("%f\n%f", &a, &b);
        printf("Your answer is --> %.2f", a * b);
        break;
    case 'D':
        printf("You chose Division.\n Enter 2 Numbers --> ");
        scanf("%f\n%f", &a, &b);
        printf("Your answer is --> %.2f", a / b);
        break;
    case 'R':
        printf("You chose Remainder.\n Enter 2 Numbers --> ");
        scanf("%f\n%f", &a, &b);
        printf("Your answer is --> %.2f", (int)a % (int)b);
        break;
    }
}