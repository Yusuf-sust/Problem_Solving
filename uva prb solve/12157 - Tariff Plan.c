#include <stdio.h>

int main()
{
    int i, k, t, n, x, m, j, a, b, c, d, e;
    scanf("%d", &t);
    for(i = 1; i <= t; ++i)
    {
        m = 0;
        j = 0;
        a = 0;
        b = 0;
        scanf("%d", &n);
        for(k = 0; k < n; ++k)
        {
            scanf("%d", &x);
            if(x < 30)
            {
                m += 10;
            }
            else
            {
                e = x - 29;
                a = e / 30;
                b = e % 30;
                if(b > 0)
                    b = 10;
                else
                {
                    b = 0;
                }
                m += a * 10 + b + 10;
            }
            if(x < 60)
            {
                j += 15;
            }
            else
            {
                x -= 59;
                c = x / 60;
                d = x % 60;
                if(d > 0)
                    d = 15;
                else
                {
                    d = 0;
                }
                j += c * 15 + d + 15;
            }
        }
        if(m < j)
            printf("Case %d: Mile %d\n", i, m);
        else if(j < m)
            printf("Case %d: Juice %d\n", i, j);
        else
        {
            printf("Case %d: Mile Juice %d\n", i, m);
        }

    }

    return 0;
}

