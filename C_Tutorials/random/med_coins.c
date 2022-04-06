#include<stdio.h>
int main(void){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a,b,c,total;
        scanf("%d",&n);
        for (int i = n; i >= 0 ; i--)
        {
          a=n/2;
          b=n/3;
          c=n/4;
          total=a+b+c;
        }
        
        if(total>=n){
            printf("%d\n",total);
        }else{
            printf("%d\n",n);
        }


    }

}