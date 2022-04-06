#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >> n;
        int age[n];
        for (int i = 0; i < n; i++)
        {
            cin >> age[i];
            if (age[i] >= 10 && age[i] <= 60)
            {
                count++;
            }
            
        }
        cout << count << endl;
    }
    return 0;
}