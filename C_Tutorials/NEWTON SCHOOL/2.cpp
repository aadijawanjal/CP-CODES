#include<bits/stdc++.h>
using namespace std;
#define datta main
int datta(){
    int n,nutan=0,tusla=0;
    cin>>n;
    string a;
    cin>>a;
    for (int i = 0; i < n; i++)
    {
        if (a[i]=='N')
        {
            nutan++;
        }
        else
        {
            tusla++;
        }
    }
    if (nutan>tusla)
    {
        cout<<"Nutan\n";
    }else
    {
        cout<<"Tusla\n";
    }
    
    
}