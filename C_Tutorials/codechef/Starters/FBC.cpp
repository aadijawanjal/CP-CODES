#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << abs(a - b) << endl;
    }
    return 0;
}