/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <iostream>
#include <string>
using namespace std;
#define datta main

int datta(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, ginti1 = 0, ginti2 = 0;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ginti1++;
            }
            else
                ginti2++;
        }
        if (ginti1 > 0 && ginti2 > 0)
        {
            cout << min(x, y) << "\n";
        }
        else
            cout << 0 << "\n";
    }
}