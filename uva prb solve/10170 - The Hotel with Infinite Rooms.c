#include <stdio.h>

int main()
{
    long long int x, y, z;
    while(scanf("%lld %lld", &x, &y) == 2)
    {
        while(x < y)
        {
            z = x;
            x += 1;
            y -= z;
        }
        printf("%lld\n", x);
    }

    return 0;
}
