#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n,help;
        cin >> n;
        int a[n];
        for (int i = 1; i < n; i++)
        {
            if (a[i]%2!=0 && a[i-1]%2!=0)
            {
                help = i + 1;

            }
            
        }
        
    }
    return 0;
}