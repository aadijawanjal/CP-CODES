#include<stdio.h>
#define datta main

int datta(void) {
    char str[100];
    int length=0;

    printf("\nEnter the String : ");
    gets(str);

    while (str[length] != '\0')
        length++;

    printf("\nLength of the String is : %d", length);
}