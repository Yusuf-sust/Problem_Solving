#include <stdio.h>

int main()
{
    int i, n, x, y;
    long long int a, b;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        scanf("%d", &x);
        a = x;
        b = 0;
        for(i = 1; i <= (n - 1); ++i)
        {
            scanf("%d", &y);
            a += y;
            b += a;
        }
        printf("%lld\n", b);
    }

    return 0;
}
