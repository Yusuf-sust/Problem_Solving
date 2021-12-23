#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    double a1, b1, c1, a2, b2, c2, x, y, g, x1, y1;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &c1, &a2, &b2, &c2);
        g = abs((a1 * b2) - (a2 * b1));
        x1 = abs((b1 * c2) - (b2 * c1));
        y1 = abs((a2 * c1) - (a1 * c2));
        x = (x1 / g);
        y = (y1 / g);
        printf("Case %d: x = %.3lf, y = %.3lf\n", i, x, y);
    }

    return 0;
}
