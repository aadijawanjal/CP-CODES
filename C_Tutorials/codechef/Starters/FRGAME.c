#include <stdio.h>

int main(void)
{
    int a, b, c, d, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a < b)
            a = a + c;  //a-N b-S 
        else
            b = b + c;


        if (b <= a)
            b = b + d;  // b += d
        else
            a = a + d; 

        if (a >= b)
            printf("N\n");
        else
            printf("S\n");
    }
    return 0;
}
