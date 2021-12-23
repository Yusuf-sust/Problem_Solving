#include <stdio.h>

int main()
{
    int i, k, l, n, a, b, c, d, e, f, count, m;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        count = 0;
        for(k = c; k <= d; ++k)
        {
            m = 2 * k;
            for(l = e; l <= f; ++l)
            {
                if((m % l) == 0)
                {
                    count += 1;
                }
            }
        }

        printf("Case %d: %d\n", i, count * (b - a + 1));
    }

    return 0;
}

