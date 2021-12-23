#include <stdio.h>

int main()
{
    int x, y, z, i, n, TC = 1;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d %d %d", &x, &y, &z);
        if(x > y && x > z && y > z)
            printf("Case %d: %d\n", TC++, y);
        else if(x > y && x > z && y < z)
            printf("Case %d: %d\n", TC++, z);
        else if(y > x && y > z && x > z)
            printf("Case %d: %d\n", TC++, x);
        else if( y > x && y > z && x < z)
            printf("Case %d: %d\n", TC++, z);
        else if(z > x && z > y && x > y)
            printf("Case %d: %d\n", TC++, x);
        else if(z > x && z > y && x < y)
            printf("Case %d: %d\n", TC++, y);
    }

    return 0;
}
