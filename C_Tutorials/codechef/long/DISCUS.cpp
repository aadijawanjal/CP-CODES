#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (a>=b && a>=c)
        {
            cout << a << endl;
        }else if (b>=c)
        {
            /* code */
            cout << b << endl;

        }else
            cout << c << endl;
    }
    return 0;
}