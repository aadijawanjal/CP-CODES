#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while (t--)
    {   
        int n,k,x=0,a,b;
        scanf("%d",&n);
        scanf("%d",&k);
       

        char s[n];
            scanf("%s",&s);

        for (int i = 0; i < n/2; i++)  //1 2 3 4
        {
            if (s[i] != s[n-(i+1)])   //1-4 2-3 3-2 4-1 
            {
                x=x+1;
            }  
        }

        a=(k-x)%2;
        b=n%2;

        if(k>=x)
        {
            if (a==0)
            {
               printf("Yes\n");
            }else if (b!=0)
            {
                printf("Yes\n");
            }else if (n==1)
            {
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }else
        {
            printf("No\n");
        }
    }
}        