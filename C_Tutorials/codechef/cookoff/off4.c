#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,w;
        scanf("%d",&n);
        scanf("%d",&w);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        int ans = 0,tmp=0;
        for (int i = 0; i < n; i++)                     
	{
		for (int j = 0; j < n; j++)             
		{
			if (a[j] < a[i])                
			{
				int tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;             
			}
		}
	}
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            ans=ans+a[i];
            if (ans >= w)
            {
                /* code */
                printf("%d\n",n-(i+1));
                break;
            }
            
        }
        
        
                      
    }
    return 0;
}