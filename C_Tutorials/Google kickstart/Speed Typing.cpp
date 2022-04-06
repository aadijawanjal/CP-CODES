#include <iostream>
#include <string>
using namespace std;
#define datta main

int datta()
{
    int t;
    cin >> t;
    int c = t;
    while (t--)
    {
        string a, b;
        int count = 0;
        cin >> a;
        cin >> b;
        for (int i = 0; i < a.length(); i++)
        {
            for (int j = i; j < b.length(); j++)
            {
                if ((int)a[i] == (int)b[j])
                {
                    count++;
                    break;
                }
            }
        }
        // cout << count << endl;
        // cout << a.length() << endl;
        // cout << b.length() << endl;
        if(a.length() > b.length()){
            cout << "Case #" << c-t << ": "<< "IMPOSSIBLE" << endl;
        }else
        if (count == a.length() && count < b.length())
        {
            cout << "Case #" << c-t << ": " << b.length() - count << endl;
        }
        else
            cout << "Case #" << c-t << ": "<< "IMPOSSIBLE" << endl;
    }
    return 0;
}