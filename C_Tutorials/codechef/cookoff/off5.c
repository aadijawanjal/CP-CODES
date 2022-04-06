#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);

        int per[n];
        for (int i = 0; i < k; i++)
        {
            per[i]=i+1;   
        }
        
        for (int i = k; i < n-1; i++){
            per[i] = i + 2;
        }
        if (k == 1)
        {
            printf("%d",k);
        }else
        {
        per[n-1]=k+1;
        
        for (int i = 0; i < n; i++)
        {
            printf("%d ",per[i]);
        }
        }
       printf("\n") ;
    }
    return 0;
}