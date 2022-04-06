#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf(	"%d",&t);
    while(t--){
        int n;
        scanf("%d", &n);
        int pen[n],cap[n],count=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &pen[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &cap[i]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (pen[i] == cap[j])
                {
                    count++;
                    break;
                }
                
            }
            
        }
        if (count == n)
        {
            printf("Yes\n");
        }else
        {
            printf("No\n");
        }
        
        
        
        
    }
    return 0;
}