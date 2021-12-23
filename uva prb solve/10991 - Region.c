#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    double x, y, z, a, b, c, e, f, g, s, A, B, C, D, E, F;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%lf %lf %lf", &x, &y, &z);
        a = y + z;
        b = x + z;
        c = x + y;
        s = (a + b + c) / 2.0;
        E = sqrt(s * (s - a) * (s - b) * (s - c));
        A = acos(((b * b) + (c * c) - (a * a)) / ( 2.0 * b * c));
        B = acos(((a * a) + (c * c) - (b * b)) / ( 2.0 * a * c));
        C = acos(((b * b) + (a * a) - (c * c)) / ( 2.0 * b * a));
        e = (.5 * A * x * x);
        f = (.5 * B * y * y);
        g = (.5 * C * z * z);
        D = e + f + g;
        F = E - D;
        printf("%lf\n", F);
    }

    return 0;

}
