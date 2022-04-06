/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include<iostream>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int ryt = n,left;
        if (m>=n)
        {
            left = 0;
        }else
            left = n - m;

        cout << ryt + left << "\n";
    }
}