#include<stdio.h>
#include<string.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n, k, count=0;
        scanf("%d", &n);
        scanf("%d", &k);

        char s[n];
        scanf("%s", s);

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (s[i] != s[j])
                {
                    // s[j] = s[0];
                    if (s[0] == 'B')
                    {
                        s[j] = 'B';
                    }else{
                        s[j] = 'R';
                    }
                    count++;
                    break;
                }
                
            }
            
        }
        printf("%d\n", count * k);
    }
    return 0;
}