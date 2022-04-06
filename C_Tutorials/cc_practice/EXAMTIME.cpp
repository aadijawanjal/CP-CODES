#include<iostream>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        int d1, d2, d3, s1, s2, s3;
        cin >> d1 >> d2 >> d3 >> s1 >> s2 >> s3;
        int d_total = d1 + d2 + d3;
        int s_total = s1 + s2 + s3;
        if (d_total>s_total)
        {
            cout << "Dragon" << endl;
        }else if(s_total>d_total)
            cout << "Sloth" << endl;
            
        if (d_total==s_total)
        {
            if (d1>s1)
            {
                cout << "Dragon" << endl;
            }else if (s1>d1)
            {
                cout << "Sloth" << endl;
            }else{
                if (d2>s2)
                {
                    cout << "Dragon" << endl;
                }else if (s2>d2)
                {
                    cout << "Sloth" << endl;
                }else{
                    if (d3>s3)
                    {
                        cout << "Dragon" << endl;
                    }else if (s3>d3)
                    {
                        cout << "Sloth" << endl;

                    }else
                        cout << "Tie" << endl;  
                }
            }  
        }
    }
    return 0;
}