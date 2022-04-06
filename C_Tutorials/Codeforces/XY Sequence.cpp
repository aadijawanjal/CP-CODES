#include<iostream>
#define ll long long int
using namespace std;
#define datta main

int datta() {
    ll t;
    cin >> t;
    while(t--){
        ll n, b, x, y,o ,p,sum=0;
        cin >> n >> b >> x >> y;
        ll arr[n]={0};
        for (int i = 1; i < n+1; i++)
        {
            o = arr[i - 1] + x;
            p = arr[i - 1] - y;
            if (o<=b)
            {
                arr[i] = o;
            }else
                arr[i] = p;
        }
        for (int i = 0; i < n+1; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}
