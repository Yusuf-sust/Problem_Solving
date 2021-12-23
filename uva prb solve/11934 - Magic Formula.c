#include <stdio.h>

int main()
{
    int a, b, c, d, l, i, count;
    long long int x;
    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &l) == 5)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
            break;
        count = 0;
        for(i = 0; i <= l; ++i)
        {
            x = a * ( i * i) + b * i + c;
            if(x % d == 0)
                count += 1;
        }
        printf("%d\n", count);
    }

    return 0;
}
