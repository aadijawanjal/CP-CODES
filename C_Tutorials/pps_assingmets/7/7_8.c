// 8)	Write a program in C to read any digit, display in the word.

#include<stdio.h>
#define datta main

int datta(void) {
    int num;
    printf("Enter Digit [0-9] --> ");
    scanf("%d", &num);

    switch (num)
    {
        case 0:
        printf("Zero");
        break;
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
        default:
        printf("Greater than 9");
        break;
    }

}