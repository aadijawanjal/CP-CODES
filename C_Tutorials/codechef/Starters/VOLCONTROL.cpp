/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include<iostream>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int a, s;
        cin >> a >> s;
        cout << abs(a - s) << "\n";
    }
}