#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n,ginti=0;
        cin >> n;
        int f[n]={0};
        for (int i = 1; i <= n; i++) //2 3 4 5
        {
            for (int j = 1; j < i+1; j++) // 1 2 3 4
            {
                f[i] = f[i-1] | j; //f[3] = 4 | 5 = 5
            }
        }
        for (int i = 1; i < n; i++)
        {
            /* code */
            if (f[i] == f[i+1])
            {
                ginti++;
            }
        }
        cout << ginti << endl;
    }
    return 0;
}