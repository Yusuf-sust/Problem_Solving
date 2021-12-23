#include <stdio.h>

int mod(long long int b, long long int p, long long int m);

int main()
{
    long long int b, p, m;
    int t, i;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld", &b, &p, &m);
        printf("%d\n", mod(b,p,m));
    }

    return 0;
}

int mod(long long int b, long long int p, long long int m)
{
    if(p == 0)
        return 1;
    if(p % 2 == 0)
        return (mod(b, p/2, m)*mod(b, p/2, m))%m;
    return (mod(b, p - 1, m) * (b % m))%m;
}
