#include <stdio.h>

int main()
{
    int w, x, y, z, sum;
    while(scanf("%d %d %d %d", &w, &x, &y, &z) == 4)
    {
        if(w == 0 && x == 0 && y == 0 && z == 0)
            break;
        sum = 1080;
        if(x > w)
            sum += ((w - x) + 40) * 9;
        else
            sum += (w - x) * 9;
        if(y < x)
            sum += ((y - x) + 40) * 9;
        else
            sum += (y - x) * 9;
        if(y < z)
            sum += ((y - z) + 40) * 9;
        else
            sum += (y - z) * 9;
        printf("%d\n", sum);
    }

    return 0;
}
