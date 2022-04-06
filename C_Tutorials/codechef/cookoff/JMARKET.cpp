#include<iostream>
#include<stdlib.h>
using namespace std;
#define datta main
int datta() {
    int t;
    cin >> t;
    while(t--){
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        int help=min(a,b);
        int help2 = min(help, c);
        cout << ((x - 1) * help2 + help);
    }
    return 0;
}