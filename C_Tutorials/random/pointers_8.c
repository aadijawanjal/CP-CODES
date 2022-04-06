// WLUG Community Meet - Pointers 1

#include <stdio.h>

int main(void) {
    
    int x = 20;
    int y = 50;

    y = *(&y) * *(&x); //1000

    printf("%d\n", y); //1000

    y = ((long int)&x - (long int)&y); //4 or -4

    printf("%d\n", y); //4 or -4

    int* ptr;

    ptr = &x; //

    *ptr = y++;

    printf("%d\n", x);  //5

    char* c;

    c = (char *)&y;

    printf("%d\n", *c); //5

    if(sizeof(ptr) == sizeof(c))
    {
        printf("All Pointers have same size as all of them store memory address no matter what the datatype is.\n");
    }
    else
    {
        printf("Pointers of different Datatype have different size.\n");
    }

    return 0;
}