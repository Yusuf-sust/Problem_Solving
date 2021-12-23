#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    double r, a;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        scanf("%lf", &r);
        a = (4 * r * r) - ((2 * acos(0.0)) * r * r);
        printf("Case %d: %.2lf\n", i, a);
    }

    return 0;
}
