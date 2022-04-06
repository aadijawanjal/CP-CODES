#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n, d, r;
        scanf("%d", &n);
        d = n / 10;
        r = n % 10;
        if (r == 0)
        {
            printf("%d\n", d);
        }else
            printf("%d\n", d + 1);
    }
    return 0;
}