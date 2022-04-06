#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        int ans=0;
        ans = 7 - x;
        printf("%d\n",ans);
    }
    return 0;
}