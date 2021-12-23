#include <stdio.h>
#include <math.h>

int main()
{
    long long int N, P, r, s;
    while(scanf("%lld %lld", &N, &P) == 2)
    {
        if(N == 0 && P == 0)
            break;
        s = pow(N, P);
        r = s % 100007;
        printf("%lld\n", r);
    }

    return 0;
}
