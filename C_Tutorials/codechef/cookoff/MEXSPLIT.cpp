#include<iostream>
#include<algorithm>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]==0)
            {
                count++;
            }
        }
        // int ans = min(count, (n - count));
        int ans = max(count, (n - count));
        cout << ans << endl;
    }
    return 0;
}