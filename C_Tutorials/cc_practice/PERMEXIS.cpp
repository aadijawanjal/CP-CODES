#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n,c=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (abs(a[i]-a[i+1])>1)
            {
                c = 1;
                break;
            }
        }
        if (c==0)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}