#include<stdio.h>
#define datta main
int datta() 
{
    float y,x;
    scanf("%f",&x);
    scanf("%f",&y);
    if(x <= (y-0.5) && (int)x % 5==0)
    {
        y = y-(x + 0.5);
        printf("%0.2f",y);
    }else
    {
        printf("%0.2f",y);
    }
    return 0;
}