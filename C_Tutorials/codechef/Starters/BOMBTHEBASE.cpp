#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n, x,ans=0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]<x)
            {
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}