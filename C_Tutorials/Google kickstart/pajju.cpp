#include <iostream>
#include <cmath>
#include <cstring>
#define ll long long int
#define maximum(a, b, c) ((max(a, b) > c) ? max(a, b) : c)
#define pajju main
using namespace std;

int interesting(int a)
{
    ll sum = 0;
    ll product = 1;
    while (a > 0)
    {
        sum = sum + a % 10;
        product = product * (a % 10);
        a = a / 10;
    }
    if (product % sum == 0)
    {
        return 1;
    }
    return 0;
}
int pajju()
{
    ll t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ll count = 0;
        for (int i = a; i <= b; i++)
        {
            if (interesting(i) == 1)
            {
                count++;
            }
        }
        cout <<"Case #" <<t+1<<": "<< count << endl;
    }
    return 0;
}