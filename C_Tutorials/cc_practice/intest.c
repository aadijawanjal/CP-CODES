#include<stdio.h>
#define datta main
int datta() {
    long int t,count=0;
    scanf("%ld",&t);
    long long int n,x;
    scanf("%lld",&x);
    while(t--)
    {
        scanf("%lld",&n);
        if (n%x == 0)
        {
            count++;
        }  
    }
    printf("%ld\n",count);
    return 0;
}