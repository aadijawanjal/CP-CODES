#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], ans = n;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]%7 == 0 || (a[i] + 1)%7 == 0)
            {
                ans--;
            }
        }
        cout << (8 + ans) << endl;
    }
    return 0;
}