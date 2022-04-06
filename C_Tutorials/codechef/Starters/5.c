#include<stdio.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;   
        scanf("%d",&n);
        scanf("%d",&x);  
        scanf("%d",&y);  

        int d1,d2,r1,r2,d3,r3;
        d1=n/4;   
        r1=n%4;   
        d2=n/100; 
        r2=n%100; 
        int ans = 0;
        if (n==0 || x==0 || y==0)
        {
            printf("0");
        }else if (n<=100 && x<y)
        {
            printf("%d\n",x);
        }else if (n<=100 && x>y)
        {
            if (r1 == 0)
            {
                ans = d1 * y;
                if (ans > x)
                {
                    printf("%d\n",x);
                }else{
                    printf("%d\n",ans);
                }
                
            }else if (r1 != 0)
            {
                ans = d1*y + y;
                if (ans > x)
                {
                    printf("%d\n",x);
                }else{
                    printf("%d\n",ans);
                }
            }  
        }else if (n>100 && x<y)
        {
            if (r2==0)
            {
                ans = d2*x;
                printf("%d\n",ans);
            }else if(r2 != 0)
            {
                ans = d2*x + x;
                printf("%d\n",ans);
            }
        }else if (n>100 && x>y)
        {
            if (r2 == 0)
            {
                ans = d2 * x;
                printf("%d\n",ans);  
            }else if (r2 != 0)
            {
                d3=r2/4;  
                r3=r2%4;  
                if (r3 == 0)
                {
                    ans = d2*x + d3*y;
                    printf("%d\n",ans);
                }else if (r3 != 0)
                {
                    ans = d2*x + d3*y + y;  
                    printf("%d\n",ans);
                } 
            }  
        }else if (n<=100 && x==y)
        {
            printf("%d\n",x);
        }else if (n>100 && x==y)
        {
            if (r2 == 0)
            {
                ans = d2*x;
                printf("%d\n",ans);
            }else if (r2 != 0)
            {
                ans = d2*x +x;
                printf("%d\n",ans);
            }   
        }  
    }
    return 0;
}