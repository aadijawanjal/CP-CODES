#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int sum=0;
    int *a;
    a = (int*)malloc(n * sizeof(int));
    for (int i=0; i<n; i++) {
    scanf("%d",&a[i]);
    }
    
    for (int i=0; i<n; i++) {
    sum=sum + a[i];
    }
    printf("%d",sum);
    free(a);
    return 0;
}