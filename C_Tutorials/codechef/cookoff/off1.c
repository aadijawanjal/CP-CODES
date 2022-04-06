#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);

        if (x<35)
        {
            printf("Underload\n");
        }else if (x>65)
        {
            printf("Overload\n");
        }else{
            printf("Normal\n");
        }
        
        
    }
    return 0;
}