#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << 2*a + 4*b << endl;
    }
    return 0;
}