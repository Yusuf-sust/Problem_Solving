#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, x, y;
    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a == -1 && b == -1)
            break;
        x = abs(a - b);
        y = 100 - x;
        if(x < y)
            printf("%d\n", x);
        else if(x > y)
            printf("%d\n", y);
        else
            printf("%d\n", x);
    }

    return 0;
}
