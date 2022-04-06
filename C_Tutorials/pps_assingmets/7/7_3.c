// 3)	Write a Program for analysis of people of certain age groups 
// who are eligible for getting a suitable job if their age gets satisfied 
// using nested if else statement.

#include<stdio.h>
#define datta main

int datta(void) {
    int age;
    printf("Enter your age --> ");
    scanf("%d", &age);

    if (age < 18 || age >= 60)
    {
        printf("Sorry, You are not eligible for a Job.");
    }else{
        if (age >= 18 && age < 25)  
        {
            printf("You can do an Internship!");
        }else if (age >= 25 && age < 60)
        {
            printf("Congratulations! You are elegible for Job.");
        }
    }
    
}