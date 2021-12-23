#include <stdio.h>

int main()
{
    int A[100][100], B[100][100], C[100][100], S[100][100], i, j, k, n, m, l, o;
    while(scanf("%d%d", &n, &m) == 2)
    {
        if(n == 0)
            break;
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < n; ++j)
            {
                scanf("%d", &A[i][j]);
                if(i == j)
                    B[i][j] = 1;
                S[i][j] = 0;
            }
        }
        for(l = 0; l < m; ++l)
        {
            for(i = 0; i < n; ++i)
            {
                for(j = 0; j < n; ++j)
                {
                    o = 0;
                    for(k = 0; k < n; ++k)
                    {
                        o += A[i][k] * B[k][j];
                    }
                    C[i][j] = o;
                }
            }
            for(i = 0; i < n; ++i){
                for(j = 0; j < n; ++j){
                    B[i][j] = C[i][j];
                }
            }
            for(i = 0; i < n; ++i)
            {
                for(j = 0; j < n; ++j)
                {
                    S[i][j] += C[i][j];
                }
            }
        }
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < n; ++j)
            {
                printf("%d ", S[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;

}
