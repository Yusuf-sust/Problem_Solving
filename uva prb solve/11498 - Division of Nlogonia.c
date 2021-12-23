#include <stdio.h>

int main()
{
    int i, n, a, b, x, y;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        scanf("%d %d", &a, &b);
        for(i = 0; i < n; ++i)
        {
            scanf("%d %d", &x, &y);
            if(x == a || y == b)
                printf("divisa\n");
            else if(x > a && y > b)
                printf("NE\n");
            else if(x > a && y < b)
                printf("SE\n");
            else if(x < a && y > b)
                printf("NO\n");
            else
            {
                printf("SO\n");
            }
        }
    }

    return 0;
}
