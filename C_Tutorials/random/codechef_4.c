#include<stdio.h>
int main(void){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c,p,q,r,h;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&p);
        scanf("%d",&q);
        scanf("%d",&r);
        h=(p+q+r)/2;
        if ((p+b+c)>h || (a+q+c)>h || (a+b+r)>h)
        {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }   
}