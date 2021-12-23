#include <stdio.h>

int main()
{
    int x, y, z, i, n;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d %d %d", &x, &y, &z);
        if(x > y && x > z && y > z)
            printf("%d\n", y);
        else if(x > y && x > z && y < z)
            printf("%d\n", z);
        else if(y > x && y > z && x > z)
            printf("%d\n", x);
        else if( y > x && y > z && x < z)
            printf("%d\n", z);
        else if(z > x && z > y && x > y)
            printf("%d\n", x);
        else if(z > x && z > y && x < y)
            printf("%d\n", y);
    }

    return 0;
}

