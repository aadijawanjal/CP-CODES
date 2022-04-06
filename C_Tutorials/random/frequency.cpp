#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
#define datta main

int datta(void) {
    string a;
    cin >> a;
    sort(a.begin(), a.end());
    int freq[100]={0},help;
    for (int i = 0; i < a.size(); i++)
    {
        help = i;
        for (int j = 0; j < a.size(); j++)
        {
            while (a[i] == a[j])
            {
                freq[i]++;
            }
            i = j;
        }
        
    }
    for (int i = 0; i < a.size(); i++)
    {
    cout << "frequency of " << a[0] << "is" << freq[0] << endl;
    }
    
}