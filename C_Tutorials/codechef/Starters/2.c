#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
     int x,y;
     scanf("%d",&x);
     scanf("%d",&y);
     int max;
     max = x/y;
     printf("%d\n",max);
    
    }
    return 0;
}
