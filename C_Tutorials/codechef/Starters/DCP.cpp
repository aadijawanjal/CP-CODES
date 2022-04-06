#include <iostream>
#include<cmath>
#define ll long long int
using namespace std;
ll mod = (1e9)+7;
#define datta main

int datta()
{
        ll n,m;
        cin >> n >> m;
        ll comp[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> comp[i];
        }
        for (ll i = 0; i < m; i++)
        {
            ll reactant, product;
            cin >> reactant;
            cin >> product;
            int times, product_num;
            for (ll i = 0; i < 2 * product; i++)
            {
                cin >> times;
                cin >> product_num;
                comp[product_num - 1]= comp[product_num - 1] % mod + (times * comp[reactant - 1]) % mod;
                i++;
            }
            comp[reactant - 1] = 0;
        }
        
        for (ll i = 0; i < n; i++)
        {   if(comp[i] > (ll)((1e9)+7))
            cout << (comp[i]) % mod << endl;
            else
            cout << (comp[i]) << endl;
        }
    
    return 0;
}