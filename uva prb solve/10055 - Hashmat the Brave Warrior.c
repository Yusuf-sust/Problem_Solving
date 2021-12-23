#include <stdio.h>

int main()
{
    int x, y, min;
    while(scanf("%d %d", &x, &y) == 2)
    {
        min = y - x;
        printf("%d\n", min);
    }

    return 0;
}
