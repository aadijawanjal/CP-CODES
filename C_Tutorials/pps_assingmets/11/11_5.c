/* Editor --> Datta Gangji.
   Date --> 27/03/2022 */
#include <stdio.h>
#define datta main

struct distance
{
    int feet;
    float inch;
} d1, d2, result;

int datta(void)
{
    printf(" :: Enter 1st Distance :: \n");
    printf("Enter Feet --> ");
    scanf("%d", &d1.feet);
    printf("Enter Inch --> ");
    scanf("%f", &d1.inch);

    printf(" :: Enter 2nd Distance :: \n");
    printf("Enter Feet --> ");
    scanf("%d", &d2.feet);
    printf("Enter Inch --> ");
    scanf("%f", &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while (result.inch>=12.0)
    {
        result.inch -= 12.0;
        result.feet++;
    }
    printf("\n Sum of Distances = %d\' - %.1f\"", result.feet, result.inch);
}