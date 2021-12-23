#include <stdio.h>

int main()
{
    int n, i, t, s, p, TC = 1, b, f;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        scanf("%d %d %d", &n, &s, &p);
        b = s + p;
        if(b > n && (b % n))
        {
            f = b % n;
        }
        else if(b > n && (b % n == 0))
        {
            f = n;
        }
        else
        {
            f = b;
        }
        printf("Case %d: %d\n", TC++, f);
    }

    return 0;
}
