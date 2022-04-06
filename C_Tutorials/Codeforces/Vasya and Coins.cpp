#include <iostream>
using namespace std;
#define datta main
int datta(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, s;
        cin >> a >> s;
        int cost1 = a, cost2 = s * 2;
        if (cost1 == 0)
        {
            cout << 1 << "\n";
        }
        else if (cost2 == 0)
        {
            cout << a + 1 << "\n";
        }
        else
            cout << cost1 + cost2 + 1 << "\n";
    }
}