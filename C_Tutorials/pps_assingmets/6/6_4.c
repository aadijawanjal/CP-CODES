/* 4) Develop a Program to read number of units consumed by a customer.
      Find out electricity bill amount paid based on following condition,
      If units >= 100 then per unit 90 paisa otherwise 80 paisa charges.
*/
#include<stdio.h>
#define datta main

int datta(void) {
    float units,bill;
    printf("Enter Units consumed --> ");
    scanf("%f",&units);

    if (units >= 100)
    {
        bill = (units * 90) / 100;
        printf("Electricity bill is %.2f Rupees",bill);
    }else{
        bill = (units * 80) / 100;
        printf("Electricity bill is %.2f Rupees",bill);

    }
    
}