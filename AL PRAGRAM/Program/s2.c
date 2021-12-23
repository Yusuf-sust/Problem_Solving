#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        for(k = (n - 1); k >= i; --k)
        {
            printf(" ");
        }
        for(j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(i = 1; i <= (n - 1); ++i)
    {
        for(k = 1; k <= i; ++k)
        {
            printf(" ");
        }
        for(j = (n - 1); j >= i; --j)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


