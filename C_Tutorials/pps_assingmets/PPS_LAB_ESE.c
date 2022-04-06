/* Editor --> Datta Gangji.
   Date --> 01/04/2022 */
#include <stdio.h>
#define datta main

int datta(void)
{
    int x, y;
    printf("Enter Co-ordinates you want to check (X,Y) --> ");
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > 0 && y > 0)
    {
        printf("\nPoint lies in First Quadrant!\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("\nPoint lies in Second Quadrant!\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("\nPoint lies in Third Quadrant!\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("\nPoint lies in Fourth Quadrant!\n");
    }
    else if (x == 0 && y != 0)
    {
        printf("\nPoint lies on Y-Axis!\n");
    }
    else if (x != 0 && y == 0)
    {
        printf("\nPoint lies on X-Axis!\n");
    }
    else
    {
        printf("\nPoint lies on Origin!\n");
    }
}