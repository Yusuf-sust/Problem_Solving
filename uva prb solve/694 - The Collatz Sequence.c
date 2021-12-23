#include <stdio.h>

int main()
{
    long long int s, e, coun, T = 1, p;
    while(scanf("%lld %lld", &p, &e) == 2)
    {
        if(p < 0 && e < 0)
            break;
        coun = 1;
        s = p;
        while(s > 1)
        {
            if(s % 2 == 0)
            {
                s = s / 2;
            }
            else
                s = 3 * s + 1;
            if(s <= e)
                coun += 1;
            else
                break;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", T++, p, e, coun);
    }

    return 0;
}
