#include<stdio.h>
#include<stdlib.h>
#define datta main

int datta() {
    int t;
    scanf(	"%d",&t);
    while(t--){
        int x1, x2, y1, y2;
        scanf("%d %d %d %d", &x1, &x2, &y1, &y2);

        int ans1,ans2;
        ans1 = x1 - y1;
        ans2 = x2 - y2;

        if (abs(ans1) > abs(ans2))
        {
            printf("%d\n", abs(ans1)); 
        }else
            printf("%d\n", abs(ans2));
    }
    return 0;
}