/* 5) An electricity board charges the following rates for the use of electricity: 
      for the first 200 units 80 paise per unit:
      for the next 100 units 90 paise per unit:
      beyond 300 units Rs 1 per unit.
      All users are charged a minimum of Rs. 100 as meter charge. 
      If the total amount is more than Rs 400, then an additional surcharge of 15% of total amount is charged. 
      Write a program to read the name of the user, 
      number of units consumed and print out the charges.
*/

#include <stdio.h>
#include<string.h>
#define datta main
int datta(void){
    char name[50];
    float Units, totalpaise, n;
    printf("Name of the user --> ");
    gets(name);
    printf("Enter units consumed --> ");
    scanf("%f",&Units);
    if (Units <= 200){
        totalpaise = Units * 80 + 10000;
    }
    else if (Units > 200 && Units <= 300){
        totalpaise = 26000 + (Units - 200) * 90;
    }
    else if (Units > 300 && Units <= 350){
        totalpaise = 35000 + (Units * 1 - 300) * 100;
    }
    else{
        n = 35000 + (Units - 300) * 100;
        totalpaise = n * 1.15;
    }
    float bill = totalpaise / 100;
    printf("Total Charges are --> %0.2f",bill);
}