#include<stdio.h>
#define datta main

int datta(void) {
    int a,b,c,d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int diff1, diff2;

    if (a>=b)
    {
        diff1 = a - b;
    }else
        diff1 = b - a;

    if (c>=d)
    {
        diff2 = c - d;
    }else
        diff2 = d - c;

    if (diff1==diff2)
    {
        printf("YES\n");
    }else
        printf("NO\n");
}