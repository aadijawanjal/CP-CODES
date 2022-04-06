/* Editor --> Datta Gangji.
   Date --> 25/03/2022 */

#include <bits/stdc++.h>

using namespace std;
#define datta main

int datta(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ginti_1 = 0, ginti_0 = 0, moja = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ginti_1++;
            }
            else
                ginti_0++;
        }
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                moja++;
            }
        }
        if (moja == n / 2)
        {
            cout << moja << "\n";
        }
        else if (ginti_1 == ginti_0)
        {
            cout << (n / 2) - 1 << "\n";
        }
        else
            cout << min(ginti_0, ginti_1) << "\n";
    }
}