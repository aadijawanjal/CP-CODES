#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n, count = 1, count1 = 0,count2=0,count3=1;
        scanf("%d", &n);
        char str[n];
        
        scanf("%s", str);
        
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                if (i == 0)
                {
                    for (int j = 0; j < n; j++)
                    {
                        
                        if (str[i] == str[j+1])
                        {
                            count = j+2;
                            break;
                        }
                        
                    }
                    printf("-1 %d\n", count);
                }else if(i > 0 && i < n-1)
                {
                    for (int j = i; j >=0; j--)
                    {
                        
                        if (str[i] == str[j-1])
                        {
                            count1 = j;
                            break;
                        }
                        
                    }
                    for (int j = i; j < n; j++)
                    {
                        if (str[i] == str[j+1])
                        {
                            count2 = j+2;
                            break;
                        }
                        
                    }
                printf("%d %d\n", count1, count2);
                }
                else if (i == n-1)
                {
                    for (int j = i; j >= 0; j--)
                    {
                        if (str[i] == str [j-1])
                        {
                            count3 = j;
                            break;
                        }
                        
                    }
                    printf("%d -1\n", count3);
                }
                
            }
            count1 = 0;
            count2 = 0;
            count = 0;
        }
        
    }
    return 0;
}