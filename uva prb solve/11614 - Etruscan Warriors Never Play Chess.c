#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, y, x, m;
    double z;
    int t, i;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        scanf("%lld", &n);
        y = 1 + 8 * n;
        z = sqrt(y) - 1.0;
        m = (double)z;
        x = (m / 2);
        printf("%lld\n", x);
    }

    return 0;
}
