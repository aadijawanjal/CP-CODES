#include <iostream>
using namespace std;
#define datta main

int datta()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, u, d, i;
        cin >> n >> u >> d;
        int arr[n];
        for ( i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int para = 1;
        for ( i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] == arr[i])
            {
                continue;
            }
            else if (arr[i + 1] > arr[i] && abs(arr[i + 1] - arr[i]) <= u)
            {
                continue;
            }
            else if (arr[i + 1] < arr[i] && abs(arr[i + 1] - arr[i]) <= d)
            {
                continue;
            }
            else if (arr[i + 1] < arr[i] && abs(arr[i + 1] - arr[i]) > d && para==1)
            {
                para = 0;
                continue;
            }
            else
            {
                break;
            }
        }
        cout << i+1 << endl;
    }
    return 0;
}