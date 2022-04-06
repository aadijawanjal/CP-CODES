#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        long long int n,r,c_even=0,c_odd=0;
        cin >> n;
        while (n != 0)
        {
            r = n % 10;
            n = n / 10;
            if (r==0)
            {
                continue;
            }
            
            if (r%2==0)
            {
                c_even++;
            }else
                c_odd++;

        }
        if (c_even > 2 || c_odd > 2)
        {
            cout << "YES" << endl;
        }else
            cout << "NO" << endl;

        
    }
    return 0;
}