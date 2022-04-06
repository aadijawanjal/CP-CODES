#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // cout << n;
        int a[n];  //1 4 15 60
        a[0] = 1;
        for (int i = 0; i < n-1; i++)
        {
            if(i%2 == 0){ 
            a[i + 1] = a[i] * n;   //a[1]==4 a[3]==60
            }
            if (i%2 != 0)
            {
                a[i + 1] = (a[i] * n) - 1; //a[2] == 15
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", a[i]);
            printf(" ");
        }
        cout << endl;
    }
    return 0;
}