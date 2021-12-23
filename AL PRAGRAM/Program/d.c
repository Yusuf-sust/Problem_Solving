#include <stdio.h>

int main()
{
    int i, j, k, l, m, n, a, b, c, d;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        for(j = n - 2; j >= i; --j)
        {
            printf(" ");
        }
        for(k = 1; k <= i + 1; ++k)
        {
            a = k;
            if(a > 9)
            {
                a = a / 10;
            }
            printf("%d", a);
        }
        for(m = k - 2; m >= 1; --m)
        {
            b = m;
            if(b > 9)
            {
                b = b / 10;
            }
            printf("%d", b);
        }
        printf("\n");
    }
    for(i = n - 1; i >= 0; --i)
    {
        for(j = n; j > i; --j)
        {
            printf(" ");
        }
        for(k = 1; k <= i; ++k)
        {
            c = k;
            if(c > 9)
            {
                c = c / 10;
            }
            printf("%d", c);
        }
        for(m = k - 2; m >= 1; --m)
        {
            d = m;
            if(d > 9)
            {
                d = d / 10;
            }
            printf("%d", d);
        }
        printf("\n");
    }

    return 0;
}
