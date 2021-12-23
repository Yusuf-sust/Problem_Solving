#include <stdio.h>

int main()
{
    int i, j, n, c;
    long long int g, l, m, x, y;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        c = 0;
        scanf("%lld %lld", &g, &l);
        if((l % g) != 0)
        {
            printf("-1\n");
        }
        else
        {
            m = g * l;
            x = g;
            while((m / x) >= x)
            {
                if(m % x == 0)
                {
                    y = m / x;
                    if(y % g == 0)
                    {
                        printf("%lld %lld\n", x, y);
                        break;
                    }

                }
            }
        }
    }

    return 0;
}
