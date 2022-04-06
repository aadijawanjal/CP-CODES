#include <stdio.h>
#define datta main

    int gcd(int a, int b)
    {

	    if (a == 0)
	    return b;
	    if (b == 0)
	    return a;

	    if (a == b)
		return a;


    	if (a > b)
		return gcd(a-b, b);
	    return gcd(a, b-a);
    }

int datta()
{
        int t;
        scanf("%d",&t);
        while(t--){
            int a, b, c, g;

            scanf("%d", &b);
            scanf("%d", &c);
            g = gcd(b, c);

            a = c / g;
            printf("%d\n", a);
        }
        return 0;
}


