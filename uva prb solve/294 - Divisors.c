#include <stdio.h>

int div(int n)
{
    int i, r = 2;
    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
            r += 1;
    }

    return r;
}

int main()
{
    int n, l, u, r, res, i, j, x;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        res = 0;
        scanf("%d %d", &l, &u);
        for(j = l; j <= u; ++j)
        {
            r = div(j);
            if(res < r)
            {
                res = r;
                x = j;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", l, u, x, res);
    }

    return 0;
}
