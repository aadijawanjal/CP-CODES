//galat hai!!
#include <stdio.h>
#define datta main

int datta(void)
{
    int n, count = 0, count_sp = 0;
    printf("Enter Number --> ");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("Prime\n");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("Prime\n");
        }
        else
            printf("Not Prime\n");
    }

    int d, r,c=0;
    // bool flag = true;

    /* code */
    while (n != 0)
    {
        /* code */

        // n=23
        d = n / 10; // 2
        r = n % 10; // 3
        n = d;      // 2
        if (r == 0 || r == 1)
        {
            printf("Not Super Prime");
            // flag = false;
            c = 1;
            break;
        }
        else
        {
            for (int i = 2; i < r; i++)
            {
                /* code */
                if (r == 2)
                {
                    break;
                }
                else if (r % i == 0)
                {
                    count_sp++;
                }
            }
        }
    }
    if (count_sp != 0)
    {
        printf("Not Super Prime\n");
    }
    else if (c==0)
    {
        /* code */
        printf("Super Prime\n");
    }
}