#include<stdio.h>
int main(void){
    int s[5]= {'0','1','1','0','0'};

    s[5]=s[5]/10;
    printf("%d",s[5]);
}