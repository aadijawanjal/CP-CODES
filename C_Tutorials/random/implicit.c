// An example of implicit conversion
#include<stdio.h>
int main()
{
	int x = 10;   // integer x
	char y = 'a'; // character c
	x = x + y;
	// y implicitly converted to int. ASCII and value of 'a' is 97
	printf("x = %d", x);
	return 0;   
}
