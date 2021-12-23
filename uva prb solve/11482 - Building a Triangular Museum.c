#include <stdio.h>

int main()
{
    int i, j, k, n, m, l;
    scanf("%d%d", &n, &m);
    for(l = 0; l < m; ++l)
    {
        for(i = 1; i <= n; ++i)
        {
            for(j = n; j >= i+1; --j)
            {
                printf(" ");
            }
            printf("/");
            for(k =1; k < 2*i-1 ; ++k)
            {
                if(i == n)
                    printf("_");
                else
                {
                    printf(" ");
                }
            }
            printf("\\");
            printf("\n");
        }
    }

    return 0;

}
