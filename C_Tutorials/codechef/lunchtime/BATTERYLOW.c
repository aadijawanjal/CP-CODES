#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int p;
        scanf("%d", &p);
        if (p<=15)
        {
            printf("Yes\n");
        }else
            printf("No\n");
    }
    return 0;
}