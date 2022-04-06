#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define datta main
int datta() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld", &n);
        int a[n],sumn[n],sum=0,ans1=0,ans2=0;
        float help = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum = sum + a[i];
            sumn[i] = sum;
        }
        ans = sum;

        // help = sum / 2;

        // for (int i = n-1; i >= 0 ; i--)
        // {
        //     ans1 = ans1 + a[i];
        //     if (ans1 >= help)
        //     {
        //         break;
        //     }
        // }

        // ans2 = sum - ans1;
        // if (ans2 >= ans1)
        // {
        //     printf("%ld\n", ans2);
        // }else
        // {
        //     printf("%ld\n", ans1);
        // }
        
    }
    return 0;
}