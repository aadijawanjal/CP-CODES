/* 1) Write c program to find maximum and minimum number 
      entered by user among three numbers.
*/
#include<stdio.h>
#define datta main

int datta(void) {
    int a,b,c;
    printf("Enter 3 Values --> \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("Greatest number is %d\n",a);
    }else if (b>c)
    {
        printf("Greatest number is %d\n",b);
    }else if(c>b){
        printf("Greatest number is %d\n",c);
    }else if (a==b && b==c)
    {
        printf("All numbers are equal!\n");
    }
    
    if (a<b && a<c)
    {
        printf("Smallest number is %d\n",a);
    }else if (b<c)
    {
        printf("Smallest number is %d\n",b);
    }else if(c<b){
        printf("Smallest number is %d\n",c);
    }
}