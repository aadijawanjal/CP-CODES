// 9)	Write a program in C to read any Month Number in integer and display   
// the number of days for this month. 

#include<stdio.h>
#define datta main

int datta(void) {
    int month;
    printf("Enter Month Number --> ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month==5 
        || month == 7 ||month==8 || month==10 
        ||month==12)
    {
        printf("There are 31 days in Month!");
    }else if (month==4 || month==6 || month==9 
              || month==11)
    {
        printf("There are 30 days in Month!");
    }else if (month == 2)
    {
        printf("There are 28 days in Month!");
    }else
        printf("Invalid Month Number.");
}