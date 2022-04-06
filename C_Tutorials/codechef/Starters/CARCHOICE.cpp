#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int x1, x2, x3, x4;
        cin >> x1 >> x2 >> x3 >> x4;
        float c1, c2;
        c1 = x3 / x1;
        c2 = x4 / x2;

        if (c1<c2)
        {
            cout << "-1" << endl;
        }else if (c2<c1)
        {
            cout << "1" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}