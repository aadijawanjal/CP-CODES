/* Editor --> Datta Gangji.
   Date --> 27/03/2022 */
#include <stdio.h>
#include <string.h>
#define datta main

struct Employee
{
    int age, salary;
    char name[25];

} e[100];

int datta(void)
{
    int n;
    printf("Enter the no of employees(<100) --> ");
    scanf("%d", &n);
    printf(" :: Enter Employee Details as Name, Age, Salary :: \n");
    for (int i = 0; i < n; i++)
    {
        getchar();
        gets(e[i].name);
        scanf("%d", &e[i].age);
        scanf("%d", &e[i].salary);
    }

    printf("\nEMP-NAME\t   EMP-AGE\t\tEMP-SAL\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%d\n", e[i].name, e[i].age, e[i].salary);
    }
}