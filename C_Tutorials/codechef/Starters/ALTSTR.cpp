#include<iostream>
#include<string>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n,ginti_1=0,ginti_0=0;
        cin >> n;
        string b;
        cin >> b;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '1')
            {
                ginti_1++;
            }else
                ginti_0++;
        }
        int ans = min(ginti_0, ginti_1);
        
        if (ans == 0)
        {
            cout << 1 << endl;
        }else if (n%2==0)
        {
            cout << 2 * ans << endl;
        }else 
            cout << (2 * ans) + 1 << endl;
        
    }
    return 0;
}