#include <stdio.h>

int main()
{
    int i, j, k, l, n;
    scanf("%d", &n);
    for(i = 1; i <= (n + 1)/ 2; ++i)
    {
        for(j = (n - 1) / 2; j >= i; --j)
        {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); ++k)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i <= (n / 2); ++i)
    {
        for(j = 1; j <= i; ++j)
        {
            printf(" ");
        }
        for(k =n - 2; k >= (2 * i - 1); --k)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

