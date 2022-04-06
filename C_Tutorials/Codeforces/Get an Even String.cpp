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
        string s;
        cin >> s;
        int ans = 0;
        if (s.length() % 2 != 0)
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    i++;
                    ans--;
                }
                else
                    ans++;
            }
            cout << ans + 1 << "\n";
        }
        else
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    ans++;
                }
                i++;
            }
            cout << ans << "\n";
        }
    }
}
