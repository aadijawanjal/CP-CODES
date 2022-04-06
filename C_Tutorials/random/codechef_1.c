#include<stdio.h>
int main(void){
    int t;
    scanf("%d",&t);
     while(t--){
         int n,x,y,found=0;
         scanf("%d",&n);
         scanf("%d",&x);
         scanf("%d",&y);
         int a[n];
         for (int i = 0; i < n; i++)
         {
             scanf("%d",&a[i]);
         }
         int b[n];
         for (int i = 0; i < n; i++)
         {
             scanf("%d",&b[i]);
         }
         for (int i = 0; i < n; i++)
         {
             b[i]=b[i]-x;
             if (b[i]!=a[i])   
            {
                b[i]=b[i]+x;
                b[i]=b[i]-y;
            }   
         }
         for (int i = 0; i < n; i++)
         {
             if (a[i]!=b[i])
             {
                printf("No\n");
                found=1;
                break;
             }   
         }
         if (found==0)
         {
            printf("Yes\n");
         } 
     }
}