#include <stdio.h>

int main()
{
    int i, n, a, b, c, d, e, f, g, sum, h, TC = 1;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
            sum = 0;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

        if(e > f)
        {
            h = e;
            if(f > g)
                h += f;
            else
                h += g;
        }
        else if(e > g)
        {
            h = f + e;
        }
        else
            h = f + g;

        h /= 2;

        sum = a + b + c + d + h;
        if (sum >= 90 && sum <= 100)
            printf("Case %d: A\n", TC++);
        else if(sum < 90 && sum >= 80)
            printf("Case %d: B\n", TC++);
        else if( sum < 80 && sum >= 70)
            printf("Case %d: C\n", TC++);
        else if(sum < 70 && sum >= 60)
            printf("Case %d: D\n", TC++);
        else if(sum < 60 && sum >=0)
            printf("Case %d: F\n", TC++);

    }

    return 0;
}
