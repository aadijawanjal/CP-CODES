// 6)	Write a program in C to read any day number in integer 
// and display day name in the word. (switch)

#include<stdio.h>
#define datta main

int datta(void) {
    int day_num;
    printf("Enter Day Number --> ");
    scanf("%d", &day_num);
    
    switch (day_num)
    {
    case 1:
        printf("Day is Sunday!");
        break;
    case 2:
        printf("Day is Monday!");
        break;
    case 3:
        printf("Day is Tuesday!");
        break;
    case 4:
        printf("Day is Wednesday!");
        break;
    case 5:
        printf("Day is Thursday!");
        break;
    case 6:
        printf("Day is Friday!");
        break;
    case 7:
        printf("Day is Saturday!");
        break;
    default:
        printf("Invalid Day Number.");
        break;
    }
}