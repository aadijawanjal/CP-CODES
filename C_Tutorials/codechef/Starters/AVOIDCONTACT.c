#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, n, r; //n-non infected   r-rooms
        scanf("%d", &x);
        scanf("%d", &y);
        n = x - y;
        if (x == y)
        {
            y = (y * 2) - 1; 
        }
        else
        {
            y = y * 2;
        }

        r = y + n;
        printf("%d\n", r);
    }
    return 0;
}