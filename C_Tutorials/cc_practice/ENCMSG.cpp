/* Editor --> Datta Gangji.
   Date --> 24/03/2022 */
#include<iostream>
#include<string>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        char temp;
        for (int i = 0; i < n-1; i=i+2)
        {
            /* code */ 
            temp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            s[i] = 'z' - (s[i] - 'a');
        }
        cout << s << endl;
    }
}