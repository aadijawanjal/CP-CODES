//printing date and time

#include <stdio.h>
#include <time.h>

int main( )
{
    printf("date: %s\n", __DATE__);
    printf ("time: %s", __TIME__);
return 0;
}