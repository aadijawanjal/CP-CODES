#include<stdio.h>


int main()
{
    int t,i,a=0;

    printf("Enter Number you want the Table for ");
    scanf("%d",&t);

    for( i = 1; i < 11; i++)
    {
       a=t*i; 
       printf("%d x %d = %d \n",t,i,a);
       
    }
    printf("Your table is ready!");
    return 0;
}