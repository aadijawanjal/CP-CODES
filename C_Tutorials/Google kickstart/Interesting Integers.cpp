#include <iostream>
#define ll long long int
using namespace std;
#define datta main
int checking(ll n){
    ll r, pro = 1, sum = 0;
    while (n > 0)
        {
            r = n % 10;
            sum = sum + r;
            pro = pro * r;
            n = n / 10;
        }
        if (pro % sum == 0)
        {
            return 1;
        }else
        return 0;
} 
int datta()
{
    ll t;
    ll a, b;
    cin >> t;
    int help = t;
    while (t--)
    {
        ll c = 0;
        cin >> a >> b;
        for (ll i = a; i <= b; i++)
        {
            if(checking(i) == 1)
            {
                c++;
            }
        }
        cout << "Case #" << help - t << ": " << c << endl;
    }
    return 0;
}