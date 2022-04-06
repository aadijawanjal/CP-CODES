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
        for (int i = 0; i < n; i++)
        {
            if(i%2 == 0){ 
               a[i] = i +1;
            }
            else if (i%2 != 0)
            {
                 a[i] = (a[i-1] * 1) * 2; 
            }
           
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", a[i]);
            if(i != (n-1)){
            printf(" ");}
        }
        cout << endl;
    }
    return 0;
}