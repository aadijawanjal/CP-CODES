/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main
double square(double num)
{
    return (num * num);
}
int datta(void)
{
    int num;
    double n;
    printf("Enter the no --> ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.2f\n", num, n);
}