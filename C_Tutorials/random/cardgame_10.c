#include <stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int k,c;
        scanf("%d",&k);
        c = 52 % k;
        printf("%d\n",c);
    }
    
}