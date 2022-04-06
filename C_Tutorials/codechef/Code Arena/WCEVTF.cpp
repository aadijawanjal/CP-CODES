#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n;
        bool t = true;
        cin >> n;
        int shoes[n];
        for (int i = 0; i < n; i++)
        {
            cin >> shoes[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = shoes[i] + ans;
            if (ans>=n)
            {
                t = false;
                cout << "YES" << endl;
                break;
            }
        }
        if (t==true)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}