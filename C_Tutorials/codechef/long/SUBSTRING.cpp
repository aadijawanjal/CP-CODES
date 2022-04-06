#include<iostream>
#include<string>
using namespace std;
#define datta main

int datta() {
    int t;
    cin >> t;
    while(t--){
        string s;
        int in = 0;
        while (s[in] != '\0')
        {
            cin >> s[in];
            in++;
        }
        
        int count[25]={0};
        for (int i = 0; i < s.length(); i++)
        {
            count[i] = 1;
            for (int j = i; j < s.length(); j++)
            {
                if ((int)s[i]==(int)s[j+1])
                {
                    count[i]++;
                }
            }
        }
        int ans = 0;
        bool flag = true;
        for (int i = 0; i < 25; i++)
        {
            if (count[i]==1)
            {
                ans++;
                flag = false;
            }
        }

        if (flag==false)
        {
            printf("%d\n", ans);
        }else
            printf("-1\n");
    }
    return 0;
}