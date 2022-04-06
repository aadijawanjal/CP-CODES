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
        int c, d, l;
        cin >> c >> d >> l;
        if (4 * c + 4 * d > l)
        {
            cout << "no\n";
        }
        else if (l % 4 != 0)
        {
            cout << "no\n"
        }
        else if (4 * c + 4 * d == l)
        {
            cout << "yes\n";
        }
        else if (4 * d == l)
        {
            cout << "yes\n";
        }
        else
        {
            cout >> "no\n";
        }
    }
}