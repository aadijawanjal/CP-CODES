/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main

union number
{
    int a;
    int b;
};
int datta(void)
{
    union number n = {10};
    union number *ptr = &n;
    printf("a = %d\n", ptr->a);

    ptr->a = 100;
    printf("a = %d\n", ptr->a);

    ptr->b = 200;
    printf("b = %d\n", ptr->b);
}
