/* Editor --> Datta Gangji.
   Date --> 25/03/2022 */
#include<iostream>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int gold = 2;
        if (a==x||a==y)
        {
            gold--;
            if (b==x||b==y)
            {
                gold--;
            }
        }else if (b==x||b==y)
        {
            gold--;
        }
        
        cout << gold << endl;
    }
}