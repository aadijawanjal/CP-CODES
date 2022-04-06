/* Editor --> Datta Gangji.
   Date --> 24/03/2022 */
#include<iostream>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int n;
        if (n%2 == 0)
        {
            cout << n << endl;
        }else
            cout << n / 2 + 1 << endl;
    }
}