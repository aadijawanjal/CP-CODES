#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int r, m, l;
        scanf("%d", &r);
        scanf("%d", &m);
        scanf("%d", &l);

        if (m>r && r>l)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
    return 0;
}