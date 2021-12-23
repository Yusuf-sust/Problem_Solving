#include <stdio.h>

int main()
{
    int t, i, n, m, a, b, s;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        scanf("%d%d", &n, &m);
        a = n / 3;
        b = m / 3;
        s = a * b;
        printf("%d\n", s);
    }

    return 0;
}
