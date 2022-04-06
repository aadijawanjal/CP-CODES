/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main

void solve(int, int);

int datta(void)
{
    int a, b;
    printf("Enter numbers to be swaped --> \n");
    scanf("%d%d", &a, &b);

    printf("\nBefore swapping --> a = %d and b = %d\n", a, b);
    solve(a, b);
    return 0;
}

void solve(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping --> a = %d and b = %d\n", x, y);
}