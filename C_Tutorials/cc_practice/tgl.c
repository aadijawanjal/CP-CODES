#include<stdio.h>
#include<stdlib.h>
#define datta main

int datta() {
    long long int n,w,lead,max=0;
    scanf("%lld",&n);
    long long int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
        lead = a[i] - b[i];

        if (abs(lead) > max)
        {
            max=abs(lead);
            w=i;
        }
    }
    if (a[w]-b[w] >= 0)
    {
        printf("1 %lld",max);
    }else
    {
        printf("2 %lld",max);
    } 
}