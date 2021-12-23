#include <stdio.h>

int main()
{
    double n, m, e;
    int i, t, a, b;
    scanf("%d", &t);
    for(i = 1; i <= t; ++i)
    {
        scanf("%lf %lf %d %d", &n, &m, &a, &b);
        e = (m * (double)(a + b) - (double)a * n) / (double)b;
        if(e < 0.0 || e > 10.0)
        {
            printf("Case #%d: Impossible\n", i);
        }
        else
            printf("Case #%d: %.2lf\n", i, e);
    }

    return 0;
}
