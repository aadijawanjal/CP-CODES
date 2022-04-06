/* Editor --> Datta Gangji.
   Date --> 30/03/2022 */
#include <stdio.h>
#define datta main

int datta(void)
{
    int fno, sno, *ptr1 = &fno, *ptr2 = &sno;
    printf("Enter  the first number --> ");
    scanf("%d", ptr1);
    printf("Enter  the second  number --> ");
    scanf("%d", ptr2);
    if (*ptr1 > *ptr2)
    {
        printf("%d is the maximum number.\n\n", *ptr1);
    }
    else
    {
        printf("%d is the maximum number.\n\n", *ptr2);
    }
}