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
        for(j = i; j <= n; j++)
        {
           int temp = a[i][j];
           a[i][j] = a[j][i];
           a[j][i] = temp;
        }
    }
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

