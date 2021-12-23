#include <stdio.h>
#include <math.h>
#define phi acos(-1)

int main()
{
    int n, i;
    double l, w, r, a, ar, ag;
    //scanf("%d", &n);
    /*for(i = 0; i < n; ++i){
        scanf("%lf", &l);
        w = (3 * l) / 5;
        r = (3 * l) / 15;
        ar = phi * r * r;
        a = l * w;
        ag = a - ar;
        printf("%.2lf %.2lf\n", ar, ag);
    }*/
    printf("%lf\n", phi);

    return 0;
}
