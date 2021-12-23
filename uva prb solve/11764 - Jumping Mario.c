#include <stdio.h>

int main()
{
    int i, j, n, m, x, y, TC = 1, h, l;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
            h = 0;
            l = 0;
        scanf("%d %d", &m, &x);
        for(j = 0; j < (m - 1); ++j){
            scanf("%d", &y);
            if( x < y)
                h += 1;
            else if(x > y)
                l += 1;
            x = y;
        }
        printf("Case %d: %d %d\n", TC++, h, l);
    }

    return 0;
}
