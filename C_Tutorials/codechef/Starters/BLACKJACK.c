#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a, b, ans;
        scanf("%d", &a);
        scanf("%d", &b);

        ans = 21 - (a + b);
        if (ans <= 10)
        {
            printf("%d\n", ans);
        }else{
            printf("-1\n");
        }
        
    }
    return 0;
}