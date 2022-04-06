//C Program to demonstrate use of relational operators
#include<stdio.h>
int main(void){
    int a,b;
        printf("Enter value of a--> ");
        scanf("%d",&a);
        printf("Enter value of b--> ");
        scanf("%d",&b);

        if (a < b) 
        {
            printf("a is less than b");
        }else if (a > b) 
        {
            printf("a is greater than b");
        }else if (a = b) 
        {
            printf("a is equal to b");
        }
        
    


}