#include <stdio.h>
int main()
{
int x,y;

printf("Enter Value of x-->");
scanf("%d",&x);
printf("Enter Value of y-->");
scanf("%d",&y);

int z1,z2;

z1 = x * 2 / y;   //(x*2)/y

z2 = x / 2 * y;   //(x/2)*y
printf("Value of z1--> %d\n",z1);
printf("Value of z2--> %d\n",z2);

return 0;
}