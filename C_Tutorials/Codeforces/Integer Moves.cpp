#include<iostream>
#include<cmath>
#define ll long long int
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        float c = sqrt(a * a + b * b);
        
        if (a==0 && b==0)
        {
            cout << 0 << endl;
        }else if ((double)c == (ll)c)
        {
            cout << 1 << endl;
        }else
            cout << 2 << endl;

        // for (int i = 1; i < a; i++)
        // {
        //     for (int j = 1; j < b; j++)
        //     {
        //         /* code */
        //     }
            
        // }
        
    }
    return 0;
}