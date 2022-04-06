/* Editor --> Datta Gangji.
   Date --> 27/03/2022 */
#include <stdio.h>
#define datta main
int *findlarger(int *, int *);
int datta(void)
{
    int a = 0, b = 0;
    int *result;
    printf(" :: Pointer : Show a function returning pointer : \n");
    printf("Input the First Number --> ");
    scanf("%d", &a);
    printf("Input the Second Number --> ");
    scanf("%d", &b);
    *result = *findlarger(&a, &b);
    printf("The Number %d is larger.\n", *result);
}

int *findlarger(int *n, int *m)
{
    if ( *n > *m)
        return n;
    else
        return m;
}