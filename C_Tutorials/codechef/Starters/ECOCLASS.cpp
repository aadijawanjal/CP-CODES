#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int s[n], d[n],ginti=0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
            if (d[i]==s[i])
            {
                /* code */
                ginti++;
            }
            
        }
        cout << ginti << endl;
    }
    return 0;
}