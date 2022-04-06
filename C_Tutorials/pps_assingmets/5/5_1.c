/* 1)  Write program to calculate simple and compound interest.
*/
#include<stdio.h>
#include<math.h>
#define datta main

int datta() {
     float p,n,r,si,ci;
     printf("Input Principle Amount --> ");
     scanf("%f",&p);
     printf("Input Number of years --> ");
     scanf("%f",&n);
     printf("Input Rate of Interest --> ");
     scanf("%f",&r);

     //si=simple intrest
      si=(p*n*r)/100;
      printf("Simple intrest is %.2f\n",si);

/**********************************************/

     //ci=compound intrest
      float middle=1+r/100;
      float power=pow(middle,n);
      ci=(p*power)-p;
      printf("Compoumd intrest is %.2f\n",ci);

    return 0;
}