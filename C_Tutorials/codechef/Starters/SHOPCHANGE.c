#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", 100 - n);
    }
    return 0;
}