/* Editor --> Datta Gangji.
   Date --> 24/03/2022 */
#include<iostream>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int n,k,ans;
        bool flag = 1;
        cin >> n >> k;
        int diet[n];
        for (int i = 0; i < n; i++)
        {
            cin >> diet[i];
        }
        for (int i = 1; i < n+1; i++)
        {
            /* code */
            if (diet[i-1] >= k)
            {
                diet[i] += (diet[i - 1] - k);
            }
            else
            {
               flag = 0;
               ans = i;
               break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }else
            cout << "NO " << ans << endl;
    }
}