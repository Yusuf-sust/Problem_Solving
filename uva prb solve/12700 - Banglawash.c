#include <stdio.h>

int main()
{
    int tc, n, b, w, t, a, i, j, d;
    char c;
    scanf("%d", &tc);
    for(i = 1; i <= tc; ++i)
    {
        b = 0;
        w = 0;
        t = 0;
        a = 0;
        scanf("%d ", &n);
        for(j = 0; j < n; ++j)
        {
            scanf("%c", &c);
            if(c == 'B')
                b += 1;
            else if(c == 'W')
                w += 1;
            else if(c == 'T')
                t += 1;
            else
            {
                a += 1;
            }
        }
        if(a == n)
            printf("Case %d: ABANDONED\n", i);
        else
        {
            d = n - a;
            if(b == d)
                printf("Case %d: BANGLAWASH\n", i);
            else if(w == d)
                printf("Case %d: WHITEWASH\n", i);
            else if(b > w)
                printf("Case %d: BANGLADESH %d - %d\n", i, b, w);
            else if(w > b)
                printf("Case %d: WWW %d - %d\n", i, w, b);
            else if(t == d)
                printf("Case %d: DRAW %d %d\n", i, b, t);
            else
            {
                printf("Case %d: DRAW %d %d\n", i, b, t);
            }
        }
    }

    return 0;
}
