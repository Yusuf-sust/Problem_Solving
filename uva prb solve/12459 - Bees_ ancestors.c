#include <stdio.h>

int main()
{
    int n, i;
    long long int r, a, b;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        a = 1;
        b = 2;
        for(i = 1; i < n; ++i)
        {
            long long int sum = a;
            a = b;
            b = a + sum;
        }
        printf("%lld\n", a);
    }

    return 0;
}
