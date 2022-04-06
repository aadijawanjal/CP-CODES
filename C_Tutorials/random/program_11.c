#include<stdio.h>

int main(void)
{
    int v1=100,v2=2,v3;
    v3 = v1%=(3 + ++v1 + v2--);
    
   
    printf("%d %d %d",v1,v2,v3);
    
}