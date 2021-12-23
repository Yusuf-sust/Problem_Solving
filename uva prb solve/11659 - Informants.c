#include <stdio.h>

int main()
{
    int a[1000], i, j, x, y, m, n, sum, p;
    while(scanf("%d %d", &m, &n) == 2)
    {
        if(m ==0 && n == 0)
            break;
        sum = 0;
        p = 0;
        for(i = 0; i < n; ++i)
        {
            scanf("%d %d", &x, &y);
            if(y < 0)
                p = -1 * y;
            else
                p = y;
            if(a[p] >= 0)
                a[p] = y;
        }
        for(j = 1; j <= m; ++j)
        {
            if(a[j] > 0)
                sum++;
        }
        printf("%d\n", sum);
        for(i = 0; i <= 100; ++i)
        {
            a[i] = 0;
        }
    }

    return 0;
}
