#include <stdio.h>

int main()
{
    int n, i, x, y, z, sum, a, b, c;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        sum = 0;
        scanf("%d %d %d", &x, &y, &z);
        a = x + y;
        while(a >= z)
        {
            b = a / z;
            sum += b;
            c = a % z;
            a = b + c;
        }
        printf("%d\n", sum);
    }

    return 0;
}
