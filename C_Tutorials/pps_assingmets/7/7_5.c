// 5)	Write a program in C which is a Menu-Driven Program
//  to compute the area of the various geometrical shape.

#include<stdio.h>
#define datta main

int datta(void) {
    char a;
    printf("Enter the Shape you want the area of [c/r/t/s] --> ");
    scanf("%c", &a);
    float area1,area2,area3,area4;
    int r ,len ,bre ,d ,b ,c ,h ;
    switch (a)
    {
        case 'c':
        {
                   /* CIRCLE */
        printf("Input radius of Circle --> ");
        scanf("%d",&r);

        area1 = (3.14) * (r*r);
        printf("Area of Circle --> %.2f\n",area1);
        break;
        }

        case 'r':
        {            /* RECTANGLE */
        printf("Input length of Rectangle --> ");
        scanf("%d",&len);
        printf("Input breadth of Rectangle --> ");
        scanf("%d",&bre);

        area2 = len * bre;
        printf("Area of Rectangle --> %.2f\n",area2);
        break;
        }

        case 't':
        {
                    /* TRIANGLE */
        printf("Input base of Triangle --> ");
        scanf("%d",&b);
        printf("Input height of Triangle --> ");
        scanf("%d",&h);
        
        area3 = (b*h)/2;
        printf("Area of Triangle --> %.2f\n",area3);
        break;
        }

        case 's':
        {
                    /* SQUARE */
        printf("Input length of Square --> ");       
        scanf("%d",&len);

        area4 = len * len;
        printf("Area of Square --> %.2f\n", area4);
        }
    }
    return 0;

}