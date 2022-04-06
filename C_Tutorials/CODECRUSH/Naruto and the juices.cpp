/* Editor --> Datta Gangji.
   Date --> 26/03/2022 */
#include <iostream>
using namespace std;
#define datta main

int datta(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q, r, s, u;
        int a = 0;
        cin >> p >> q >> r >> s >> u;
        if (p + q <= s && r<=u)
        {
                a=1;
            // if (r <= u)
            // {
            // }

        }
        else if (r + q <= s && p<=u)
        {
                a=1;
            // if (p <= u)
            // {
            // }

        }
        else if (r + p <= s && q<=u)
        {
                a=1;
            // if (q <= u)
            // {
            // }

        }
        if (a)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}