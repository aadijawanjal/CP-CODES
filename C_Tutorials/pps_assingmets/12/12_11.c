/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main

int datta(void)
{
    int a;
    a = 10;
    int *p = &a;
    printf("%d\n", *p);
    printf("%d\n", *&a);
    printf("%u\n", &a);
    printf("%u\n", p);
    printf("%u\n", &p);

}