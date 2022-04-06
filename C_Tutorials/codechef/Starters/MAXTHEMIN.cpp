/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include<iostream>
#include<algorithm>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int a, s;
        cin >> a >> s;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int min = arr[0], max = arr[0];
        int capture = s;
        for (int i = 0; i < a; i++)
        {
            if(arr[i]<min){
                min = arr[i];
            }
            if (arr[i]>max)
            {
                max = arr[i];
            }
        }
        sort(arr, arr + a);
        if (a-1<=s)
        {
            cout << max << "\n";
        }else
            cout << arr[capture] << "\n";
    }
}