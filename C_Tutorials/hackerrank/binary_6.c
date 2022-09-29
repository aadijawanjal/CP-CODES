#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>
#define datta main

int datta() {
    long long int t;
    scanf("%lld",&t);
    while (t--)
    {   
        char a[1000000];
        scanf("%s",&a);
        long long int x=0,n;
        n=strlen(a);
        for (int i = 0; i < n; i++)  //0 1 2 3 4
        {
            if (a[i]=='0')
            {
                x = x + (i+1);  //1 1 4 8 13
            } 
        }
        printf("%lld\n",x);
printf("aadi bahi");
    }
    
    return 0;
}
