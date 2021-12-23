#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, E, x1, x2;
    scanf("%lf%lf%lf", &A, &B, &C);
    E = sqrt((B * B) - (4 * A *C));
    x1 = (-B + E) / (2 * A);
    x2 = (-B - E) / (2 * A);
    printf("%lf %lf\n", x1, x2);

    return 0;
}
