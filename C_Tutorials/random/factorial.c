#include <stdio.h>
int ftz(int n)
{
    if (n < 0)
    {
        return -1;
    }

    int count = 0;

    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}
int main()
{

    long long int n;
    scanf("%d",&n);
    printf("%d\n",ftz(n));
    return 0;
}