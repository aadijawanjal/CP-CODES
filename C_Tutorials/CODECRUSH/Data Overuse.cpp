/* Editor --> Datta Gangji.
   Date --> 26/03/2022 */
#include <iostream>
using namespace std;
#define datta main

int datta(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k; //2 2
        int t[n],d[n],sum_t=0,diff=0,ans_t=0,capture=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> t[i]; //1 2
            cin >> d[i]; //2 3
        }
        for (int i = 0; i < n; i++)
        {
            sum_t += t[i]; //1 3
            if (sum_t>=k)
            {
                diff = sum_t - k; //3-2=1
                capture = i; //1
                break;
            }
        }
        for (int i = capture+1; i < n; i++)
        {
            /* code */
            diff += t[i]; //2
            ans_t = diff * d[i]; //2*3=6
        }
        if (capture+1 >= n)
        {
            ans_t = diff * d[capture]; //2*3=6
            /* code */
        }
        cout << ans_t << endl;
    }
}