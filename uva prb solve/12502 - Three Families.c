#include <stdio.h>

int main()
{
    int i, n, a, b, c;
    double d, e, f;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d %d %d", &a, &b, &c);
        a = 3 * a;
        b = 3 * b;
        c = 3 * c;
        f = c;
        d = (a + b)/ 3;
        e = c / d;
        if(d > b)
            f += (d - b) * e;
        else
            f -= (b - d) * e;
        f = f / 3;
        a = (int)f;
        if(a < 0)
            a = 0;
        printf("%d\n", a);
    }
    return 0;
}
