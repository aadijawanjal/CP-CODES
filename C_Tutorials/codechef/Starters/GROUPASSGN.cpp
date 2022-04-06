#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        cout << 2 * n - (x - 1) << endl;
    }
    return 0;
}