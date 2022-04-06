#include<stdio.h>
#include<string.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", &str);

        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(str[i] != str[i+1])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}