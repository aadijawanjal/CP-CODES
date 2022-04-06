#include<iostream>
#define ll long long int
using namespace std;
#define datta main

int datta() {
    ll t;
    cin >> t;
    while(t--){
        ll n, x, a, b, c;
        cin >> n >> x;
        if (x == 0)
        {
            a = 0;
            b = 0;
            c = n;
        }else if(x%3==0)
        {
            a = x / 3;
            b = 0;
            c = n%3;
        }
        else if (x < 3*n)
        {
            for (a = 0; a <= n ;a++)
            {
                for ( b = 0 ; b <= n; b++)
                {
                    c = n - (a + b);
                    if (3*a + (-1)*b == x && a+b+c == n && c>=0)
                    {
                        break;
                    }  
                }
            }
        }
        if(c>=0){
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    return 0;
}