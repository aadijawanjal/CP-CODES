#include <iostream>
#include <string>
using namespace std;
#define datta main

int datta()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        // cout << n;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c1++;
            }
        }
        c2 = n - c1;
        // cout << c1 << c2;
        if ((abs(c1 - c2) == n-2) || n == 1)
        {
            cout << "Yes" << endl;
        }
        else if (c1 == 0 || c2 == 0)
            cout << "No" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}