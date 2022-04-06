#include<iostream>
using namespace std;
#define datta main
#define ll long long int

int datta() {
    ll t,position=0;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if (n%2 == 0)
        {
            cout << n/2 << endl;
            /* code */
        }else
            cout << -(n/2 + 1) << endl;
    }
    return 0;
}