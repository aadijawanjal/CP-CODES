/* Editor --> Datta Gangji.
   Date --> 29/03/2022 */
#include<iostream>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if (a>=50 &&a!=b&& a!=c)
        {
            cout << "A\n";
        }else
        if (b>=50 &&b!=a&& b!=c)
        {
            cout << "B\n";
        }else
        if (c>=50 &&c!=b&& c!=a)
        {
            cout << "C\n";
        }else
            cout << "NOTA\n";
    }
}