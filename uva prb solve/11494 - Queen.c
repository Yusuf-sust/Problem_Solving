#include <stdio.h>

int main()
{
    int a, b, c, d, m;
    while(scanf("%d%d%d%d", &a, &b, &c, &d) == 4)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;
        if(a == c && b == d)
        {
            m = 0;
            printf("%d\n", m);
        }
        else if(((a == c) && (b != d)) || ((b == d) && (a != c)) || ((a - c) == (b - d)) || ((a - c) == (d - a)) || ((c - a) == (b - d)) || ((c - a) == (d - a)))
        {
            m = 1;
            printf("%d\n", m);
        }
        else
        {
            m = 2;
            printf("%d\n", m);
        }
    }

    return 0;
}
