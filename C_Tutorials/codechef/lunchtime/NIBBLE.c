#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf(	"%d",&t);
    while(t--){
        int b;
        scanf("%d", &b);
        if (b%4 == 0)
        {
            printf("Good\n");
        }else
            printf("Not Good\n");
    }
    return 0;
}