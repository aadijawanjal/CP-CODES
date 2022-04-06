//2) Write a C program to read temperature in centigrade and display 
// a suitable message according to temperature state below

#include<stdio.h>
#define datta main

int datta(void) {
    float temp;
    printf("Enter Temp of your City --> ");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("Freezing Weather!");
    }else if (temp >= 0 && temp < 10)
    {
        printf("Very Cold Weather!");
    }else if (temp >= 10 && temp < 20)
    {
        printf("Cold Weather!");
    }else if (temp >= 20 && temp < 30)
    {
        printf("Normal Temperature!");
    }else if (temp >= 30 && temp < 40)
    {
        printf("It's Hot!");
    }else 
    {
        printf("It's very Hot!");
    }
    
    
    
    
    
    
}