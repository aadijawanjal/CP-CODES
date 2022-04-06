#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define datta main

int datta(void) {
    char str[20];
    int l, i;
    printf("Enter input string : ");
    fgets(str, sizeof str, stdin);
    printf("The characters in reverse are : \n");
    l = strlen(str);
    for (i = l - 1; i >= 0; i--)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
}