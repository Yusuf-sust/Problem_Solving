#include <stdio.h>

int main()
{
    long long int x, y, z;
    int n, i, TC = 1;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%lld %lld %lld", &x, &y, &z);
        if( x + y <= z || x + z <= y || y + z <= x)
            printf("Case %d: Invalid\n", TC++);
        else if(x == y && y == z)
            printf("Case %d: Equilateral\n", TC++);
        else if(x != y && y != z && x != z)
            printf("Case %d: Scalene\n", TC++);
        else
            printf("Case %d: Isosceles\n", TC++);
    }

    return 0;
}
