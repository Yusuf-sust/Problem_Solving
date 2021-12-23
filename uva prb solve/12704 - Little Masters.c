#include <stdio.h>
#include <math.h>

int main()
{
    int i, x, y, r, t;
    float d, min, max;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        scanf("%d %d %d", &x, &y, &r);
        d = sqrt(x*x+y*y);
        min = (float)r - d;
        max = (float)r + d;
        printf("%.2lf %.2lf\n", min, max);
    }

    return 0;
}
