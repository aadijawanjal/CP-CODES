#include<stdio.h>
#include<string.h>
#define datta main

int datta() {
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000];
        scanf("%s", &s);
        int n;
        n = strlen(s);
        int l = 0, r = n - 1,temp=0,compare,count=0;
        for (int i = l; i < r; i++)
        {
            temp = s[i];
            s[i] = s[r];
            s[r] = temp;
            r--;
            // compare = strcmp(s, strrev(s));
            // if (compare != 0)
            // {
            //     count++;
            // }else
            // {
            //     printf("%d\n", count);
            // }  
        }  
    }
    return 0;
}