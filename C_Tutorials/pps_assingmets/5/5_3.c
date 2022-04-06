/* 3)  Write C program to find out 
       area of circle, perimeter of circle,
       area of rectangle, perimeter of rectangle,
       area of triangle, perimeter of triangle.
*/

#include<stdio.h>
#define datta main
int datta() 
{
    char a;
    float area1,area2,area3,peri1,peri2;
    int r,len,bre,d,b,c,h;

                   /* CIRCLE */
        printf("Input radius of Circle --> ");
        scanf("%d",&r);
        float circum;
        area1 = (3.14) * (r*r);
        circum = (2 * 3.14) * r;
        printf("Area of Circle --> %.2f\n",area1);
        printf("Circumference of Circle --> %.2f\n\n\n",circum);
    
                   /* RECTANGLE */
        printf("Input length of Rectangle --> ");
        scanf("%d",&len);
        printf("Input breadth of Rectangle --> ");
        scanf("%d",&bre);

        area2 = len * bre;
        peri1 = 2 * (len + bre);
        printf("Area of Rectangle --> %.2f\n",area2);
        printf("Perimeter of Rectangle --> %.2f\n\n\n",peri1);
        
                    /* TRIANGLE */
        printf("Input base of Triangle --> ");
        scanf("%d",&b);
        printf("Input height of Triangle --> ");
        scanf("%d",&h);
        printf("Input side c of Triangle --> ");
        scanf("%d",&c);
        printf("Input side d of Triangle --> ");
        scanf("%d",&d);

        area3 = (b*h)/2;
        peri2 = b+c+d;
        printf("Area of Triangle --> %.2f\n",area3);
        printf("Perimeter of Triangle --> %.2f\n",peri2);
    
    return 0;
}