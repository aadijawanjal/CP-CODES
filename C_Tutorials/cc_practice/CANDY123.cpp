/* Editor --> Datta Gangji.
   Date --> 29/03/2022 */
#include<iostream>
using namespace std;
#define datta main

int datta(void) {
    int t;
    cin >> t;
    while(t--){
        int a, b,i=1,j=2,count_1=0,count_2=0;
        cin >> a >> b;
        while (a>=sum1)
        {
            a = a - i;
            i += 2;
            count_1++;
        }
        while (b>=sum2)
        {
            b = b - j;
            j += 2;
            count_2++;
        }
        if (count_1>count2)
        {
            cout << "Limak\n";
        }else
            cout << "Bob\n";
    }
}