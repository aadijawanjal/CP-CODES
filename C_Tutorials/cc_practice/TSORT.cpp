#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

#define datta main

int datta() {
    long long int t;
    scanf("%lld",&t);
    long long int a[t];
    for (long long int i = 0; i < t; i++)
    {
        cin>>a[i];
    }

    sort(a,a+t);
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}