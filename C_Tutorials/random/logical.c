#include<stdio.h>
int main(void){
    int age;
    printf("What's your Age ");
    scanf("%d",&age);

    if (age>=18 && age<=80)
    {
        printf("\nYou can apply for Driving License!\n");
    }else
    {
        printf("\nYou cannot apply for Driving License\n");
    }
}