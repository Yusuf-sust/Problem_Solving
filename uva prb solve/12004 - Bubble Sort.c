#include <stdio.h>

int main()
{
    int t, n, i, j, TC = 1;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        long long int m = 0, o;
        scanf("%d", &n);
        for(j = 1; j <= n; ++j)
        {
            m += j - 1;
        }
        o = m / 2;
        if((2 * o) == m)
        {
            printf("Case %d: %lld\n", TC++, o);
        }
        else
        {
            printf("Case %d: %lld/2\n", TC++, m);
        }
    }

    return 0;
}
