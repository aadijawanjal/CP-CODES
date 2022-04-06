#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = n;
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        for (int i = 0; i < n-1; i++)
        {
            if (s[i]==s[i+1])
            {
                count--;
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}