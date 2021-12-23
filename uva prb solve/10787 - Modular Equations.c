#include <stdio.h>

int main()
{
    int i, j, k, l, n, a, b, c, d, e, f, count, m, p;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        count = 0;
        for(j = a; j <= b; ++j)
        {
            for(k = c; k <= d; ++k)
            {
                for(l = e; l <= f; ++l)
                {
                    m = (j + k) % l;
                    p = (j - k) % l;
                    if(p < 0){
                        p = p + l;
                    }
                    if(m == p){
                        count += 1;
                        printf("a = %d, b = %d, m = %d\n", j, k, l);
                    }
                }
            }
        }
        printf("Case %d: %d\n", i, count);
    }

    return 0;
}
