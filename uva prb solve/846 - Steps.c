#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    double x, y, r;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%lf%lf", &x, &y);
        if(x == 0 && y == 0)
        {
            printf("0\n");
            continue;
        }
        if(x == y)
        {
            printf("0\n");
            continue;
        }
        r = floor(sqrt((4 * (y - x)) - 1));
        printf("%.0lf\n", r);
    }

    return 0;
}
