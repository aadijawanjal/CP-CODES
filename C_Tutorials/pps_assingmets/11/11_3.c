/* Editor --> Datta Gangji.
   Date --> 27/03/2022 */
#include<stdio.h>
#include<math.h>
#define datta main

double f(double x){
    return pow(x, 2);
}

int datta(void) {
    int n, i;
    double a, b, h, x, sum = 0, answer;
    printf("Enter Number of Sub-Intervals(EVEN ONLY) --> ");
    scanf("%d", &n);
    printf("Enter initial limit --> ");
    scanf("%lf", &a);
    printf("Enter Final limit --> ");
    scanf("%lf", &b);

    h = fabs(b - a) / n;
    for (i = 0; i < n; i++)
    {
        x = a + i * h;
        if (i%2==0)
        {
            sum += 2 * f(x);
        }else
            sum += 4 * f(x);
        
    }
    answer=(h/3)*(f(a) + f(b)+sum);

    printf("The Integral is  --> %.3lf", answer);
}