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
    for(int i = 1; i <= m; i++)
    {
        int temp = a[i][n/2+1];
        a[i][n/2+1] = a[m/2+1][i];
        a[m/2+1][i] = temp;
    }
    printf("\n");
    printf("\n");
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


