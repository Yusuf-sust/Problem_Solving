#include <stdio.h>

int main()
{
    long long int a, b;
    int t = 1;
    while(scanf("%lld %lld", &a, &b) == 2)
    {
        if(a == 0 && b == 0)
            break;
        if(a == 0 || a == 1)
            printf("Case %d: :-\\\n", t++);
        else if(a <= b)
            printf("Case %d: :-|\n", t++);
        else
            printf("Case %d: :-(\n", t++);
    }

    return 0;
}
