#include <stdio.h>

long long int rev(long long int n);

int main()
{
    long long int n, s, r, x;
    int t, i;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        s = 0;
        r = 0;
        scanf("%lld", &n);
        x = rev(n);
        if(x == n){
            n = n + n;
            s = 1;
        }
        do
        {
            s += 1;
            n = n + r;
            r = rev(n);
        }
        while(r != n);
        printf("%lld %lld\n", s - 1, n);
    }

    return 0;
}

long long int rev(long long int n)
{
    long long int r = 0;
    while(n > 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }

    return r;
}
