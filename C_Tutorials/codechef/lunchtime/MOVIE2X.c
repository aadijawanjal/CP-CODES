#include<stdio.h>
#define datta main

int datta() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", (y / 2) + (x - y));
    return 0;
}