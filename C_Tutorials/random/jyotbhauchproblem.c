#include<stdio.h>

int main()
{
    int m, p, a, x;
    scanf("%d %d %d %d", &m, &p, &a, &x);
    int interest;
    interest=(a*x*p)/100;
    int income;
    income=a+interest;
    if(income>m){
        printf("YES");
    }
    else{
        printf("NO");
    }
        return 0;
}