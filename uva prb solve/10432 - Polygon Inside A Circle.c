#include<stdio.h>
#include<math.h>

int main()
{
    double n, r, a, s, p;
    while(scanf("%lf %lf", &r, &n) == 2)
    {
        s = acos(-1);
        p = sin((2.0 * s) / n);
        a = ((r * r * n * p) / 2);
        printf("%.3lf\n", a);
    }
    return 0;
}
