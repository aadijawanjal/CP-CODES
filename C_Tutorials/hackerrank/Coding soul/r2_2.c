#include<stdio.h>
#include<string.h>
#define datta main

int datta(void) {
    int n, m,count=0;
    scanf("%d", &n);
    scanf("%d", &m);
    char s1[n], s2[m];
    scanf("%s", s1);
    scanf("%s", s2);

    if (n >= m)
    {
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                /* code */
            }
               
        }
        
    }else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = i; j < n; j++)
            {
                if(s2[i] != s1[j])
                {
                    count++;
                    break;
                } 
            }
        }
    }
    printf("%d", count);
}