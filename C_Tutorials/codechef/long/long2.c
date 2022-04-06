#include<stdio.h>
//#include<stdlib.h>
#define datta main

int datta(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a=0,b=0,c=0,n;
        scanf("%d",&x);
        n=14;
        char results[n];
        scanf("\n%s",results);
        for (int i = 0; i < n; i++)
        {
            if (results[i]=='C')
            {
               a=a+1;
            }
            else if (results[i]=='N')
            {
                b=b+1;
            }
            else if(results[i]=='D')
            {              
                c=c+1;
            } 
        }

        int points_c=0,points_n=0;
        points_c= (2*a) + c;
        points_n= (2*b) + c;
        int prize=0;
        if (points_c > points_n)
        {
           prize = 60 * x;
           printf("%d\n",prize);
            
        }else if (points_c < points_n)
        {
            prize = 40 * x;
            printf("%d\n",prize);

        }else if (points_c == points_n)
        {
            prize = 55 * x;
            printf("%d\n",prize);
        } 
    }
    return 0;
}