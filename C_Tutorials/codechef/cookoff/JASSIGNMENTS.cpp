#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if (10-x>=3)
        {
            cout << "Yes" << endl;
        }else
            cout << "No" << endl;
        
    }
    return 0;
}