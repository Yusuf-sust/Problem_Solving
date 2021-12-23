#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n;
    double x;
    while(scanf("%d", &n) == 1)
    {
        x = (sqrt(1 + 8.0 * (double)n) - 1) / 2;
        i = (int)x;
        if(((i * ( i+ 1)) / 2) == n)
        {
            if(i % 2 == 0)
            {
                printf("TERM %d IS %d/1\n", n, i);
            }
            else printf("TERM %d IS 1/%d\n", n, i);
        }
        else
        {
            j = n - ((i * (i + 1))/ 2);
            j -= 1;
            i += 1;
            if(i % 2 == 0)
            {
                printf("TERM %d IS %d/%d\n", n, 1+j, i-j);
            }
            else printf("TERM %d IS %d/%d\n", n, i-j, 1+j);
        }
    }

    return 0;
}
