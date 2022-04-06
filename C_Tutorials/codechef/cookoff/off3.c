#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);

        if (a+c >= b)
        {
            printf("%d\n",a+c);
        }
        else{
            printf("%d\n",b);
        }
        
    }
    return 0;
}