#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
     int a,b,x,y;
     scanf("%d %d %d %d",&a,&b,&x,&y);
     if (x*y >= a*b)     
     {
        printf("Yes\n");
     }else{
         printf("No\n");
     }
     
    }
    return 0;
}