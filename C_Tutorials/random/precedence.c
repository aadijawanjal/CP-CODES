#include <stdio.h>
int main() {
   int a,b,c,d,e;
   printf("Enter value of a-->");
   scanf("%d",&a);
   printf("Enter value of b-->");
   scanf("%d",&b);
   printf("Enter value of c-->");
   scanf("%d",&c);
   printf("Enter value of d-->");
   scanf("%d",&d);
   
   e = (a + b) * (c / d);   
   printf("Value of e here is : %d\n",  e );

   e = (a + b) * c / d;      
   printf("Value of e here is : %d\n",  e );

   e = ((a + b) * c) / d;    
   printf("Value of e here is : %d\n" ,  e );

   e = a + (b * c) / d;     
   printf("Value of e here is : %d\n" ,  e );
   return 0;
}