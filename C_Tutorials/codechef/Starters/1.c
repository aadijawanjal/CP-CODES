#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
     int x,y;
     scanf("%d",&x);
     scanf("%d",&y);
     if (x<y)
     {
         printf("BIKE\n");
     }else if (y<x)
     {
         printf("CAR\n");
     }else if (x==y)
     {
         printf("SAME\n");
     }
    }
    return 0;
}
