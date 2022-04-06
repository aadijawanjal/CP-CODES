#include<iostream>
using namespace std;
#define datta main
#define ll long long int
// int fact(ll n)
// {
//     if(n==0){
//         return 1;
//     }else{
//         return n * fact(n - 1);
//     }
// }
int datta() {
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        
        // cout << pro;
        ll sum = (n * (n + 1)) / 2;
        if (sum%n==0)
        {
            cout << "YES" << endl;
        }else
            cout << "NO" << endl;
        
    }
    return 0;
}