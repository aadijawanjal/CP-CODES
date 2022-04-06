/* 4) If the total selling price of 15 items and total profit 
      earned on them is input through the keyboard,
      write a program to find cost price of one item.
*/

#include<stdio.h>
#define datta main

int datta() {
    int t_sell,t_profit;
    printf("Total selling price --> ");
    scanf("%d",&t_sell);
    printf("Total Profit --> ");
    scanf("%d",&t_profit);

    int t_cost;
    t_cost = t_sell - t_profit;

    float cost;
    cost = (float)t_cost / 15;
    printf("Cost price of one item --> %.2f",cost);
    return 0;
}