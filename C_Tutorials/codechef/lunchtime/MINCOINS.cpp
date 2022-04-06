#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if (n%10 == 0)
        {
            cout << n / 10 << endl;
        }else if (n%5 == 0 && n%10 == 5)
        {
            cout << (n/10) + 1 << endl;
        }else
            cout << "-1" << endl;
    }
    return 0;
}