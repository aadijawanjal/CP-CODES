#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n%2==0)
        {
            cout << (n / 2) << endl;
        }else
            cout << (n / 2) + 1 << endl;
    }
    return 0;
}