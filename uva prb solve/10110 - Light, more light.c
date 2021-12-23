#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, sq;
    while(scanf("%lld", &n) == 1)
    {
        if(n == 0)
            break;
        sq = sqrt(n);
        if((sq * sq) == n)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
