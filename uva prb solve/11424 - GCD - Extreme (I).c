#include <stdio.h>

int gcd(int i, int j);

int main()
{
    unsigned long long G;
    int i, j, n;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        G = 0;
        for(i = 1; i < n; ++i)
        {
            for(j = i + 1; j <= n; ++j)
            {
                G += gcd(i, j);
            }
        }
        printf("%llu\n", G);
    }

    return 0;

}

int gcd(int i, int j)
{
    int k;
    if(i > j)
    {
        int temp = i;
        i = j;
        j = i;
    }
    for(k = i; k >= 1; k--)
    {
        if(j % k == 0 && i % k == 0)
        {
            return k;
            break;
        }
    }
}
