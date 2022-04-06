/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main
int numPrint(int);
int datta(void)
{
    int n = 1;
    printf(" The natural numbers are --> ");
    numPrint(n);
    printf("\n\n");
    return 0;
}
int numPrint(int n)
{
    if (n <= 50)
    {
        printf(" %d ", n);
        numPrint(n + 1);
    }
}