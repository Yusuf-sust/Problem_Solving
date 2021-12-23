#include <stdio.h>

int main()
{
    int ar[100][100], i, j, k, l, one, zero, a, b, max, res, n, m;
    scanf("%d %d", &n, &m);
    one = 0, zero = 0;
    max = 0;
    a = - 1, b = - 1;
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < m; ++j)
        {
            scanf("%d", &ar[i][j]);
            if(ar[i][j] == 1)
                one += 1;
            else
                zero += 1;

        }
    }
    printf("Number of One is : %d\n", one);
    printf("Number of Zero is : %d\n", zero);
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < m; ++j)
        {
            res = 0;

            if(ar[i][j] == 1)
            {
                res++;
                l = j + 1;
                for(k = i + 1; k < n; ++k)
                {
                    if(ar[k][l] == 1)
                    {
                        l++, res++;
                    }
                    else
                        break;
                }
            }
            else
                continue;
            if(res > max)
            {
                max = res;
                a = i;
                b = j;
            }
        }
    }
    printf("Maximum one is: %d\n", max);
    if(a < 0 && b < 0)
        printf("Initial position not found\n");
    else
        printf("Initial position is: (%d,%d)\n", a, b);

    return 0;
}
