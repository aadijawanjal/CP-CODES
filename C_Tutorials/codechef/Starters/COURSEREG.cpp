/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include<iostream>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int a, s, d;
        cin >> a >> s >> d;
        if (s-d>=a)
        {
            cout << "Yes\n";
        }else
            cout << "No\n";
        
    }
}