#include<stdio.h>
int add(int p, int q){
    int c;
    c = p + q;
    return c;
}

int main(void){
    printf("%d",add(10,20));
}