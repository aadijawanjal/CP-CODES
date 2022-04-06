#include<iostream>
#include<string.h>
#include<string>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--)
    {
        char s[5], a[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
            if ((int)s[i] == (int)a[i])
            {
                cout << "G";
            }
            else
                cout << "B";
        }
        cout << endl;
    }
    return 0;
}