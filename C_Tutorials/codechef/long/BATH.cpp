#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if ((2 * y) > x)
        {
            cout << "0" << endl;
        }else{
            cout << x / (2 * y) << endl;
        }
        
    }
    return 0;
}