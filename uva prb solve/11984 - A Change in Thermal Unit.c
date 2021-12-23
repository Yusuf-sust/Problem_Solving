#include <stdio.h>

int main()
{
    int i, n, TC = 1;
    double x, y, f, c, g;
    scanf("%d", &n);
    for(i =0; i < n; ++i)
    {
        scanf("%lf%lf", &x, &y);
        f = ((9 * x) / 5) + 32;
        g = f + y;
        c = (((g - 32) * 5) / 9);
        printf("Case %d: %.2lf\n", TC++, c);
    }

    return 0;
}
