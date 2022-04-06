/* Editor --> Datta Gangji.
   Date --> 29/03/2022 */
#include <iostream>
using namespace std;
#define datta main

int datta(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[10], k;
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        cin >> k;
        int ans;
        for (int i = 9; i >= 0; i--)
        {
            if (a[i] > k)
            {
                ans = i;
                break;
            }
            k = k - a[i];
        }
        cout << ans+1 << "\n";
    }
}