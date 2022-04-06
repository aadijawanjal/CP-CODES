/* Editor --> Datta Gangji.
   Date --> 27/03/2022 */
#include <stdio.h>
#include <string.h>
#define datta main
struct Books
{
    char name[25];
    int Book_no;
    float Price;
    char author[15];
} b[2];

int datta(void)
{
    printf(" :: Enter Details of Books :: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("Entering details of %d book\n", i + 1);
        printf("Enter ID no. of Book --> ");
        scanf("%d", &b[i].Book_no);
        printf("Enter Name of Book --> ");
        getchar();
        gets(b[i].name);
        printf("Enter Name of Author --> ");
        gets(b[i].author);
        printf("Enter Price of Book --> ");
        scanf("%f", &b[i].Price);
    }

    for (int i = 0; i < 2; i++)
    {
        printf(" :: Following are the details of %d book :: \n", i + 1);
        printf("Book ID --> %d\n", b[i].Book_no);
        printf("Book Name --> %s\n", b[i].name);
        printf("Book Author --> %s\n", b[i].author);
        printf("Book Price --> %.2f\n", b[i].Price);
    }
}