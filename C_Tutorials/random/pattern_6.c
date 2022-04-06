//program to input a number and get a pattern like
/*n=3 ->3 3 3 3 3
        3 2 2 2 3
        3 2 1 2 3
        3 2 2 2 3
        3 3 3 3 3 
          
          * author--> Datta Gangji
          * date--> 16/01/2022    
*/
#include <stdio.h>

int main()
{
    int i,j,n,a,b,t=1,c,d,e;

    printf("Enter your number : ");
    scanf("%d", &n);  //5
    a=n;
    b=n;
    c=n;  
    d=n+1;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d",c);
            printf(" ");
            c=c-1;
        }
        c=n;
        for (j = 0; j < 2*a-1; j++)
        {
            printf("%d",a);
            printf(" ");
        }
       a=a-1; 
       d=d-i;
        for ( j = 0; j < i; j++) //0 1 
        {
            printf("%d",d);
            printf(" ");
            d=d+1;
        }
        printf("\n");
    }
    a=2;
    e=3;
    for (i = 1; i < n; i++)
    {
        for (j = b-1; j > 1; j--)   //4 3 2  3 2 
        {
            printf("%d",c);
            printf(" ");
            c=c-1;
        }                            
        c=n;
        for ( j = 3*t ; j <= 5*t; j++)    //4 3 2  3 2
        {
            printf("%d",a);
            printf(" ");
        }
        for ( j = 1; j < b-1; j++)
        {
            printf("%d",e);
            printf(" ");
            e=e+1;
        }
        e=i+3;
        a=a+1;
        b=b-1;
        t=t+1;
        printf("\n");
    }
        return 0;
}