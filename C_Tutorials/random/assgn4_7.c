// C Program to demonstrate use of = and == operator
#include<stdio.h>
int main(void){
    int a,b,c;
    printf("Enter value of a--> ");
    scanf("%d",&a);
    printf("Enter value of b--> ");
    scanf("%d",&b);

    c = a;
    printf("Value of c--> %d\n",c);

    if (a == b)
    {
        printf("Values of a and b are equal\n");
    }else
    {
        printf("Values of a and b are not equal\n");
    }
    
}