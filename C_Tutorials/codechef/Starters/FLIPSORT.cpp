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
        int n, kitne0 = 0,i=0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                kitne0++;
            }
        }
        int kitne1 = 0, a[kitne0],capture[kitne0];
        for (int j = 0; j < kitne0-1; j++)
        {
            while (s[i] != '0')
            {
                kitne1++;
                i++;
            }
            i++;
            a[j] == kitne1;
        }
        for (int i = 0; i < kitne0-1; i++)
        {
            /* code */
        }
        
    }
}