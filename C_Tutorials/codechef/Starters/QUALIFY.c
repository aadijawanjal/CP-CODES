#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf(	"%d",&t);
    while(t--){
        int x,a,b;
        scanf("%d", &x);
        scanf("%d", &a);
        scanf("%d", &b);

        if ((a+2*b) >= x)
        {
            printf("Qualify\n");
        }else
            printf("NotQualify\n");
    }
    return 0;
}