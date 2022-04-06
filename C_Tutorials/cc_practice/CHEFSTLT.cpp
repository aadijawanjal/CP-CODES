/* Editor --> Datta Gangji.
   Date --> 29/03/2022 */
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define datta main

int datta(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int ginti1 = 0, ginti2 = 0, ginti3 = 0;
        string a, b;
        cin >> a;
        cin >> b;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '?' && b[i] == '?')
            {
                ginti1++;
            }
            if (b[i] == '?' && a[i] != '?')
            {
                ginti2++;
            }
            if (a[i] == '?' && b[i] != '?')
            {
                ginti2++;
            }
            if (a[i] != b[i] && a[i] != '?' && b[i] != '?')
            {
                ginti3++;
            }
        }
        // int ans = abs(ginti1 - ginti2);
        // int ans1 = abs(ginti1 + ginti2);
        cout << ginti3 << " " << ginti3 + ginti1 + ginti2 << "\n";
    }
}