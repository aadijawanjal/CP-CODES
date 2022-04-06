#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n, x, a, b, c;
        cin >> n >> x;
        if (x == 0)
        {
            a = 0;
            b = 0;
            c = n;
        }else if(x % 3 == 0)
        {
            a = x / 3;
            b = 0;
            c = 0;
        }
        else{
            cout << "NO";
            exit(0);
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}