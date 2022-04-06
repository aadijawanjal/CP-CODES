#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n;
        cin >> x;
        //trying different approach
        if (n%3==0)
        {
            cout << 2 * (n/3) * x << endl;
        }
        else if(n%3 == 1)
            cout << (2 * (n/3) * x) + x << endl;
        else
            cout << (2 * (n/3) * x) + 2 * x << endl;
    }
    return 0;
}