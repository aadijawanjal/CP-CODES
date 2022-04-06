#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d",&n);
        scanf("%d",&x);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);            
        }
        int max = x; //5
        int ans = x; //5
        for (int i = 0; i < n; i++)
        {
            max = max + a[i];  // 3 -2 -4
            if (max >= ans)
            {
                ans = max;    //5
            }   
        }
        printf("%d\n",ans);
        
    }
    return 0;
}