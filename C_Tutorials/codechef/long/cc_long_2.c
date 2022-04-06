#include<stdio.h>
#include<math.h>
int main(void){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,y;
        float x;
        scanf("%d",&n);
        x = pow((0.143*n) , n);
        y = floor(x);
       
        if ( (x - y) < 0.5 )
        {
            printf("%d\n",(int)y);
        }else{
            printf("%d\n",(int)y + 1);
        }
        

       
    }
    
}