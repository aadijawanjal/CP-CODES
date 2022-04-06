// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main(void)
{
	int a,b;
    printf("Enter value of a--> ");
    scanf("%d",&a);
    printf("Enter value of b--> ");
    scanf("%d",&b);

	printf("a & b = %d\n", a & b);    // The result is 00000001

	printf("a | b = %d\n", a | b);    // The result is 00001101

	printf("a ^ b = %d\n", a ^ b);    // The result is 00001100

}
