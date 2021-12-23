#include <stdio.h>

int main()
{
    int i, j, t, n, k, x, s, s1;
    scanf("%d", &t);
    for(i = 1; i <= t; ++i)
    {
        s = 0;
        s1 = 0;
        scanf("%d%d%d", &n, &k, &x);
        s = (n * (n + 1)) / 2;
        for(j = x; j <= (x + k - 1); ++j)
        {
            s1 += j;
        }
        s -= s1;
        printf("Case %d: %d\n", i, s);
    }

    return 0;
}
