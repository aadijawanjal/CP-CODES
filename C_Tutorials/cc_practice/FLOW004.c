#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,r;
        scanf("%d",&n);  //1234
        r = n % 10; //4
        while(n>9)
        {
            n = n / 10;  //123  12  1
        }
        r = r + n;
        printf("%d\n",r);
    }
    return 0;
}