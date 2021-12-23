#include <stdio.h>
#include <math.h>

int main()
{
    double n, r;
    int t = 1;
    while(scanf("%lf", &n) == 1)
    {
        if(n == 0)
            break;
        r = ceil((3 + sqrt(9 + 8 * n)) / 2.0);
        printf("Case %d: %.0lf\n", t++, r);
    }

    return 0;
}
