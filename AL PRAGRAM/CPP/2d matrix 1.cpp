#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, a[100][100], i, j;
    scanf("%d %d", &m, &n);
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Upper Triangle\n");
     for(int i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j < i)
                printf("  ");
            else printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Lower Triangle\n");
     for(int i = 1; i <= m; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
