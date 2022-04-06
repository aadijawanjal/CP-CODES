#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int n;
    long long int c=0,i,b;
    char d;
    scanf("%lld %c",&n,&d);
    
    //scanf("%c",&d);
    char a[n];
    //scanf("%s",a);
    for(i=0; i<n ;i++)
    {
        scanf("%c ",&a[i]);
    }
    
    for(i=0; i<n ;i++)
    {
        if(a[i]==d)
        {
            c=c+1;
        }    
    }
    printf("%lld",c);
    //printf("%d",b);
    return 0;
}