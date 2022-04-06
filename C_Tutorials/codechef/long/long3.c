#include<stdio.h>
#include<stdlib.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0,temp;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int max;
        max=arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }  
        }
        
        int x[100000];
        for (int i = 0; i < n; i++)
        {
            x[i]=arr[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if(x[i]!=i+1)
            {
                x[i]=arr[i];
            }else if (x[i]==i+1)
            {
                for(int j=i ;j<n+1 ;j++)
                {
                temp = x[j];
                x[j]=rand();
                x[j+1]=x[j];
                }
                c++;
            } 
        }
        printf("%d\n",c);
        
    }
    return 0;
}