#include <stdio.h>

int main()
{
    int r, n, i, l, x1, x2, y1, y2;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        scanf("%d", &r);
        l = 5 * r;
        y1 = (6 * l) / 20;
        y2 = -1 * y1;
        x1 = (-45 * l) / 100;
        x2 = (55 * l) / 100;
        printf("Case %d:\n", i);
        printf("%d %d\n", x1, y1);
        printf("%d %d\n", x2, y1);
        printf("%d %d\n", x2, y2);
        printf("%d %d\n", x1, y2);
    }

    return 0;
}
