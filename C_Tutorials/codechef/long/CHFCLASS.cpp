#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n < 6)
        {
            cout << "0" << endl;
        }
        else if (n % 7 >= 6 )
        {
            cout << (n / 7) + 1 << endl;
        }
        else
            cout << n / 7 << endl;
    }
    return 0;
}