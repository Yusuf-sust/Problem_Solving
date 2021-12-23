#include <stdio.h>
#include <math.h>

int main()
{
    double n, k, i;
    while(scanf("%lf %lf", &n, &k) == 2)
    {
        i =pow(k, (1.00 / n));
        printf("%.0lf\n", i);
    }

    return 0;
}
