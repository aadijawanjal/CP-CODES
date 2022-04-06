/* Editor --> Datta Gangji.
   Date --> 26/03/2022 */
#include <iostream>
#include <bits/stdc++.h>
#define ll float
using namespace std;
#define datta main

int datta(void)
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll num[4];
        long long int a[4], b[4], ginti = 0;
        bool flag_1 = false, flag_2 = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> num[i]; // 69 70 0 -68
        }
        sort(num, num + 4);                 //-68 0 69 70
        a[0] = ceil((num[2] + num[0]) / 2); // 0
        a[1] = ceil((num[2] + num[1]) / 2); // 34
        a[2] = ceil((num[3] + num[0]) / 2); // 1
        a[3] = ceil((num[3] + num[1]) / 2); // 35

        b[0] = num[2] - a[0]; // 147
        b[1] = num[2] - a[1]; // 69
        b[2] = num[3] - a[0]; // 148
        b[3] = num[3] - a[1]; // 70

        sort(a, a + 4);
        sort(b, b + 4);

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (a[i] != 0 && b[j] != 0 && a[i] + b[j] == num[2] && a[i] - b[j] == num[0] && a[i] * b[j] == num[3] && (a[i] / b[j] == num[1]))
                {
                    cout << a[i] << " " << b[j] << endl;
                    flag_2 = 1;
                    break;
                }
                else if (a[i] != 0 && b[j] != 0 && a[i] + b[j] == num[2] && a[i] - b[j] == num[1] && a[i] * b[j] == num[3] && (a[i] / b[j] == num[0]))
                {
                    cout << a[i] << " " << b[j] << endl;
                    flag_2 = 1;
                    break;
                }
                else if (a[i] != 0 && b[j] != 0 && a[i] + b[j] == num[3] && a[i] - b[j] == num[1] && a[i] * b[j] == num[2] && (a[i] / b[j] == num[0]))
                {
                    cout << a[i] << " " << b[j] << endl;
                    flag_2 = 1;
                    break;
                }
                else if (a[i] != 0 && b[j] != 0 && a[i] + b[j] == num[3] && a[i] - b[j] == num[0] && a[i] * b[j] == num[2] && (a[i] / b[j] == num[1]))
                {
                    cout << a[i] << " " << b[j] << endl;
                    flag_2 = 1;
                    break;
                }
                else
                {
                    ginti++;
                    flag_1 = true;
                }
            }
            if (flag_2 == 1)
            {
                break;
            }
        }
        if (flag_1 == true && ginti >= 15)
        {
            cout << -1 << " " << -1 << endl;
        }
    }
}