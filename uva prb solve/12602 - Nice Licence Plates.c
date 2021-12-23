#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char ch;
    int i, j, x, y, sum, ab, t, n;
    double f;
    scanf("%d ", &t);
    for(i = 0; i < t; ++i)
    {
        sum = 0;
        y = 2;
        for(j = 0; j < 3; ++j)
        {
            scanf("%c", &ch);
            x = (int)ch - 65;
            f = pow(26,y);
            sum += x * (int)f;
            y--;
        }
        getchar();
        scanf("%d", &n);
        ab = abs(sum - n);
        if(ab <= 100)
            printf("nice\n");
        else
            printf("not nice\n");
        getchar();
    }

    return 0;
}
