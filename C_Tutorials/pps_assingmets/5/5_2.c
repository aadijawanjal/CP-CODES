/* 2)  In a town, the percentage of men is 52. 
       The percentage of total literacy is 48. 
       If total percentage of literate men is 35 of the total population, 
       write a program to find the total number of illiterate men and women 
       if the population of town is 80000.
*/
#include<stdio.h>
#define datta main

int datta() {
    int n=80000;
    int men,women,men_l,women_l,men_il,women_il,total_l;

    men = (n * 52)/100;
    women = (n * 48)/100;
    total_l = (n * 48)/100;

    men_l = (n * 35)/100;
    men_il = men - men_l;
    printf("Number of total Men Illitarate are --> %d\n",men_il);

    women_l = total_l - men_l;
    women_il = women - women_l;
    printf("Number of total Women Illiterate are --> %d\n",women_il);
    return 0;
}