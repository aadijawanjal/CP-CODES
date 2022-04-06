/* Editor --> Datta Gangji.
   Date --> 21/03/2022 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define datta main

int datta(void)
{
    int a, b, c;
    float root1, root2;
    printf("Enter values of a,b and c of Quadratic equation (a != 0) --> ");
    scanf("%d%d%d", &a, &b, &c);
    int dis = (b * b - 4 * a * c);
    if (dis == 0)
    {
        root1 = -(b / (2 * a));
        root2 = root1;
    }
    else if (dis > 0)
    {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
    }
    else
    {
        root1 = (-b + sqrt(-dis)) / (2 * a);
        root2 = (-b - sqrt(-dis)) / (2 * a);
        printf("%.2f*i %.2f*i", root1, root2);
        exit(0);
    }
    printf("%.2f %.2f", root1, root2);
}